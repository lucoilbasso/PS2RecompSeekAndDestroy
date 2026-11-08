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

// Function: Clear__9ApcStudio
// Address: 0x1d7c78 - 0x1d7ce4
void Clear__9ApcStudio_0x1d7c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Clear__9ApcStudio_0x1d7c78");
#endif

    switch (ctx->pc) {
        case 0x1d7cc0u: goto label_1d7cc0;
        default: break;
    }

    ctx->pc = 0x1d7c78u;

    // 0x1d7c78: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d7c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d7c7c: 0x24833410  addiu       $v1, $a0, 0x3410
    ctx->pc = 0x1d7c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 13328));
    // 0x1d7c80: 0xac8233c8  sw          $v0, 0x33C8($a0)
    ctx->pc = 0x1d7c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13256), GPR_U32(ctx, 2));
    // 0x1d7c84: 0x2485363c  addiu       $a1, $a0, 0x363C
    ctx->pc = 0x1d7c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 13884));
    // 0x1d7c88: 0xac800168  sw          $zero, 0x168($a0)
    ctx->pc = 0x1d7c88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 360), GPR_U32(ctx, 0));
    // 0x1d7c8c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1d7c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d7c90: 0xac8033bc  sw          $zero, 0x33BC($a0)
    ctx->pc = 0x1d7c90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13244), GPR_U32(ctx, 0));
    // 0x1d7c94: 0xac8033c0  sw          $zero, 0x33C0($a0)
    ctx->pc = 0x1d7c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13248), GPR_U32(ctx, 0));
    // 0x1d7c98: 0xac8233c4  sw          $v0, 0x33C4($a0)
    ctx->pc = 0x1d7c98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13252), GPR_U32(ctx, 2));
    // 0x1d7c9c: 0xac8033cc  sw          $zero, 0x33CC($a0)
    ctx->pc = 0x1d7c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13260), GPR_U32(ctx, 0));
    // 0x1d7ca0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1d7ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1d7ca4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1d7ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1d7ca8: 0xac80361c  sw          $zero, 0x361C($a0)
    ctx->pc = 0x1d7ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13852), GPR_U32(ctx, 0));
    // 0x1d7cac: 0xac803620  sw          $zero, 0x3620($a0)
    ctx->pc = 0x1d7cacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13856), GPR_U32(ctx, 0));
    // 0x1d7cb0: 0xac803624  sw          $zero, 0x3624($a0)
    ctx->pc = 0x1d7cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13860), GPR_U32(ctx, 0));
    // 0x1d7cb4: 0xac803628  sw          $zero, 0x3628($a0)
    ctx->pc = 0x1d7cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13864), GPR_U32(ctx, 0));
    // 0x1d7cb8: 0xac80362c  sw          $zero, 0x362C($a0)
    ctx->pc = 0x1d7cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 13868), GPR_U32(ctx, 0));
    // 0x1d7cbc: 0x0  nop
    ctx->pc = 0x1d7cbcu;
    // NOP
label_1d7cc0:
    // 0x1d7cc0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d7cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d7cc4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1d7cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1d7cc8: 0x0  nop
    ctx->pc = 0x1d7cc8u;
    // NOP
    // 0x1d7ccc: 0x0  nop
    ctx->pc = 0x1d7cccu;
    // NOP
    // 0x1d7cd0: 0x0  nop
    ctx->pc = 0x1d7cd0u;
    // NOP
    // 0x1d7cd4: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D7CD4u;
    {
        const bool branch_taken_0x1d7cd4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D7CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7CD4u;
        // 0x1d7cd8: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7cd4) {
            ctx->pc = 0x1D7CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d7cc0;
        }
    }
    ctx->pc = 0x1D7CDCu;
    // 0x1d7cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7CE4u;
}
