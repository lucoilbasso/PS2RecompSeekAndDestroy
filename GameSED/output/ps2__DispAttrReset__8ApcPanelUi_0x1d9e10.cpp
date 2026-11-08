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

// Function: _DispAttrReset__8ApcPanelUi
// Address: 0x1d9e10 - 0x1d9e24
void ps2__DispAttrReset__8ApcPanelUi_0x1d9e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DispAttrReset__8ApcPanelUi_0x1d9e10");
#endif

    ctx->pc = 0x1d9e10u;

    // 0x1d9e10: 0x94820016  lhu         $v0, 0x16($a0)
    ctx->pc = 0x1d9e10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 22)));
    // 0x1d9e14: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1d9e14u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1d9e18: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1d9e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1d9e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E1Cu;
        // 0x1d9e20: 0xa4820016  sh          $v0, 0x16($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9E24u;
}
