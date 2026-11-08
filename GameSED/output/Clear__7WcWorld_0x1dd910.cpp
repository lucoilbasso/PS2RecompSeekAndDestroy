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

// Function: Clear__7WcWorld
// Address: 0x1dd910 - 0x1dd940
void Clear__7WcWorld_0x1dd910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__7WcWorld_0x1dd910");
#endif

    ctx->pc = 0x1dd910u;

    // 0x1dd910: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1dd910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dd914: 0xac8001c4  sw          $zero, 0x1C4($a0)
    ctx->pc = 0x1dd914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 452), GPR_U32(ctx, 0));
    // 0x1dd918: 0xac820158  sw          $v0, 0x158($a0)
    ctx->pc = 0x1dd918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 2));
    // 0x1dd91c: 0xac800150  sw          $zero, 0x150($a0)
    ctx->pc = 0x1dd91cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 0));
    // 0x1dd920: 0xac800154  sw          $zero, 0x154($a0)
    ctx->pc = 0x1dd920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 0));
    // 0x1dd924: 0xac80015c  sw          $zero, 0x15C($a0)
    ctx->pc = 0x1dd924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 0));
    // 0x1dd928: 0xac800160  sw          $zero, 0x160($a0)
    ctx->pc = 0x1dd928u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 0));
    // 0x1dd92c: 0xac800164  sw          $zero, 0x164($a0)
    ctx->pc = 0x1dd92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 356), GPR_U32(ctx, 0));
    // 0x1dd930: 0xac8001b8  sw          $zero, 0x1B8($a0)
    ctx->pc = 0x1dd930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 440), GPR_U32(ctx, 0));
    // 0x1dd934: 0xac8001bc  sw          $zero, 0x1BC($a0)
    ctx->pc = 0x1dd934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 444), GPR_U32(ctx, 0));
    // 0x1dd938: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD938u;
        // 0x1dd93c: 0xac8001c0  sw          $zero, 0x1C0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD940u;
}
