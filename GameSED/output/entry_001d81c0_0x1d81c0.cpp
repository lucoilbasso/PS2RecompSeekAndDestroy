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

// Function: entry_001d81c0
// Address: 0x1d81c0 - 0x1d81d8
void entry_001d81c0_0x1d81c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d81c0_0x1d81c0");
#endif

    ctx->pc = 0x1d81c0u;

    // 0x1d81c0: 0x24840490  addiu       $a0, $a0, 0x490
    ctx->pc = 0x1d81c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x1d81c4: 0x28c20032  slti        $v0, $a2, 0x32
    ctx->pc = 0x1d81c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1d81c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1D81C8u;
    {
        const bool branch_taken_0x1d81c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D81CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81C8u;
        // 0x1d81cc: 0x24630490  addiu       $v1, $v1, 0x490 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d81c8) {
            ctx->pc = 0x1D81A0u;
            return;
        }
    }
    ctx->pc = 0x1D81D0u;
    // 0x1d81d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D81D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D81D0u;
        // 0x1d81d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D81D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D81D8u;
}
