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

// Function: _TankAttrReset__7ApcTankUi
// Address: 0x1d9830 - 0x1d9844
void ps2__TankAttrReset__7ApcTankUi_0x1d9830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__TankAttrReset__7ApcTankUi_0x1d9830");
#endif

    ctx->pc = 0x1d9830u;

    // 0x1d9830: 0x8c820264  lw          $v0, 0x264($a0)
    ctx->pc = 0x1d9830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 612)));
    // 0x1d9834: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1d9834u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1d9838: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1d9838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1d983c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D983Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D983Cu;
        // 0x1d9840: 0xac820264  sw          $v0, 0x264($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D983Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9844u;
}
