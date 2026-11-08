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

// Function: entry_001046d8
// Address: 0x1046d8 - 0x104700
void entry_001046d8_0x1046d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001046d8_0x1046d8");
#endif

    switch (ctx->pc) {
        case 0x1046f4u: goto label_1046f4;
        default: break;
    }

    ctx->pc = 0x1046d8u;

label_1046d8:
    // 0x1046d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1046d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1046dc:
    // 0x1046dc: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1046dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1046e0:
    // 0x1046e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1046e4:
    if (ctx->pc == 0x1046E4u) {
        ctx->pc = 0x1046E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046E0u;
        // 0x1046e4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1046E8u;
        goto label_1046e8;
    }
    ctx->pc = 0x1046E0u;
    {
        const bool branch_taken_0x1046e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1046E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046E0u;
        // 0x1046e4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1046e0) {
            ctx->pc = 0x104700u;
            return;
        }
    }
    ctx->pc = 0x1046E8u;
label_1046e8:
    // 0x1046e8: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x1046e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1046ec:
    // 0x1046ec: 0x40f809  jalr        $v0
label_1046f0:
    if (ctx->pc == 0x1046F0u) {
        ctx->pc = 0x1046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046ECu;
        // 0x1046f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1046F4u;
        goto label_1046f4;
    }
    ctx->pc = 0x1046ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1046F4u);
        ctx->pc = 0x1046F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1046ECu;
        // 0x1046f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1046ECu, 0x1046F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1046F4u;
label_1046f4:
    // 0x1046f4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1046f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1046f8:
    // 0x1046f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1046f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1046fc:
    // 0x1046fc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1046fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x104700u;
}
