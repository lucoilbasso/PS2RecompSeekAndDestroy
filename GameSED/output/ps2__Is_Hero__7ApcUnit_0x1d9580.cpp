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

// Function: _Is_Hero__7ApcUnit
// Address: 0x1d9580 - 0x1d9594
void ps2__Is_Hero__7ApcUnit_0x1d9580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__Is_Hero__7ApcUnit_0x1d9580");
#endif

    ctx->pc = 0x1d9580u;

    // 0x1d9580: 0x8c82017c  lw          $v0, 0x17C($a0)
    ctx->pc = 0x1d9580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x1d9584: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x1d9584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1d9588: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x1d9588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x1d958c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D958Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D958Cu;
        // 0x1d9590: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D958Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9594u;
}
