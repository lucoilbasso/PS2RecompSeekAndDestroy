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

// Function: Init__8WcDaemon
// Address: 0x199cc0 - 0x199d2c
void Init__8WcDaemon_0x199cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__8WcDaemon_0x199cc0");
#endif

    switch (ctx->pc) {
        case 0x199d08u: goto label_199d08;
        default: break;
    }

    ctx->pc = 0x199cc0u;

    // 0x199cc0: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x199cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x199cc4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x199cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x199cc8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x199cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x199ccc: 0x24820030  addiu       $v0, $a0, 0x30
    ctx->pc = 0x199cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x199cd0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x199cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x199cd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x199cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x199cd8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x199cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x199cdc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x199cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x199ce0: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x199ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x199ce4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x199ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x199ce8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x199ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x199cec: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x199cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x199cf0: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x199cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x199cf4: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x199cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x199cf8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x199cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x199cfc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x199cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x199d00: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x199d00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x199d04: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x199d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
label_199d08:
    // 0x199d08: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x199d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x199d0c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x199d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x199d10: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x199d10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x199d14: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x199d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x199d18: 0x0  nop
    ctx->pc = 0x199d18u;
    // NOP
    // 0x199d1c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199D1Cu;
    {
        const bool branch_taken_0x199d1c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x199D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D1Cu;
        // 0x199d20: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d1c) {
            ctx->pc = 0x199D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199d08;
        }
    }
    ctx->pc = 0x199D24u;
    // 0x199d24: 0x3e00008  jr          $ra
    ctx->pc = 0x199D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199D2Cu;
}
