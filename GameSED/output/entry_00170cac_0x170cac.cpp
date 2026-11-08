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

// Function: entry_00170cac
// Address: 0x170cac - 0x170cc0
void entry_00170cac_0x170cac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170cac_0x170cac");
#endif

    ctx->pc = 0x170cacu;

    // 0x170cac: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x170cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x170cb0: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x170cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x170cb4: 0xac200000  sw          $zero, 0x0($at)
    ctx->pc = 0x170cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 0), GPR_U32(ctx, 0));
    // 0x170cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x170CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170CC0u;
}
