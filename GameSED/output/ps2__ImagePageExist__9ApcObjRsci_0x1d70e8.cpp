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

// Function: _ImagePageExist__9ApcObjRsci
// Address: 0x1d70e8 - 0x1d7100
void ps2__ImagePageExist__9ApcObjRsci_0x1d70e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ImagePageExist__9ApcObjRsci_0x1d70e8");
#endif

    ctx->pc = 0x1d70e8u;

    // 0x1d70e8: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1d70e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1d70ec: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1d70ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d70f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d70f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1d70f4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d70f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D70F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70F8u;
        // 0x1d70fc: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D70F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7100u;
}
