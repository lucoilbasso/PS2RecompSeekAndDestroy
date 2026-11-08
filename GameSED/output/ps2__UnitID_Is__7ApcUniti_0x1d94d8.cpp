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

// Function: _UnitID_Is__7ApcUniti
// Address: 0x1d94d8 - 0x1d94ec
void ps2__UnitID_Is__7ApcUniti_0x1d94d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__UnitID_Is__7ApcUniti_0x1d94d8");
#endif

    ctx->pc = 0x1d94d8u;

    // 0x1d94d8: 0x8c82017c  lw          $v0, 0x17C($a0)
    ctx->pc = 0x1d94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x1d94dc: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x1d94dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1d94e0: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1d94e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1d94e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D94E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D94E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94E4u;
        // 0x1d94e8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D94E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D94ECu;
}
