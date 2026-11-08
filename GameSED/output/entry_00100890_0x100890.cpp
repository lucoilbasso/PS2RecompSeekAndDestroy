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

// Function: entry_00100890
// Address: 0x100890 - 0x1008c8
void entry_00100890_0x100890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100890_0x100890");
#endif

    ctx->pc = 0x100890u;

label_100890:
    // 0x100890: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x100890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_100894:
    // 0x100894: 0x131100  sll         $v0, $s3, 4
    ctx->pc = 0x100894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_100898:
    // 0x100898: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x100898u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_10089c:
    // 0x10089c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x10089cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1008a0:
    // 0x1008a0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1008a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1008a4:
    // 0x1008a4: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_1008a8:
    if (ctx->pc == 0x1008A8u) {
        ctx->pc = 0x1008A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008A4u;
        // 0x1008a8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008ACu;
        goto label_1008ac;
    }
    ctx->pc = 0x1008A4u;
    {
        const bool branch_taken_0x1008a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1008A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008A4u;
        // 0x1008a8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1008a4) {
            ctx->pc = 0x1008C8u;
            return;
        }
    }
    ctx->pc = 0x1008ACu;
label_1008ac:
    // 0x1008ac: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1008acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1008b0:
    // 0x1008b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1008b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1008b4:
    // 0x1008b4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1008b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1008b8:
    // 0x1008b8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1008b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1008bc:
    // 0x1008bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1008bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1008c0:
    // 0x1008c0: 0x60f809  jalr        $v1
label_1008c4:
    if (ctx->pc == 0x1008C4u) {
        ctx->pc = 0x1008C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008C0u;
        // 0x1008c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1008C8u;
        goto label_fallthrough_0x1008c0;
    }
    ctx->pc = 0x1008C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1008C8u);
        ctx->pc = 0x1008C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008C0u;
        // 0x1008c4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1008C0u, 0x1008C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1008c0:
    ctx->pc = 0x1008C8u;
}
