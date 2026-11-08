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

// Function: Init__5WcRsci
// Address: 0x17a258 - 0x17a2c0
void Init__5WcRsci_0x17a258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__5WcRsci_0x17a258");
#endif

    ctx->pc = 0x17a258u;

    // 0x17a258: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x17a258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x17a25c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17a260: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17a260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x17a264: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17a264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17a268: 0xaf848d10  sw          $a0, -0x72F0($gp)
    ctx->pc = 0x17a268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937872), GPR_U32(ctx, 4));
    // 0x17a26c: 0xac850010  sw          $a1, 0x10($a0)
    ctx->pc = 0x17a26cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
    // 0x17a270: 0xac80015c  sw          $zero, 0x15C($a0)
    ctx->pc = 0x17a270u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 0));
    // 0x17a274: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x17a274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x17a278: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x17a278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x17a27c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x17a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x17a280: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x17a280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x17a284: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x17a284u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x17a288: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x17a288u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x17a28c: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x17a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x17a290: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x17a290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x17a294: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x17a294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x17a298: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x17a298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x17a29c: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x17a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x17a2a0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x17a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x17a2a4: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x17a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x17a2a8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x17a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x17a2ac: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x17a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x17a2b0: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x17a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x17a2b4: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x17a2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
    // 0x17a2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2B8u;
        // 0x17a2bc: 0xac800158  sw          $zero, 0x158($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A2C0u;
}
