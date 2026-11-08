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

// Function: SeMotionInit__13WcSeStdMotion
// Address: 0x17bc88 - 0x17bcac
void SeMotionInit__13WcSeStdMotion_0x17bc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SeMotionInit__13WcSeStdMotion_0x17bc88");
#endif

    ctx->pc = 0x17bc88u;

    // 0x17bc88: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x17bc88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x17bc8c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17bc90: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17bc90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17bc94: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17bc98: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17bc9c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17bc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17bca0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x17bca0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x17bca4: 0x3e00008  jr          $ra
    ctx->pc = 0x17BCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BCA4u;
        // 0x17bca8: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BCACu;
}
