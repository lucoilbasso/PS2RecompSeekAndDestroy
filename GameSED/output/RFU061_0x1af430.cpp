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

// Function: RFU061
// Address: 0x1af430 - 0x1af440
void RFU061_0x1af430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RFU061_0x1af430");
#endif

    switch (ctx->pc) {
        case 0x1af438u: goto label_1af438;
        default: break;
    }

    ctx->pc = 0x1af430u;

    // 0x1af430: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x1af430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1af434: 0xc  syscall     0
    ctx->pc = 0x1af434u;
    ctx->pc = 0x1AF438u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_1af438:
    // 0x1af438: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF440u;
}
