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

// Function: SetWeaponParam__7ApcWponP12ApcWponParam
// Address: 0x1d9b78 - 0x1d9b8c
void SetWeaponParam__7ApcWponP12ApcWponParam_0x1d9b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetWeaponParam__7ApcWponP12ApcWponParam_0x1d9b78");
#endif

    ctx->pc = 0x1d9b78u;

    // 0x1d9b78: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x1d9b78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d9b7c: 0xfc820270  sd          $v0, 0x270($a0)
    ctx->pc = 0x1d9b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 624), GPR_U64(ctx, 2));
    // 0x1d9b80: 0xdca30008  ld          $v1, 0x8($a1)
    ctx->pc = 0x1d9b80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1d9b84: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9B84u;
        // 0x1d9b88: 0xfc830278  sd          $v1, 0x278($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 632), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9B8Cu;
}
