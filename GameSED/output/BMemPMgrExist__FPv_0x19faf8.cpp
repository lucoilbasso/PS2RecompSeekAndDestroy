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

// Function: BMemPMgrExist__FPv
// Address: 0x19faf8 - 0x19fc10
void BMemPMgrExist__FPv_0x19faf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMemPMgrExist__FPv_0x19faf8");
#endif

    switch (ctx->pc) {
        case 0x19fb50u: goto label_19fb50;
        case 0x19fba8u: goto label_19fba8;
        case 0x19fbd8u: goto label_19fbd8;
        default: break;
    }

    ctx->pc = 0x19faf8u;

    // 0x19faf8: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19FAF8u;
    {
        const bool branch_taken_0x19faf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAF8u;
        // 0x19fafc: 0x8f838dd8  lw          $v1, -0x7228($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19faf8) {
            ctx->pc = 0x19FB08u;
            goto label_19fb08;
        }
    }
    ctx->pc = 0x19FB00u;
    // 0x19fb00: 0x3e00008  jr          $ra
    ctx->pc = 0x19FB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB00u;
        // 0x19fb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FB00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FB08u;
label_19fb08:
    // 0x19fb08: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB08u;
    {
        const bool branch_taken_0x19fb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb08) {
            ctx->pc = 0x19FB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FB08u;
            // 0x19fb0c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FB1Cu;
            goto label_19fb1c;
        }
    }
    ctx->pc = 0x19FB10u;
    // 0x19fb10: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x19fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x19fb14: 0x8c43f640  lw          $v1, -0x9C0($v0)
    ctx->pc = 0x19fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x23F640u));
    // 0x19fb18: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x19fb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19fb1c:
    // 0x19fb1c: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x19fb1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x19fb20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB20u;
    {
        const bool branch_taken_0x19fb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB20u;
        // 0x19fb24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb20) {
            ctx->pc = 0x19FB34u;
            goto label_19fb34;
        }
    }
    ctx->pc = 0x19FB28u;
    // 0x19fb28: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19fb2c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19fb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19fb30: 0x82302b  sltu        $a2, $a0, $v0
    ctx->pc = 0x19fb30u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19fb34:
    // 0x19fb34: 0x54c0001e  bnel        $a2, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x19FB34u;
    {
        const bool branch_taken_0x19fb34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb34) {
            ctx->pc = 0x19FB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FB34u;
            // 0x19fb38: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FBB0u;
            goto label_19fbb0;
        }
    }
    ctx->pc = 0x19FB3Cu;
    // 0x19fb3c: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x19fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x19fb40: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19fb40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb44: 0x2449f640  addiu       $t1, $v0, -0x9C0
    ctx->pc = 0x19fb44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964800));
    // 0x19fb48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19fb48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb4c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x19fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x23F640u));
label_19fb50:
    // 0x19fb50: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x19FB50u;
    {
        const bool branch_taken_0x19fb50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB50u;
        // 0x19fb54: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb50) {
            ctx->pc = 0x19FB7Cu;
            goto label_19fb7c;
        }
    }
    ctx->pc = 0x19FB58u;
    // 0x19fb58: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x19fb58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19fb5c: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x19fb5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x19fb60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB60u;
    {
        const bool branch_taken_0x19fb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB60u;
        // 0x19fb64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb60) {
            ctx->pc = 0x19FB74u;
            goto label_19fb74;
        }
    }
    ctx->pc = 0x19FB68u;
    // 0x19fb68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19fb6c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x19fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19fb70: 0xe2302b  sltu        $a2, $a3, $v0
    ctx->pc = 0x19fb70u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19fb74:
    // 0x19fb74: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FB74u;
    {
        const bool branch_taken_0x19fb74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB74u;
        // 0x19fb78: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb74) {
            ctx->pc = 0x19FB90u;
            goto label_19fb90;
        }
    }
    ctx->pc = 0x19FB7Cu;
label_19fb7c:
    // 0x19fb7c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x19fb7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x19fb80: 0x29020008  slti        $v0, $t0, 0x8
    ctx->pc = 0x19fb80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x19fb84: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x19FB84u;
    {
        const bool branch_taken_0x19fb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb84) {
            ctx->pc = 0x19FB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FB84u;
            // 0x19fb88: 0x8d230000  lw          $v1, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fb50;
        }
    }
    ctx->pc = 0x19FB8Cu;
    // 0x19fb8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19fb8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19fb90:
    // 0x19fb90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19fb90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fb94: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FB94u;
    {
        const bool branch_taken_0x19fb94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb94) {
            ctx->pc = 0x19FB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FB94u;
            // 0x19fb98: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FBB0u;
            goto label_19fbb0;
        }
    }
    ctx->pc = 0x19FB9Cu;
    // 0x19fb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x19FB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB9Cu;
        // 0x19fba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FBA4u;
    // 0x19fba4: 0x0  nop
    ctx->pc = 0x19fba4u;
    // NOP
label_19fba8:
    // 0x19fba8: 0x3e00008  jr          $ra
    ctx->pc = 0x19FBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FBA8u;
        // 0x19fbac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FBB0u;
label_19fbb0:
    // 0x19fbb0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x19fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x19fbb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x19fbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x19fbb8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19fbbc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19fbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19fbc0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19FBC0u;
    {
        const bool branch_taken_0x19fbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fbc0) {
            ctx->pc = 0x19FC08u;
            goto label_19fc08;
        }
    }
    ctx->pc = 0x19FBC8u;
    // 0x19fbc8: 0x3c060fff  lui         $a2, 0xFFF
    ctx->pc = 0x19fbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4095 << 16));
    // 0x19fbcc: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x19fbccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x19fbd0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x19fbd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x19fbd4: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x19fbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_19fbd8:
    // 0x19fbd8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19FBD8u;
    {
        const bool branch_taken_0x19fbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fbd8) {
            ctx->pc = 0x19FBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FBD8u;
            // 0x19fbdc: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FBF0u;
            goto label_19fbf0;
        }
    }
    ctx->pc = 0x19FBE0u;
    // 0x19fbe0: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x19fbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x19fbe4: 0x1044fff0  beq         $v0, $a0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x19FBE4u;
    {
        const bool branch_taken_0x19fbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x19fbe4) {
            ctx->pc = 0x19FBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fba8;
        }
    }
    ctx->pc = 0x19FBECu;
    // 0x19fbec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x19fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_19fbf0:
    // 0x19fbf0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x19fbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x19fbf4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x19fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x19fbf8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x19fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19fbfc: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x19fbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x19fc00: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x19FC00u;
    {
        const bool branch_taken_0x19fc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fc00) {
            ctx->pc = 0x19FC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FC00u;
            // 0x19fc04: 0x671024  and         $v0, $v1, $a3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19fbd8;
        }
    }
    ctx->pc = 0x19FC08u;
label_19fc08:
    // 0x19fc08: 0x3e00008  jr          $ra
    ctx->pc = 0x19FC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC08u;
        // 0x19fc0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FC10u;
}
