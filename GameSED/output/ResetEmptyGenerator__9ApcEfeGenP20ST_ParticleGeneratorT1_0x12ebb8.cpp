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

// Function: ResetEmptyGenerator__9ApcEfeGenP20ST_ParticleGeneratorT1
// Address: 0x12ebb8 - 0x12ed38
void ResetEmptyGenerator__9ApcEfeGenP20ST_ParticleGeneratorT1_0x12ebb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetEmptyGenerator__9ApcEfeGenP20ST_ParticleGeneratorT1_0x12ebb8");
#endif

    switch (ctx->pc) {
        case 0x12ec30u: goto label_12ec30;
        case 0x12ec38u: goto label_12ec38;
        case 0x12ec70u: goto label_12ec70;
        case 0x12ec78u: goto label_12ec78;
        case 0x12eca0u: goto label_12eca0;
        case 0x12eca8u: goto label_12eca8;
        case 0x12ed1cu: goto label_12ed1c;
        default: break;
    }

    ctx->pc = 0x12ebb8u;

    // 0x12ebb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ebb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12ebbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ebbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ebc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12ebc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12ebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12ebc8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12ebc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12ebccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12ebd0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x12ebd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ebd8: 0x12200050  beqz        $s1, . + 4 + (0x50 << 2)
    ctx->pc = 0x12EBD8u;
    {
        const bool branch_taken_0x12ebd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBD8u;
        // 0x12ebdc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebd8) {
            ctx->pc = 0x12ED1Cu;
            goto label_12ed1c;
        }
    }
    ctx->pc = 0x12EBE0u;
    // 0x12ebe0: 0x96230132  lhu         $v1, 0x132($s1)
    ctx->pc = 0x12ebe0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
    // 0x12ebe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ebe8: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12EBE8u;
    {
        const bool branch_taken_0x12ebe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EBE8u;
        // 0x12ebec: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ebe8) {
            ctx->pc = 0x12EC98u;
            goto label_12ec98;
        }
    }
    ctx->pc = 0x12EBF0u;
    // 0x12ebf0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12EBF0u;
    {
        const bool branch_taken_0x12ebf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ebf0) {
            ctx->pc = 0x12EBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EBF0u;
            // 0x12ebf4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EC08u;
            goto label_12ec08;
        }
    }
    ctx->pc = 0x12EBF8u;
    // 0x12ebf8: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EBF8u;
    {
        const bool branch_taken_0x12ebf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ebf8) {
            ctx->pc = 0x12EBFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EBF8u;
            // 0x12ebfc: 0x8e250138  lw          $a1, 0x138($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EC18u;
            goto label_12ec18;
        }
    }
    ctx->pc = 0x12EC00u;
    // 0x12ec00: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x12EC00u;
    {
        const bool branch_taken_0x12ec00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC00u;
        // 0x12ec04: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec00) {
            ctx->pc = 0x12ECC4u;
            goto label_12ecc4;
        }
    }
    ctx->pc = 0x12EC08u;
label_12ec08:
    // 0x12ec08: 0x50620013  beql        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x12EC08u;
    {
        const bool branch_taken_0x12ec08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12ec08) {
            ctx->pc = 0x12EC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC08u;
            // 0x12ec0c: 0x8e250140  lw          $a1, 0x140($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EC58u;
            goto label_12ec58;
        }
    }
    ctx->pc = 0x12EC10u;
    // 0x12ec10: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x12EC10u;
    {
        const bool branch_taken_0x12ec10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC10u;
        // 0x12ec14: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec10) {
            ctx->pc = 0x12ECC4u;
            goto label_12ecc4;
        }
    }
    ctx->pc = 0x12EC18u;
label_12ec18:
    // 0x12ec18: 0x50a0002a  beql        $a1, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x12EC18u;
    {
        const bool branch_taken_0x12ec18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec18) {
            ctx->pc = 0x12EC1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC18u;
            // 0x12ec1c: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            goto label_12ecc4;
        }
    }
    ctx->pc = 0x12EC20u;
    // 0x12ec20: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x12ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x12ec24: 0x54510027  bnel        $v0, $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x12EC24u;
    {
        const bool branch_taken_0x12ec24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x12ec24) {
            ctx->pc = 0x12EC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC24u;
            // 0x12ec28: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            goto label_12ecc4;
        }
    }
    ctx->pc = 0x12EC2Cu;
    // 0x12ec2c: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x12ec2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_12ec30:
    // 0x12ec30: 0xc04899e  jal         func_122678
    ctx->pc = 0x12EC30u;
    SET_GPR_U32(ctx, 31, 0x12EC38u);
    ctx->pc = 0x12EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC30u;
    // 0x12ec34: 0x8e440184  lw          $a0, 0x184($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122678u, 0x12EC30u, 0x12EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC38u;
label_12ec38:
    // 0x12ec38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ec38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec3c: 0x50a00021  beql        $a1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x12EC3Cu;
    {
        const bool branch_taken_0x12ec3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec3c) {
            ctx->pc = 0x12EC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC3Cu;
            // 0x12ec40: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            goto label_12ecc4;
        }
    }
    ctx->pc = 0x12EC44u;
    // 0x12ec44: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x12ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x12ec48: 0x5051fff9  beql        $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12EC48u;
    {
        const bool branch_taken_0x12ec48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x12ec48) {
            ctx->pc = 0x12EC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC48u;
            // 0x12ec4c: 0x8cb00004  lw          $s0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ec30;
        }
    }
    ctx->pc = 0x12EC50u;
    // 0x12ec50: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12EC50u;
    {
        const bool branch_taken_0x12ec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC50u;
        // 0x12ec54: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec50) {
            ctx->pc = 0x12ECC4u;
            goto label_12ecc4;
        }
    }
    ctx->pc = 0x12EC58u;
label_12ec58:
    // 0x12ec58: 0x50a0001a  beql        $a1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x12EC58u;
    {
        const bool branch_taken_0x12ec58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec58) {
            ctx->pc = 0x12EC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC58u;
            // 0x12ec5c: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            goto label_12ecc4;
        }
    }
    ctx->pc = 0x12EC60u;
    // 0x12ec60: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x12ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x12ec64: 0x54510017  bnel        $v0, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x12EC64u;
    {
        const bool branch_taken_0x12ec64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x12ec64) {
            ctx->pc = 0x12EC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC64u;
            // 0x12ec68: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            goto label_12ecc4;
        }
    }
    ctx->pc = 0x12EC6Cu;
    // 0x12ec6c: 0x8cb000c4  lw          $s0, 0xC4($a1)
    ctx->pc = 0x12ec6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_12ec70:
    // 0x12ec70: 0xc04b46c  jal         func_12D1B0
    ctx->pc = 0x12EC70u;
    SET_GPR_U32(ctx, 31, 0x12EC78u);
    ctx->pc = 0x12EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC70u;
    // 0x12ec74: 0x8e44018c  lw          $a0, 0x18C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D1B0u, 0x12EC70u, 0x12EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC78u;
label_12ec78:
    // 0x12ec78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ec78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec7c: 0x50a00011  beql        $a1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x12EC7Cu;
    {
        const bool branch_taken_0x12ec7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec7c) {
            ctx->pc = 0x12EC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC7Cu;
            // 0x12ec80: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            goto label_12ecc4;
        }
    }
    ctx->pc = 0x12EC84u;
    // 0x12ec84: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x12ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x12ec88: 0x5051fff9  beql        $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12EC88u;
    {
        const bool branch_taken_0x12ec88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x12ec88) {
            ctx->pc = 0x12EC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC88u;
            // 0x12ec8c: 0x8cb000c4  lw          $s0, 0xC4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ec70;
        }
    }
    ctx->pc = 0x12EC90u;
    // 0x12ec90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12EC90u;
    {
        const bool branch_taken_0x12ec90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC90u;
        // 0x12ec94: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec90) {
            ctx->pc = 0x12ECC4u;
            goto label_12ecc4;
        }
    }
    ctx->pc = 0x12EC98u;
label_12ec98:
    // 0x12ec98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12EC98u;
    {
        const bool branch_taken_0x12ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC98u;
        // 0x12ec9c: 0x8e25013c  lw          $a1, 0x13C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec98) {
            ctx->pc = 0x12ECACu;
            goto label_12ecac;
        }
    }
    ctx->pc = 0x12ECA0u;
label_12eca0:
    // 0x12eca0: 0xc04901c  jal         func_124070
    ctx->pc = 0x12ECA0u;
    SET_GPR_U32(ctx, 31, 0x12ECA8u);
    ctx->pc = 0x12ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ECA0u;
    // 0x12eca4: 0x8e440188  lw          $a0, 0x188($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124070u, 0x12ECA0u, 0x12ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ECA8u;
label_12eca8:
    // 0x12eca8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12eca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ecac:
    // 0x12ecac: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12ECACu;
    {
        const bool branch_taken_0x12ecac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ecac) {
            ctx->pc = 0x12ECB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ECACu;
            // 0x12ecb0: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            goto label_12ecc4;
        }
    }
    ctx->pc = 0x12ECB4u;
    // 0x12ecb4: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x12ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x12ecb8: 0x5051fff9  beql        $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12ECB8u;
    {
        const bool branch_taken_0x12ecb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x12ecb8) {
            ctx->pc = 0x12ECBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ECB8u;
            // 0x12ecbc: 0x8cb00004  lw          $s0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12eca0;
        }
    }
    ctx->pc = 0x12ECC0u;
    // 0x12ecc0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x12ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_12ecc4:
    // 0x12ecc4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12ECC4u;
    {
        const bool branch_taken_0x12ecc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ecc4) {
            ctx->pc = 0x12ECC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ECC4u;
            // 0x12ecc8: 0x8e230054  lw          $v1, 0x54($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECD8u;
            goto label_12ecd8;
        }
    }
    ctx->pc = 0x12ECCCu;
    // 0x12eccc: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x12ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x12ecd0: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x12ecd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
    // 0x12ecd4: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x12ecd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_12ecd8:
    // 0x12ecd8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ECD8u;
    {
        const bool branch_taken_0x12ecd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ecd8) {
            ctx->pc = 0x12ECE8u;
            goto label_12ece8;
        }
    }
    ctx->pc = 0x12ECE0u;
    // 0x12ece0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x12ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x12ece4: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x12ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_12ece8:
    // 0x12ece8: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12ECE8u;
    {
        const bool branch_taken_0x12ece8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECE8u;
        // 0x12ecec: 0x8e220060  lw          $v0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ece8) {
            ctx->pc = 0x12ECF8u;
            goto label_12ecf8;
        }
    }
    ctx->pc = 0x12ECF0u;
    // 0x12ecf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12ECF0u;
    {
        const bool branch_taken_0x12ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ECF0u;
        // 0x12ecf4: 0xae620060  sw          $v0, 0x60($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ecf0) {
            ctx->pc = 0x12ECFCu;
            goto label_12ecfc;
        }
    }
    ctx->pc = 0x12ECF8u;
label_12ecf8:
    // 0x12ecf8: 0xae420150  sw          $v0, 0x150($s2)
    ctx->pc = 0x12ecf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 2));
label_12ecfc:
    // 0x12ecfc: 0x8e420154  lw          $v0, 0x154($s2)
    ctx->pc = 0x12ecfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 340)));
    // 0x12ed00: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x12ED00u;
    {
        const bool branch_taken_0x12ed00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12ed00) {
            ctx->pc = 0x12ED04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ED00u;
            // 0x12ed04: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ED0Cu;
            goto label_12ed0c;
        }
    }
    ctx->pc = 0x12ED08u;
    // 0x12ed08: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x12ed08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_12ed0c:
    // 0x12ed0c: 0xae510154  sw          $s1, 0x154($s2)
    ctx->pc = 0x12ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 17));
    // 0x12ed10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12ed10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ed14: 0xc04bbf0  jal         func_12EFC0
    ctx->pc = 0x12ED14u;
    SET_GPR_U32(ctx, 31, 0x12ED1Cu);
    ctx->pc = 0x12ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ED14u;
    // 0x12ed18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFC0u, 0x12ED14u, 0x12ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ED1Cu;
label_12ed1c:
    // 0x12ed1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ed1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ed20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12ed20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ed24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12ed24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12ed28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12ed28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12ed2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12ed2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ed30: 0x3e00008  jr          $ra
    ctx->pc = 0x12ED30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED30u;
        // 0x12ed34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ED30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ED38u;
}
