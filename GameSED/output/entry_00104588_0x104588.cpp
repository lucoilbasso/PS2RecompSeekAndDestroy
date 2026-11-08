#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00104588
// Address: 0x104588 - 0x1045bc
void entry_00104588_0x104588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104588_0x104588");
#endif

    ctx->pc = 0x104588u;

label_104588:
    // 0x104588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10458c:
    // 0x10458c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10458cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_104590:
    // 0x104590: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x104590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_104594:
    // 0x104594: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x104594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_104598:
    // 0x104598: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x104598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10459c:
    // 0x10459c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1045a0:
    if (ctx->pc == 0x1045A0u) {
        ctx->pc = 0x1045A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10459Cu;
        // 0x1045a0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1045A4u;
        goto label_1045a4;
    }
    ctx->pc = 0x10459Cu;
    {
        const bool branch_taken_0x10459c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1045A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10459Cu;
        // 0x1045a0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10459c) {
            ctx->pc = 0x1045BCu;
            return;
        }
    }
    ctx->pc = 0x1045A4u;
label_1045a4:
    // 0x1045a4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1045a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1045a8:
    // 0x1045a8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1045a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_1045ac:
    // 0x1045ac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1045acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1045b0:
    // 0x1045b0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1045b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1045b4:
    // 0x1045b4: 0x60f809  jalr        $v1
label_1045b8:
    if (ctx->pc == 0x1045B8u) {
        ctx->pc = 0x1045B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045B4u;
        // 0x1045b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1045BCu;
        goto label_fallthrough_0x1045b4;
    }
    ctx->pc = 0x1045B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1045BCu);
        ctx->pc = 0x1045B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1045B4u;
        // 0x1045b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1045B4u, 0x1045BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1045b4:
    ctx->pc = 0x1045BCu;
}
