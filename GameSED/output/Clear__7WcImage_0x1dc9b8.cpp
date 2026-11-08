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

// Function: Clear__7WcImage
// Address: 0x1dc9b8 - 0x1dc9dc
void Clear__7WcImage_0x1dc9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__7WcImage_0x1dc9b8");
#endif

    ctx->pc = 0x1dc9b8u;

    // 0x1dc9b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dc9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dc9bc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1dc9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1dc9c0: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x1dc9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x1dc9c4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1dc9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1dc9c8: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1dc9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1dc9cc: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1dc9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1dc9d0: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1dc9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1dc9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC9D4u;
        // 0x1dc9d8: 0xac800038  sw          $zero, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC9DCu;
}
