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

// Function: ReloadSpriteOneData__9ApcPtcSprP15ST_EffectSprite
// Address: 0x122678 - 0x122740
void ReloadSpriteOneData__9ApcPtcSprP15ST_EffectSprite_0x122678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReloadSpriteOneData__9ApcPtcSprP15ST_EffectSprite_0x122678");
#endif

    ctx->pc = 0x122678u;

    // 0x122678: 0x10a0002f  beqz        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x122678u;
    {
        const bool branch_taken_0x122678 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122678u;
        // 0x12267c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122678) {
            ctx->pc = 0x122738u;
            goto label_122738;
        }
    }
    ctx->pc = 0x122680u;
    // 0x122680: 0x8ca6004c  lw          $a2, 0x4C($a1)
    ctx->pc = 0x122680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x122684: 0x50c00013  beql        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x122684u;
    {
        const bool branch_taken_0x122684 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x122684) {
            ctx->pc = 0x122688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122684u;
            // 0x122688: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1226D4u;
            goto label_1226d4;
        }
    }
    ctx->pc = 0x12268Cu;
    // 0x12268c: 0x8cc20138  lw          $v0, 0x138($a2)
    ctx->pc = 0x12268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 312)));
    // 0x122690: 0x5445000b  bnel        $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x122690u;
    {
        const bool branch_taken_0x122690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x122690) {
            ctx->pc = 0x122694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122690u;
            // 0x122694: 0x8ca3004c  lw          $v1, 0x4C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1226C0u;
            goto label_1226c0;
        }
    }
    ctx->pc = 0x122698u;
    // 0x122698: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x122698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12269c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12269Cu;
    {
        const bool branch_taken_0x12269c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12269c) {
            ctx->pc = 0x1226A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12269Cu;
            // 0x1226a0: 0x8ca2004c  lw          $v0, 0x4C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1226B8u;
            goto label_1226b8;
        }
    }
    ctx->pc = 0x1226A4u;
    // 0x1226a4: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1226a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x1226a8: 0x54c20003  bnel        $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1226A8u;
    {
        const bool branch_taken_0x1226a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1226a8) {
            ctx->pc = 0x1226ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1226A8u;
            // 0x1226ac: 0x8ca2004c  lw          $v0, 0x4C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1226B8u;
            goto label_1226b8;
        }
    }
    ctx->pc = 0x1226B0u;
    // 0x1226b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1226B0u;
    {
        const bool branch_taken_0x1226b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1226B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1226B0u;
        // 0x1226b4: 0xacc30138  sw          $v1, 0x138($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 312), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1226b0) {
            ctx->pc = 0x1226BCu;
            goto label_1226bc;
        }
    }
    ctx->pc = 0x1226B8u;
label_1226b8:
    // 0x1226b8: 0xac400138  sw          $zero, 0x138($v0)
    ctx->pc = 0x1226b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 0));
label_1226bc:
    // 0x1226bc: 0x8ca3004c  lw          $v1, 0x4C($a1)
    ctx->pc = 0x1226bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_1226c0:
    // 0x1226c0: 0x246300c0  addiu       $v1, $v1, 0xC0
    ctx->pc = 0x1226c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1226c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1226c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1226c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1226c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1226cc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1226ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1226d0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1226d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1226d4:
    // 0x1226d4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1226D4u;
    {
        const bool branch_taken_0x1226d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1226d4) {
            ctx->pc = 0x1226D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1226D4u;
            // 0x1226d8: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1226E8u;
            goto label_1226e8;
        }
    }
    ctx->pc = 0x1226DCu;
    // 0x1226dc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1226dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1226e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1226e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1226e4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1226e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1226e8:
    // 0x1226e8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1226E8u;
    {
        const bool branch_taken_0x1226e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1226e8) {
            ctx->pc = 0x1226ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1226E8u;
            // 0x1226ec: 0x8c82015c  lw          $v0, 0x15C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1226FCu;
            goto label_1226fc;
        }
    }
    ctx->pc = 0x1226F0u;
    // 0x1226f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1226f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1226f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1226f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1226f8: 0x8c82015c  lw          $v0, 0x15C($a0)
    ctx->pc = 0x1226f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 348)));
label_1226fc:
    // 0x1226fc: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1226FCu;
    {
        const bool branch_taken_0x1226fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1226fc) {
            ctx->pc = 0x122700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1226FCu;
            // 0x122700: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x122710u;
            goto label_122710;
        }
    }
    ctx->pc = 0x122704u;
    // 0x122704: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x122704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x122708: 0xac82015c  sw          $v0, 0x15C($a0)
    ctx->pc = 0x122708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 348), GPR_U32(ctx, 2));
    // 0x12270c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x12270cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_122710:
    // 0x122710: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x122710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x122714: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x122714u;
    {
        const bool branch_taken_0x122714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x122718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122714u;
        // 0x122718: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122714) {
            ctx->pc = 0x122728u;
            goto label_122728;
        }
    }
    ctx->pc = 0x12271Cu;
    // 0x12271c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12271Cu;
    {
        const bool branch_taken_0x12271c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12271Cu;
        // 0x122720: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12271c) {
            ctx->pc = 0x122730u;
            goto label_122730;
        }
    }
    ctx->pc = 0x122724u;
    // 0x122724: 0x0  nop
    ctx->pc = 0x122724u;
    // NOP
label_122728:
    // 0x122728: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x122728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x12272c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x12272cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_122730:
    // 0x122730: 0xac850158  sw          $a1, 0x158($a0)
    ctx->pc = 0x122730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 5));
    // 0x122734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122738:
    // 0x122738: 0x3e00008  jr          $ra
    ctx->pc = 0x122738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122740u;
}
