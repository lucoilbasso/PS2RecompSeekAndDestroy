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

// Function: CommandInit__15CD_READ_COMMAND
// Address: 0x178c20 - 0x178c64
void CommandInit__15CD_READ_COMMAND_0x178c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CommandInit__15CD_READ_COMMAND_0x178c20");
#endif

    ctx->pc = 0x178c20u;

    // 0x178c20: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x178c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x178c24: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x178c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x178c28: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x178c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x178c2c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x178c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x178c30: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x178C30u;
    {
        const bool branch_taken_0x178c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178c30) {
            ctx->pc = 0x178C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178C30u;
            // 0x178c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178C40u;
            goto label_178c40;
        }
    }
    ctx->pc = 0x178C38u;
    // 0x178c38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x178C38u;
    {
        const bool branch_taken_0x178c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C38u;
        // 0x178c3c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178c38) {
            ctx->pc = 0x178C44u;
            goto label_178c44;
        }
    }
    ctx->pc = 0x178C40u;
label_178c40:
    // 0x178c40: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x178c40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_178c44:
    // 0x178c44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x178c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x178c48: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x178c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x178c4c: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x178c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x178c50: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x178c50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x178c54: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x178c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x178c58: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x178c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x178c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x178C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178C5Cu;
        // 0x178c60: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178C64u;
}
