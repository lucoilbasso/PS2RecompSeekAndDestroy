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

// Function: readBufCreate
// Address: 0x170c90 - 0x170cc0
void readBufCreate_0x170c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("readBufCreate_0x170c90");
#endif

    ctx->pc = 0x170c90u;

    // 0x170c90: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x170c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x170c94: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x170c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x170c98: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x170c98u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x170c9c: 0xac200004  sw          $zero, 0x4($at)
    ctx->pc = 0x170c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4), GPR_U32(ctx, 0));
    // 0x170ca0: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x170ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x170ca4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x170ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x170ca8: 0xac220008  sw          $v0, 0x8($at)
    ctx->pc = 0x170ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 8), GPR_U32(ctx, 2));
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
