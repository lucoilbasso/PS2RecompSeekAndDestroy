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

// Function: EeBufInit__7WcSeStd
// Address: 0x17baa8 - 0x17bae0
void EeBufInit__7WcSeStd_0x17baa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EeBufInit__7WcSeStd_0x17baa8");
#endif

    switch (ctx->pc) {
        case 0x17bab8u: goto label_17bab8;
        default: break;
    }

    ctx->pc = 0x17baa8u;

    // 0x17baa8: 0x248401a0  addiu       $a0, $a0, 0x1A0
    ctx->pc = 0x17baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 416));
    // 0x17baac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17baacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17bab0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x17bab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x17bab4: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x17bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_17bab8:
    // 0x17bab8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17babc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17babcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17bac0: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x17bac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x17bac4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17bac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17bac8: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x17bac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x17bacc: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17baccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17bad0: 0x441fff9  bgez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17BAD0u;
    {
        const bool branch_taken_0x17bad0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x17BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BAD0u;
        // 0x17bad4: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bad0) {
            ctx->pc = 0x17BAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17bab8;
        }
    }
    ctx->pc = 0x17BAD8u;
    // 0x17bad8: 0x3e00008  jr          $ra
    ctx->pc = 0x17BAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BAE0u;
}
