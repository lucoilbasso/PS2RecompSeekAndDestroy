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

// Function: entry_001013e4
// Address: 0x1013e4 - 0x101404
void entry_001013e4_0x1013e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001013e4_0x1013e4");
#endif

    ctx->pc = 0x1013e4u;

label_1013e4:
    // 0x1013e4: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1013e8:
    if (ctx->pc == 0x1013E8u) {
        ctx->pc = 0x1013E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013E4u;
        // 0x1013e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1013ECu;
        goto label_1013ec;
    }
    ctx->pc = 0x1013E4u;
    {
        const bool branch_taken_0x1013e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1013E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013E4u;
        // 0x1013e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013e4) {
            ctx->pc = 0x101404u;
            return;
        }
    }
    ctx->pc = 0x1013ECu;
label_1013ec:
    // 0x1013ec: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1013ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1013f0:
    // 0x1013f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1013f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1013f4:
    // 0x1013f4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1013f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1013f8:
    // 0x1013f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1013f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1013fc:
    // 0x1013fc: 0x60f809  jalr        $v1
label_101400:
    if (ctx->pc == 0x101400u) {
        ctx->pc = 0x101400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013FCu;
        // 0x101400: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x101404u;
        goto label_fallthrough_0x1013fc;
    }
    ctx->pc = 0x1013FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x101404u);
        ctx->pc = 0x101400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1013FCu;
        // 0x101400: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1013FCu, 0x101404u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1013fc:
    ctx->pc = 0x101404u;
}
