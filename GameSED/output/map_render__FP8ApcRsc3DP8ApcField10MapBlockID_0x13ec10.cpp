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

// Function: map_render__FP8ApcRsc3DP8ApcField10MapBlockID
// Address: 0x13ec10 - 0x13ecc8
void map_render__FP8ApcRsc3DP8ApcField10MapBlockID_0x13ec10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("map_render__FP8ApcRsc3DP8ApcField10MapBlockID_0x13ec10");
#endif

    switch (ctx->pc) {
        case 0x13ec10u: goto label_13ec10;
        case 0x13ec14u: goto label_13ec14;
        case 0x13ec18u: goto label_13ec18;
        case 0x13ec1cu: goto label_13ec1c;
        case 0x13ec20u: goto label_13ec20;
        case 0x13ec24u: goto label_13ec24;
        case 0x13ec28u: goto label_13ec28;
        case 0x13ec2cu: goto label_13ec2c;
        case 0x13ec30u: goto label_13ec30;
        case 0x13ec34u: goto label_13ec34;
        case 0x13ec38u: goto label_13ec38;
        case 0x13ec3cu: goto label_13ec3c;
        case 0x13ec40u: goto label_13ec40;
        case 0x13ec44u: goto label_13ec44;
        case 0x13ec48u: goto label_13ec48;
        case 0x13ec4cu: goto label_13ec4c;
        case 0x13ec50u: goto label_13ec50;
        case 0x13ec54u: goto label_13ec54;
        case 0x13ec58u: goto label_13ec58;
        case 0x13ec5cu: goto label_13ec5c;
        case 0x13ec60u: goto label_13ec60;
        case 0x13ec64u: goto label_13ec64;
        case 0x13ec68u: goto label_13ec68;
        case 0x13ec6cu: goto label_13ec6c;
        case 0x13ec70u: goto label_13ec70;
        case 0x13ec74u: goto label_13ec74;
        case 0x13ec78u: goto label_13ec78;
        case 0x13ec7cu: goto label_13ec7c;
        case 0x13ec80u: goto label_13ec80;
        case 0x13ec84u: goto label_13ec84;
        case 0x13ec88u: goto label_13ec88;
        case 0x13ec8cu: goto label_13ec8c;
        case 0x13ec90u: goto label_13ec90;
        case 0x13ec94u: goto label_13ec94;
        case 0x13ec98u: goto label_13ec98;
        case 0x13ec9cu: goto label_13ec9c;
        case 0x13eca0u: goto label_13eca0;
        case 0x13eca4u: goto label_13eca4;
        case 0x13eca8u: goto label_13eca8;
        case 0x13ecacu: goto label_13ecac;
        case 0x13ecb0u: goto label_13ecb0;
        case 0x13ecb4u: goto label_13ecb4;
        case 0x13ecb8u: goto label_13ecb8;
        case 0x13ecbcu: goto label_13ecbc;
        case 0x13ecc0u: goto label_13ecc0;
        case 0x13ecc4u: goto label_13ecc4;
        default: break;
    }

    ctx->pc = 0x13ec10u;

label_13ec10:
    // 0x13ec10: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x13ec10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_13ec14:
    // 0x13ec14: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ec14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13ec18:
    // 0x13ec18: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x13ec18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_13ec1c:
    // 0x13ec1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13ec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_13ec20:
    // 0x13ec20: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_13ec24:
    // 0x13ec24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13ec24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13ec28:
    // 0x13ec28: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13ec28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_13ec2c:
    // 0x13ec2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ec2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_13ec30:
    // 0x13ec30: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13ec30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_13ec34:
    // 0x13ec34: 0x24910080  addiu       $s1, $a0, 0x80
    ctx->pc = 0x13ec34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_13ec38:
    // 0x13ec38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ec38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13ec3c:
    // 0x13ec3c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_13ec40:
    if (ctx->pc == 0x13EC40u) {
        ctx->pc = 0x13EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC3Cu;
        // 0x13ec40: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EC44u;
        goto label_13ec44;
    }
    ctx->pc = 0x13EC3Cu;
    {
        const bool branch_taken_0x13ec3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC3Cu;
        // 0x13ec40: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec3c) {
            ctx->pc = 0x13ECB0u;
            goto label_13ecb0;
        }
    }
    ctx->pc = 0x13EC44u;
label_13ec44:
    // 0x13ec44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13ec44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ec48:
    // 0x13ec48: 0xc05dd18  jal         func_177460
label_13ec4c:
    if (ctx->pc == 0x13EC4Cu) {
        ctx->pc = 0x13EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC48u;
        // 0x13ec4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EC50u;
        goto label_13ec50;
    }
    ctx->pc = 0x13EC48u;
    SET_GPR_U32(ctx, 31, 0x13EC50u);
    ctx->pc = 0x13EC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EC48u;
    // 0x13ec4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13EC48u, 0x13EC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC50u;
label_13ec50:
    // 0x13ec50: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13ec54:
    // 0x13ec54: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
label_13ec58:
    if (ctx->pc == 0x13EC58u) {
        ctx->pc = 0x13EC5Cu;
        goto label_13ec5c;
    }
    ctx->pc = 0x13EC54u;
    {
        const bool branch_taken_0x13ec54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13ec54) {
            ctx->pc = 0x13ECA8u;
            goto label_13eca8;
        }
    }
    ctx->pc = 0x13EC5Cu;
label_13ec5c:
    // 0x13ec5c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x13ec5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_13ec60:
    // 0x13ec60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x13ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_13ec64:
    // 0x13ec64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13ec68:
    // 0x13ec68: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x13ec68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13ec6c:
    // 0x13ec6c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_13ec70:
    if (ctx->pc == 0x13EC70u) {
        ctx->pc = 0x13EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC6Cu;
        // 0x13ec70: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EC74u;
        goto label_13ec74;
    }
    ctx->pc = 0x13EC6Cu;
    {
        const bool branch_taken_0x13ec6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC6Cu;
        // 0x13ec70: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec6c) {
            ctx->pc = 0x13EC98u;
            goto label_13ec98;
        }
    }
    ctx->pc = 0x13EC74u;
label_13ec74:
    // 0x13ec74: 0x8cc20248  lw          $v0, 0x248($a2)
    ctx->pc = 0x13ec74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 584)));
label_13ec78:
    // 0x13ec78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_13ec7c:
    if (ctx->pc == 0x13EC7Cu) {
        ctx->pc = 0x13EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC78u;
        // 0x13ec7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EC80u;
        goto label_13ec80;
    }
    ctx->pc = 0x13EC78u;
    {
        const bool branch_taken_0x13ec78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC78u;
        // 0x13ec7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec78) {
            ctx->pc = 0x13EC98u;
            goto label_13ec98;
        }
    }
    ctx->pc = 0x13EC80u;
label_13ec80:
    // 0x13ec80: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x13ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_13ec84:
    // 0x13ec84: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x13ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_13ec88:
    // 0x13ec88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x13ec88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_13ec8c:
    // 0x13ec8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_13ec90:
    // 0x13ec90: 0x60f809  jalr        $v1
label_13ec94:
    if (ctx->pc == 0x13EC94u) {
        ctx->pc = 0x13EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC90u;
        // 0x13ec94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13EC98u;
        goto label_13ec98;
    }
    ctx->pc = 0x13EC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x13EC98u);
        ctx->pc = 0x13EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC90u;
        // 0x13ec94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EC90u, 0x13EC98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13EC98u;
label_13ec98:
    // 0x13ec98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x13ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13ec9c:
    // 0x13ec9c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x13ec9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_13eca0:
    // 0x13eca0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_13eca4:
    if (ctx->pc == 0x13ECA4u) {
        ctx->pc = 0x13ECA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECA0u;
        // 0x13eca4: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ECA8u;
        goto label_13eca8;
    }
    ctx->pc = 0x13ECA0u;
    {
        const bool branch_taken_0x13eca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eca0) {
            ctx->pc = 0x13ECA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13ECA0u;
            // 0x13eca4: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13ec60;
        }
    }
    ctx->pc = 0x13ECA8u;
label_13eca8:
    // 0x13eca8: 0xc05dd18  jal         func_177460
label_13ecac:
    if (ctx->pc == 0x13ECACu) {
        ctx->pc = 0x13ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECA8u;
        // 0x13ecac: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ECB0u;
        goto label_13ecb0;
    }
    ctx->pc = 0x13ECA8u;
    SET_GPR_U32(ctx, 31, 0x13ECB0u);
    ctx->pc = 0x13ECACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13ECA8u;
    // 0x13ecac: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177460u, 0x13ECA8u, 0x13ECB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13ECB0u;
label_13ecb0:
    // 0x13ecb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ecb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13ecb4:
    // 0x13ecb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13ecb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_13ecb8:
    // 0x13ecb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13ecb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13ecbc:
    // 0x13ecbc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13ecbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13ecc0:
    // 0x13ecc0: 0x3e00008  jr          $ra
label_13ecc4:
    if (ctx->pc == 0x13ECC4u) {
        ctx->pc = 0x13ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECC0u;
        // 0x13ecc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13ECC8u;
        goto label_fallthrough_0x13ecc0;
    }
    ctx->pc = 0x13ECC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ECC0u;
        // 0x13ecc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ECC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13ecc0:
    ctx->pc = 0x13ECC8u;
}
