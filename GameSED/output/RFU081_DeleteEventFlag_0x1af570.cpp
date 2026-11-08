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

// Function: RFU081_DeleteEventFlag
// Address: 0x1af570 - 0x1af580
void RFU081_DeleteEventFlag_0x1af570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU081_DeleteEventFlag_0x1af570");
#endif

    switch (ctx->pc) {
        case 0x1af578u: goto label_1af578;
        default: break;
    }

    ctx->pc = 0x1af570u;

    // 0x1af570: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x1af570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1af574: 0xc  syscall     0
    ctx->pc = 0x1af574u;
    ctx->pc = 0x1AF578u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1af578:
    // 0x1af578: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF580u;
}
