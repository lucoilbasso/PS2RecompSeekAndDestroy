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

// Function: entry_00170d58
// Address: 0x170d58 - 0x170d70
void entry_00170d58_0x170d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170d58_0x170d58");
#endif

    ctx->pc = 0x170d58u;

    // 0x170d58: 0x1810  mfhi        $v1
    ctx->pc = 0x170d58u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x170d5c: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x170d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x170d60: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x170d60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x170d64: 0xac230000  sw          $v1, 0x0($at)
    ctx->pc = 0x170d64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 0), GPR_U32(ctx, 3));
    // 0x170d68: 0x3e00008  jr          $ra
    ctx->pc = 0x170D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170D70u;
}
