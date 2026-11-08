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

// Function: _InqBodyLCtrl__9ApcCqpart
// Address: 0x1dacc8 - 0x1dacf0
void ps2__InqBodyLCtrl__9ApcCqpart_0x1dacc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__InqBodyLCtrl__9ApcCqpart_0x1dacc8");
#endif

    ctx->pc = 0x1dacc8u;

    // 0x1dacc8: 0x8c820c98  lw          $v0, 0xC98($a0)
    ctx->pc = 0x1dacc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3224)));
    // 0x1daccc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1dacccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dacd0: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DACD0u;
    {
        const bool branch_taken_0x1dacd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACD0u;
        // 0x1dacd4: 0x22980  sll         $a1, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dacd0) {
            ctx->pc = 0x1DACE8u;
            goto label_1dace8;
        }
    }
    ctx->pc = 0x1DACD8u;
    // 0x1dacd8: 0x8c8201b4  lw          $v0, 0x1B4($a0)
    ctx->pc = 0x1dacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x1dacdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1DACDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACDCu;
        // 0x1dace0: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DACDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DACE4u;
    // 0x1dace4: 0x0  nop
    ctx->pc = 0x1dace4u;
    // NOP
label_1dace8:
    // 0x1dace8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DACE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DACECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DACE8u;
        // 0x1dacec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DACE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DACF0u;
}
