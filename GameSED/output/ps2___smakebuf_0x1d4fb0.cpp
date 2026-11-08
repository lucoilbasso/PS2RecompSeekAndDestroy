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

// Function: __smakebuf
// Address: 0x1d4fb0 - 0x1d5104
void ps2___smakebuf_0x1d4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___smakebuf_0x1d4fb0");
#endif

    switch (ctx->pc) {
        case 0x1d5008u: goto label_1d5008;
        case 0x1d5078u: goto label_1d5078;
        case 0x1d50d8u: goto label_1d50d8;
        default: break;
    }

    ctx->pc = 0x1d4fb0u;

    // 0x1d4fb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d4fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1d4fb4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1d4fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1d4fb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d4fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4fbc: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1d4fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1d4fc0: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1d4fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1d4fc4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1d4fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x1d4fc8: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d4fc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d4fcc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x1d4fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1d4fd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4FD0u;
    {
        const bool branch_taken_0x1d4fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FD0u;
        // 0x1d4fd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4fd0) {
            ctx->pc = 0x1D4FF0u;
            goto label_1d4ff0;
        }
    }
    ctx->pc = 0x1D4FD8u;
    // 0x1d4fd8: 0x26030043  addiu       $v1, $s0, 0x43
    ctx->pc = 0x1d4fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x1d4fdc: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1d4fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1d4fe0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1d4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1d4fe4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1D4FE4u;
    {
        const bool branch_taken_0x1d4fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FE4u;
        // 0x1d4fe8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4fe4) {
            ctx->pc = 0x1D50ECu;
            goto label_1d50ec;
        }
    }
    ctx->pc = 0x1D4FECu;
    // 0x1d4fec: 0x0  nop
    ctx->pc = 0x1d4fecu;
    // NOP
label_1d4ff0:
    // 0x1d4ff0: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x1d4ff0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1d4ff4: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4FF4u;
    {
        const bool branch_taken_0x1d4ff4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4FF4u;
        // 0x1d4ff8: 0x34620800  ori         $v0, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ff4) {
            ctx->pc = 0x1D5018u;
            goto label_1d5018;
        }
    }
    ctx->pc = 0x1D4FFCu;
    // 0x1d4ffc: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d4ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d5000: 0xc0759a8  jal         func_1D66A0
    ctx->pc = 0x1D5000u;
    SET_GPR_U32(ctx, 31, 0x1D5008u);
    ctx->pc = 0x1D5004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5000u;
    // 0x1d5004: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D66A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D66A0u, 0x1D5000u, 0x1D5008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5008u;
label_1d5008:
    // 0x1d5008: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5008u;
    {
        const bool branch_taken_0x1d5008 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1D500Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5008u;
        // 0x1d500c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5008) {
            ctx->pc = 0x1D5028u;
            goto label_1d5028;
        }
    }
    ctx->pc = 0x1D5010u;
    // 0x1d5010: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d5010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d5014: 0x34620800  ori         $v0, $v1, 0x800
    ctx->pc = 0x1d5014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_1d5018:
    // 0x1d5018: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d5018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d501c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d501cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d5020: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5020u;
    {
        const bool branch_taken_0x1d5020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5020u;
        // 0x1d5024: 0x24110400  addiu       $s1, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5020) {
            ctx->pc = 0x1D506Cu;
            goto label_1d506c;
        }
    }
    ctx->pc = 0x1D5028u;
label_1d5028:
    // 0x1d5028: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1d5028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1d502c: 0x24110400  addiu       $s1, $zero, 0x400
    ctx->pc = 0x1d502cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1d5030: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x1d5030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x1d5034: 0x38432000  xori        $v1, $v0, 0x2000
    ctx->pc = 0x1d5034u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x1d5038: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5038u;
    {
        const bool branch_taken_0x1d5038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D503Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5038u;
        // 0x1d503c: 0x2c720001  sltiu       $s2, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5038) {
            ctx->pc = 0x1D5060u;
            goto label_1d5060;
        }
    }
    ctx->pc = 0x1D5040u;
    // 0x1d5040: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1d5040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1d5044: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1d5044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d5048: 0x244264a8  addiu       $v0, $v0, 0x64A8
    ctx->pc = 0x1d5048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25768));
    // 0x1d504c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D504Cu;
    {
        const bool branch_taken_0x1d504c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D504Cu;
        // 0x1d5050: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d504c) {
            ctx->pc = 0x1D5064u;
            goto label_1d5064;
        }
    }
    ctx->pc = 0x1D5054u;
    // 0x1d5054: 0xae11004c  sw          $s1, 0x4C($s0)
    ctx->pc = 0x1d5054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 17));
    // 0x1d5058: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5058u;
    {
        const bool branch_taken_0x1d5058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D505Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5058u;
        // 0x1d505c: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5058) {
            ctx->pc = 0x1D5068u;
            goto label_1d5068;
        }
    }
    ctx->pc = 0x1D5060u;
label_1d5060:
    // 0x1d5060: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1d5060u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1d5064:
    // 0x1d5064: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1d5064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_1d5068:
    // 0x1d5068: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d5068u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_1d506c:
    // 0x1d506c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d506cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d5070: 0xc073e1a  jal         func_1CF868
    ctx->pc = 0x1D5070u;
    SET_GPR_U32(ctx, 31, 0x1D5078u);
    ctx->pc = 0x1D5074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5070u;
    // 0x1d5074: 0x24050400  addiu       $a1, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF868u, 0x1D5070u, 0x1D5078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5078u;
label_1d5078:
    // 0x1d5078: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d507c: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D507Cu;
    {
        const bool branch_taken_0x1d507c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D507Cu;
        // 0x1d5080: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d507c) {
            ctx->pc = 0x1D50A8u;
            goto label_1d50a8;
        }
    }
    ctx->pc = 0x1D5084u;
    // 0x1d5084: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x1d5084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x1d5088: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d5088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d508c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x1d508cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x1d5090: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d5090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d5094: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x1d5094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x1d5098: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d5098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d509c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1D509Cu;
    {
        const bool branch_taken_0x1d509c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D50A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D509Cu;
        // 0x1d50a0: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d509c) {
            ctx->pc = 0x1D50ECu;
            goto label_1d50ec;
        }
    }
    ctx->pc = 0x1D50A4u;
    // 0x1d50a4: 0x0  nop
    ctx->pc = 0x1d50a4u;
    // NOP
label_1d50a8:
    // 0x1d50a8: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d50a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x1d50ac: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x1d50acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d50b0: 0x24634518  addiu       $v1, $v1, 0x4518
    ctx->pc = 0x1d50b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17688));
    // 0x1d50b4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1d50b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1d50b8: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x1d50b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x1d50bc: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x1d50bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x1d50c0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d50c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d50c4: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x1d50c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x1d50c8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D50C8u;
    {
        const bool branch_taken_0x1d50c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D50CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50C8u;
        // 0x1d50cc: 0xae050000  sw          $a1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d50c8) {
            ctx->pc = 0x1D50ECu;
            goto label_1d50ec;
        }
    }
    ctx->pc = 0x1D50D0u;
    // 0x1d50d0: 0xc06bf04  jal         func_1AFC10
    ctx->pc = 0x1D50D0u;
    SET_GPR_U32(ctx, 31, 0x1D50D8u);
    ctx->pc = 0x1D50D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D50D0u;
    // 0x1d50d4: 0x8604000e  lh          $a0, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFC10u, 0x1D50D0u, 0x1D50D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50D8u;
label_1d50d8:
    // 0x1d50d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D50D8u;
    {
        const bool branch_taken_0x1d50d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d50d8) {
            ctx->pc = 0x1D50DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D50D8u;
            // 0x1d50dc: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D50F0u;
            goto label_1d50f0;
        }
    }
    ctx->pc = 0x1D50E0u;
    // 0x1d50e0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x1d50e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d50e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1d50e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1d50e8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d50e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_1d50ec:
    // 0x1d50ec: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1d50ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1d50f0:
    // 0x1d50f0: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1d50f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d50f4: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1d50f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d50f8: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1d50f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1d50fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D50FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D50FCu;
        // 0x1d5100: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D50FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5104u;
}
