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

// Function: Clear__5WcRsci
// Address: 0x1dc3c0 - 0x1dc414
void Clear__5WcRsci_0x1dc3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__5WcRsci_0x1dc3c0");
#endif

    ctx->pc = 0x1dc3c0u;

    // 0x1dc3c0: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x1dc3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x1dc3c4: 0xac80015c  sw          $zero, 0x15C($a0)
    ctx->pc = 0x1dc3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 0));
    // 0x1dc3c8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1dc3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1dc3cc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1dc3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x1dc3d0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1dc3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1dc3d4: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x1dc3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x1dc3d8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x1dc3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x1dc3dc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1dc3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1dc3e0: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1dc3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1dc3e4: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x1dc3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x1dc3e8: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1dc3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1dc3ec: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1dc3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x1dc3f0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1dc3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1dc3f4: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x1dc3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x1dc3f8: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x1dc3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x1dc3fc: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1dc3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x1dc400: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x1dc400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x1dc404: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x1dc404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x1dc408: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x1dc408u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
    // 0x1dc40c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DC410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC40Cu;
        // 0x1dc410: 0xac800158  sw          $zero, 0x158($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC414u;
}
