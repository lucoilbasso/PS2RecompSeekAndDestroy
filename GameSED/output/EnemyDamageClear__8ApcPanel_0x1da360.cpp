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

// Function: EnemyDamageClear__8ApcPanel
// Address: 0x1da360 - 0x1da3b4
void EnemyDamageClear__8ApcPanel_0x1da360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EnemyDamageClear__8ApcPanel_0x1da360");
#endif

    switch (ctx->pc) {
        case 0x1da370u: goto label_1da370;
        default: break;
    }

    ctx->pc = 0x1da360u;

    // 0x1da360: 0x24820170  addiu       $v0, $a0, 0x170
    ctx->pc = 0x1da360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x1da364: 0x24840da0  addiu       $a0, $a0, 0xDA0
    ctx->pc = 0x1da364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3488));
    // 0x1da368: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1da368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1da36c: 0x0  nop
    ctx->pc = 0x1da36cu;
    // NOP
label_1da370:
    // 0x1da370: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1da370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1da374: 0xac400204  sw          $zero, 0x204($v0)
    ctx->pc = 0x1da374u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 516), GPR_U32(ctx, 0));
    // 0x1da378: 0xac400200  sw          $zero, 0x200($v0)
    ctx->pc = 0x1da378u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 512), GPR_U32(ctx, 0));
    // 0x1da37c: 0x24420208  addiu       $v0, $v0, 0x208
    ctx->pc = 0x1da37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 520));
    // 0x1da380: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1da380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1da384: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1da384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1da388: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1da388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1da38c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1da38cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1da390: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1da390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x1da394: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x1da394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x1da398: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1da398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x1da39c: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x1da39cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x1da3a0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x1da3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x1da3a4: 0x461fff2  bgez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1DA3A4u;
    {
        const bool branch_taken_0x1da3a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DA3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA3A4u;
        // 0x1da3a8: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da3a4) {
            ctx->pc = 0x1DA370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1da370;
        }
    }
    ctx->pc = 0x1DA3ACu;
    // 0x1da3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA3B4u;
}
