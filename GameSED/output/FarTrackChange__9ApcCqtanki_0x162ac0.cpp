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

// Function: FarTrackChange__9ApcCqtanki
// Address: 0x162ac0 - 0x162bc0
void FarTrackChange__9ApcCqtanki_0x162ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FarTrackChange__9ApcCqtanki_0x162ac0");
#endif

    switch (ctx->pc) {
        case 0x162ac0u: goto label_162ac0;
        case 0x162ac4u: goto label_162ac4;
        case 0x162ac8u: goto label_162ac8;
        case 0x162accu: goto label_162acc;
        case 0x162ad0u: goto label_162ad0;
        case 0x162ad4u: goto label_162ad4;
        case 0x162ad8u: goto label_162ad8;
        case 0x162adcu: goto label_162adc;
        case 0x162ae0u: goto label_162ae0;
        case 0x162ae4u: goto label_162ae4;
        case 0x162ae8u: goto label_162ae8;
        case 0x162aecu: goto label_162aec;
        case 0x162af0u: goto label_162af0;
        case 0x162af4u: goto label_162af4;
        case 0x162af8u: goto label_162af8;
        case 0x162afcu: goto label_162afc;
        case 0x162b00u: goto label_162b00;
        case 0x162b04u: goto label_162b04;
        case 0x162b08u: goto label_162b08;
        case 0x162b0cu: goto label_162b0c;
        case 0x162b10u: goto label_162b10;
        case 0x162b14u: goto label_162b14;
        case 0x162b18u: goto label_162b18;
        case 0x162b1cu: goto label_162b1c;
        case 0x162b20u: goto label_162b20;
        case 0x162b24u: goto label_162b24;
        case 0x162b28u: goto label_162b28;
        case 0x162b2cu: goto label_162b2c;
        case 0x162b30u: goto label_162b30;
        case 0x162b34u: goto label_162b34;
        case 0x162b38u: goto label_162b38;
        case 0x162b3cu: goto label_162b3c;
        case 0x162b40u: goto label_162b40;
        case 0x162b44u: goto label_162b44;
        case 0x162b48u: goto label_162b48;
        case 0x162b4cu: goto label_162b4c;
        case 0x162b50u: goto label_162b50;
        case 0x162b54u: goto label_162b54;
        case 0x162b58u: goto label_162b58;
        case 0x162b5cu: goto label_162b5c;
        case 0x162b60u: goto label_162b60;
        case 0x162b64u: goto label_162b64;
        case 0x162b68u: goto label_162b68;
        case 0x162b6cu: goto label_162b6c;
        case 0x162b70u: goto label_162b70;
        case 0x162b74u: goto label_162b74;
        case 0x162b78u: goto label_162b78;
        case 0x162b7cu: goto label_162b7c;
        case 0x162b80u: goto label_162b80;
        case 0x162b84u: goto label_162b84;
        case 0x162b88u: goto label_162b88;
        case 0x162b8cu: goto label_162b8c;
        case 0x162b90u: goto label_162b90;
        case 0x162b94u: goto label_162b94;
        case 0x162b98u: goto label_162b98;
        case 0x162b9cu: goto label_162b9c;
        case 0x162ba0u: goto label_162ba0;
        case 0x162ba4u: goto label_162ba4;
        case 0x162ba8u: goto label_162ba8;
        case 0x162bacu: goto label_162bac;
        case 0x162bb0u: goto label_162bb0;
        case 0x162bb4u: goto label_162bb4;
        case 0x162bb8u: goto label_162bb8;
        case 0x162bbcu: goto label_162bbc;
        default: break;
    }

    ctx->pc = 0x162ac0u;

label_162ac0:
    // 0x162ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_162ac4:
    // 0x162ac4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_162ac8:
    // 0x162ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_162acc:
    // 0x162acc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x162accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_162ad0:
    // 0x162ad0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x162ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_162ad4:
    // 0x162ad4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x162ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_162ad8:
    // 0x162ad8: 0x8e030ccc  lw          $v1, 0xCCC($s0)
    ctx->pc = 0x162ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3276)));
label_162adc:
    // 0x162adc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_162ae0:
    if (ctx->pc == 0x162AE0u) {
        ctx->pc = 0x162AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162ADCu;
        // 0x162ae0: 0x5102b  sltu        $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x162AE4u;
        goto label_162ae4;
    }
    ctx->pc = 0x162ADCu;
    {
        const bool branch_taken_0x162adc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162ADCu;
        // 0x162ae0: 0x5102b  sltu        $v0, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162adc) {
            ctx->pc = 0x162AF0u;
            goto label_162af0;
        }
    }
    ctx->pc = 0x162AE4u;
label_162ae4:
    // 0x162ae4: 0x10000030  b           . + 4 + (0x30 << 2)
label_162ae8:
    if (ctx->pc == 0x162AE8u) {
        ctx->pc = 0x162AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AE4u;
        // 0x162ae8: 0xae001a2c  sw          $zero, 0x1A2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162AECu;
        goto label_162aec;
    }
    ctx->pc = 0x162AE4u;
    {
        const bool branch_taken_0x162ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AE4u;
        // 0x162ae8: 0xae001a2c  sw          $zero, 0x1A2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ae4) {
            ctx->pc = 0x162BA8u;
            goto label_162ba8;
        }
    }
    ctx->pc = 0x162AECu;
label_162aec:
    // 0x162aec: 0x0  nop
    ctx->pc = 0x162aecu;
    // NOP
label_162af0:
    // 0x162af0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x162af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_162af4:
    // 0x162af4: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
label_162af8:
    if (ctx->pc == 0x162AF8u) {
        ctx->pc = 0x162AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AF4u;
        // 0x162af8: 0xae021a2c  sw          $v0, 0x1A2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162AFCu;
        goto label_162afc;
    }
    ctx->pc = 0x162AF4u;
    {
        const bool branch_taken_0x162af4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x162AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AF4u;
        // 0x162af8: 0xae021a2c  sw          $v0, 0x1A2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6700), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162af4) {
            ctx->pc = 0x162B4Cu;
            goto label_162b4c;
        }
    }
    ctx->pc = 0x162AFCu;
label_162afc:
    // 0x162afc: 0x26110cd0  addiu       $s1, $s0, 0xCD0
    ctx->pc = 0x162afcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3280));
label_162b00:
    // 0x162b00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x162b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_162b04:
    // 0x162b04: 0x0  nop
    ctx->pc = 0x162b04u;
    // NOP
label_162b08:
    // 0x162b08: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x162b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_162b0c:
    // 0x162b0c: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x162b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_162b10:
    // 0x162b10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x162b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_162b14:
    // 0x162b14: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x162b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_162b18:
    // 0x162b18: 0x8e051a2c  lw          $a1, 0x1A2C($s0)
    ctx->pc = 0x162b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6700)));
label_162b1c:
    // 0x162b1c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x162b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_162b20:
    // 0x162b20: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x162b20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_162b24:
    // 0x162b24: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x162b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_162b28:
    // 0x162b28: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x162b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_162b2c:
    // 0x162b2c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x162b2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_162b30:
    // 0x162b30: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x162b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_162b34:
    // 0x162b34: 0x60f809  jalr        $v1
label_162b38:
    if (ctx->pc == 0x162B38u) {
        ctx->pc = 0x162B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B34u;
        // 0x162b38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B3Cu;
        goto label_162b3c;
    }
    ctx->pc = 0x162B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162B3Cu);
        ctx->pc = 0x162B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B34u;
        // 0x162b38: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B34u, 0x162B3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162B3Cu;
label_162b3c:
    // 0x162b3c: 0x8e020ccc  lw          $v0, 0xCCC($s0)
    ctx->pc = 0x162b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3276)));
label_162b40:
    // 0x162b40: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x162b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_162b44:
    // 0x162b44: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
label_162b48:
    if (ctx->pc == 0x162B48u) {
        ctx->pc = 0x162B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B44u;
        // 0x162b48: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B4Cu;
        goto label_162b4c;
    }
    ctx->pc = 0x162B44u;
    {
        const bool branch_taken_0x162b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162b44) {
            ctx->pc = 0x162B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162B44u;
            // 0x162b48: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162b08;
        }
    }
    ctx->pc = 0x162B4Cu;
label_162b4c:
    // 0x162b4c: 0x8e020cf0  lw          $v0, 0xCF0($s0)
    ctx->pc = 0x162b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3312)));
label_162b50:
    // 0x162b50: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
label_162b54:
    if (ctx->pc == 0x162B54u) {
        ctx->pc = 0x162B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B50u;
        // 0x162b54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B58u;
        goto label_162b58;
    }
    ctx->pc = 0x162B50u;
    {
        const bool branch_taken_0x162b50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x162B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B50u;
        // 0x162b54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b50) {
            ctx->pc = 0x162BA8u;
            goto label_162ba8;
        }
    }
    ctx->pc = 0x162B58u;
label_162b58:
    // 0x162b58: 0x26110cf4  addiu       $s1, $s0, 0xCF4
    ctx->pc = 0x162b58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3316));
label_162b5c:
    // 0x162b5c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x162b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_162b60:
    // 0x162b60: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x162b60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_162b64:
    // 0x162b64: 0x8e0201b4  lw          $v0, 0x1B4($s0)
    ctx->pc = 0x162b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_162b68:
    // 0x162b68: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x162b68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_162b6c:
    // 0x162b6c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x162b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_162b70:
    // 0x162b70: 0x8e051a2c  lw          $a1, 0x1A2C($s0)
    ctx->pc = 0x162b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6700)));
label_162b74:
    // 0x162b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x162b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_162b78:
    // 0x162b78: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x162b78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_162b7c:
    // 0x162b7c: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x162b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
label_162b80:
    // 0x162b80: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x162b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_162b84:
    // 0x162b84: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x162b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_162b88:
    // 0x162b88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x162b88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_162b8c:
    // 0x162b8c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x162b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_162b90:
    // 0x162b90: 0x60f809  jalr        $v1
label_162b94:
    if (ctx->pc == 0x162B94u) {
        ctx->pc = 0x162B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B90u;
        // 0x162b94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162B98u;
        goto label_162b98;
    }
    ctx->pc = 0x162B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x162B98u);
        ctx->pc = 0x162B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B90u;
        // 0x162b94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B90u, 0x162B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x162B98u;
label_162b98:
    // 0x162b98: 0x8e020cf0  lw          $v0, 0xCF0($s0)
    ctx->pc = 0x162b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3312)));
label_162b9c:
    // 0x162b9c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x162b9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_162ba0:
    // 0x162ba0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_162ba4:
    if (ctx->pc == 0x162BA4u) {
        ctx->pc = 0x162BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BA0u;
        // 0x162ba4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162BA8u;
        goto label_162ba8;
    }
    ctx->pc = 0x162BA0u;
    {
        const bool branch_taken_0x162ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x162ba0) {
            ctx->pc = 0x162BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162BA0u;
            // 0x162ba4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162b60;
        }
    }
    ctx->pc = 0x162BA8u;
label_162ba8:
    // 0x162ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_162bac:
    // 0x162bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x162bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_162bb0:
    // 0x162bb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x162bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_162bb4:
    // 0x162bb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x162bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_162bb8:
    // 0x162bb8: 0x3e00008  jr          $ra
label_162bbc:
    if (ctx->pc == 0x162BBCu) {
        ctx->pc = 0x162BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BB8u;
        // 0x162bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x162BC0u;
        goto label_fallthrough_0x162bb8;
    }
    ctx->pc = 0x162BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162BB8u;
        // 0x162bbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x162bb8:
    ctx->pc = 0x162BC0u;
}
