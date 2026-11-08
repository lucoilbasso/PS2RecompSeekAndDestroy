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

// Function: _DrStatusOnOff__9ApcGameDrUib
// Address: 0x1d7df8 - 0x1d7e14
void ps2__DrStatusOnOff__9ApcGameDrUib_0x1d7df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DrStatusOnOff__9ApcGameDrUib_0x1d7df8");
#endif

    ctx->pc = 0x1d7df8u;

    // 0x1d7df8: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1d7df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1d7dfc: 0x51827  nor         $v1, $zero, $a1
    ctx->pc = 0x1d7dfcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1d7e00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d7e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d7e04: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x1d7e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1d7e08: 0xa6100b  movn        $v0, $a1, $a2
    ctx->pc = 0x1d7e08u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x1d7e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E0Cu;
        // 0x1d7e10: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7E14u;
}
