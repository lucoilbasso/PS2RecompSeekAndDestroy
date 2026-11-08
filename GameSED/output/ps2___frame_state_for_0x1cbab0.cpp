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

// Function: __frame_state_for
// Address: 0x1cbab0 - 0x1cbc68
void ps2___frame_state_for_0x1cbab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___frame_state_for_0x1cbab0");
#endif

    switch (ctx->pc) {
        case 0x1cbadcu: goto label_1cbadc;
        case 0x1cbaf0u: goto label_1cbaf0;
        case 0x1cbb0cu: goto label_1cbb0c;
        case 0x1cbb40u: goto label_1cbb40;
        case 0x1cbb50u: goto label_1cbb50;
        case 0x1cbb80u: goto label_1cbb80;
        case 0x1cbbb8u: goto label_1cbbb8;
        case 0x1cbbc8u: goto label_1cbbc8;
        case 0x1cbbf4u: goto label_1cbbf4;
        default: break;
    }

    ctx->pc = 0x1cbab0u;

    // 0x1cbab0: 0x27bdfb10  addiu       $sp, $sp, -0x4F0
    ctx->pc = 0x1cbab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966032));
    // 0x1cbab4: 0xffb204c0  sd          $s2, 0x4C0($sp)
    ctx->pc = 0x1cbab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1216), GPR_U64(ctx, 18));
    // 0x1cbab8: 0xffb304c8  sd          $s3, 0x4C8($sp)
    ctx->pc = 0x1cbab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1224), GPR_U64(ctx, 19));
    // 0x1cbabc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cbabcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbac0: 0xffb504d8  sd          $s5, 0x4D8($sp)
    ctx->pc = 0x1cbac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1240), GPR_U64(ctx, 21));
    // 0x1cbac4: 0xffb004b0  sd          $s0, 0x4B0($sp)
    ctx->pc = 0x1cbac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1200), GPR_U64(ctx, 16));
    // 0x1cbac8: 0xffb104b8  sd          $s1, 0x4B8($sp)
    ctx->pc = 0x1cbac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1208), GPR_U64(ctx, 17));
    // 0x1cbacc: 0xffb404d0  sd          $s4, 0x4D0($sp)
    ctx->pc = 0x1cbaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1232), GPR_U64(ctx, 20));
    // 0x1cbad0: 0xffbf04e0  sd          $ra, 0x4E0($sp)
    ctx->pc = 0x1cbad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1248), GPR_U64(ctx, 31));
    // 0x1cbad4: 0xc072ca2  jal         func_1CB288
    ctx->pc = 0x1CBAD4u;
    SET_GPR_U32(ctx, 31, 0x1CBADCu);
    ctx->pc = 0x1CBAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBAD4u;
    // 0x1cbad8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB288u, 0x1CBAD4u, 0x1CBADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBADCu;
label_1cbadc:
    // 0x1cbadc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cbadcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbae0: 0x12400058  beqz        $s2, . + 4 + (0x58 << 2)
    ctx->pc = 0x1CBAE0u;
    {
        const bool branch_taken_0x1cbae0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAE0u;
        // 0x1cbae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbae0) {
            ctx->pc = 0x1CBC44u;
            goto label_1cbc44;
        }
    }
    ctx->pc = 0x1CBAE8u;
    // 0x1cbae8: 0xc072d0c  jal         func_1CB430
    ctx->pc = 0x1CBAE8u;
    SET_GPR_U32(ctx, 31, 0x1CBAF0u);
    ctx->pc = 0x1CBAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBAE8u;
    // 0x1cbaec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB430u, 0x1CBAE8u, 0x1CBAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBAF0u;
label_1cbaf0:
    // 0x1cbaf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cbaf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbaf4: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1CBAF4u;
    {
        const bool branch_taken_0x1cbaf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBAF4u;
        // 0x1cbaf8: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbaf4) {
            ctx->pc = 0x1CBC44u;
            goto label_1cbc44;
        }
    }
    ctx->pc = 0x1CBAFCu;
    // 0x1cbafc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cbafcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb00: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cbb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb04: 0xc074035  jal         func_1D00D4
    ctx->pc = 0x1CBB04u;
    SET_GPR_U32(ctx, 31, 0x1CBB0Cu);
    ctx->pc = 0x1CBB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB04u;
    // 0x1cbb08: 0x24060480  addiu       $a2, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D00D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D00D4u, 0x1CBB04u, 0x1CBB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB0Cu;
label_1cbb0c:
    // 0x1cbb0c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1cbb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1cbb10: 0x97a40010  lhu         $a0, 0x10($sp)
    ctx->pc = 0x1cbb10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbb14: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x1cbb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1cbb18: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1cbb18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1cbb1c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1cbb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1cbb20: 0xa7a4041a  sh          $a0, 0x41A($sp)
    ctx->pc = 0x1cbb20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1050), (uint16_t)GPR_U32(ctx, 4));
    // 0x1cbb24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cbb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1cbb28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1cbb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1cbb2c: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x1cbb2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1cbb30: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1cbb30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cbb34: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CBB34u;
    {
        const bool branch_taken_0x1cbb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB34u;
        // 0x1cbb38: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb34) {
            ctx->pc = 0x1CBB60u;
            goto label_1cbb60;
        }
    }
    ctx->pc = 0x1CBB3Cu;
    // 0x1cbb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb40:
    // 0x1cbb40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cbb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb44: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cbb44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb48: 0xc072d98  jal         func_1CB660
    ctx->pc = 0x1CBB48u;
    SET_GPR_U32(ctx, 31, 0x1CBB50u);
    ctx->pc = 0x1CBB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB48u;
    // 0x1cbb4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB660u, 0x1CBB48u, 0x1CBB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB50u;
label_1cbb50:
    // 0x1cbb50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cbb50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb54: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1cbb54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cbb58: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1CBB58u;
    {
        const bool branch_taken_0x1cbb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB58u;
        // 0x1cbb5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb58) {
            ctx->pc = 0x1CBB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbb40;
        }
    }
    ctx->pc = 0x1CBB60u;
label_1cbb60:
    // 0x1cbb60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1cbb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbb64: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x1cbb68: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1cbb68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1cbb6c: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBB6Cu;
    {
        const bool branch_taken_0x1cbb6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CBB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB6Cu;
        // 0x1cbb70: 0x26500010  addiu       $s0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb6c) {
            ctx->pc = 0x1CBB88u;
            goto label_1cbb88;
        }
    }
    ctx->pc = 0x1CBB74u;
    // 0x1cbb74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbb78: 0xc0729b6  jal         func_1CA6D8
    ctx->pc = 0x1CBB78u;
    SET_GPR_U32(ctx, 31, 0x1CBB80u);
    ctx->pc = 0x1CBB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBB78u;
    // 0x1cbb7c: 0x27a504a0  addiu       $a1, $sp, 0x4A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA6D8u, 0x1CBB78u, 0x1CBB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB80u;
label_1cbb80:
    // 0x1cbb80: 0x8fa304a0  lw          $v1, 0x4A0($sp)
    ctx->pc = 0x1cbb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1184)));
    // 0x1cbb84: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1cbb84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbb88:
    // 0x1cbb88: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1cbb8c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1cbb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1cbb90: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1cbb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1cbb94: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x1cbb94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1cbb98: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1cbb98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cbb9c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CBB9Cu;
    {
        const bool branch_taken_0x1cbb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBB9Cu;
        // 0x1cbba0: 0xafa504a4  sw          $a1, 0x4A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1188), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb9c) {
            ctx->pc = 0x1CBBE8u;
            goto label_1cbbe8;
        }
    }
    ctx->pc = 0x1CBBA4u;
    // 0x1cbba4: 0x265102b  sltu        $v0, $s3, $a1
    ctx->pc = 0x1cbba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1cbba8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CBBA8u;
    {
        const bool branch_taken_0x1cbba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBA8u;
        // 0x1cbbac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbba8) {
            ctx->pc = 0x1CBBECu;
            goto label_1cbbec;
        }
    }
    ctx->pc = 0x1CBBB0u;
    // 0x1cbbb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbb4: 0x0  nop
    ctx->pc = 0x1cbbb4u;
    // NOP
label_1cbbb8:
    // 0x1cbbb8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cbbb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbbc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cbbbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbc0: 0xc072d98  jal         func_1CB660
    ctx->pc = 0x1CBBC0u;
    SET_GPR_U32(ctx, 31, 0x1CBBC8u);
    ctx->pc = 0x1CBBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBBC0u;
    // 0x1cbbc4: 0x27a704a4  addiu       $a3, $sp, 0x4A4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB660u, 0x1CBBC0u, 0x1CBBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBC8u;
label_1cbbc8:
    // 0x1cbbc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cbbc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbcc: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x1cbbccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1cbbd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CBBD0u;
    {
        const bool branch_taken_0x1cbbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBD0u;
        // 0x1cbbd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbd0) {
            ctx->pc = 0x1CBBECu;
            goto label_1cbbec;
        }
    }
    ctx->pc = 0x1CBBD8u;
    // 0x1cbbd8: 0x8fa204a4  lw          $v0, 0x4A4($sp)
    ctx->pc = 0x1cbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1188)));
    // 0x1cbbdc: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1cbbdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1cbbe0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1CBBE0u;
    {
        const bool branch_taken_0x1cbbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBBE0u;
        // 0x1cbbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbe0) {
            ctx->pc = 0x1CBBB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbbb8;
        }
    }
    ctx->pc = 0x1CBBE8u;
label_1cbbe8:
    // 0x1cbbe8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cbbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cbbec:
    // 0x1cbbec: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1cbbecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbbf0: 0x27a30480  addiu       $v1, $sp, 0x480
    ctx->pc = 0x1cbbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_1cbbf4:
    // 0x1cbbf4: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x1cbbf4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbbf8: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x1cbbf8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cbbfc: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x1cbbfcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cbc00: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x1cbc00u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1cbc04: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x1cbc04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x1cbc08: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x1cbc08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
    // 0x1cbc0c: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x1cbc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
    // 0x1cbc10: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x1cbc10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
    // 0x1cbc14: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1cbc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1cbc18: 0x0  nop
    ctx->pc = 0x1cbc18u;
    // NOP
    // 0x1cbc1c: 0x0  nop
    ctx->pc = 0x1cbc1cu;
    // NOP
    // 0x1cbc20: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CBC20u;
    {
        const bool branch_taken_0x1cbc20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1CBC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC20u;
        // 0x1cbc24: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc20) {
            ctx->pc = 0x1CBBF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbbf4;
        }
    }
    ctx->pc = 0x1CBC28u;
    // 0x1cbc28: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x1cbc28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbc2c: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x1cbc2cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cbc30: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x1cbc30u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cbc34: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1cbc34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1cbc38: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x1cbc38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x1cbc3c: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x1cbc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x1cbc40: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1cbc40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc44:
    // 0x1cbc44: 0xdfb004b0  ld          $s0, 0x4B0($sp)
    ctx->pc = 0x1cbc44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1200)));
    // 0x1cbc48: 0xdfb104b8  ld          $s1, 0x4B8($sp)
    ctx->pc = 0x1cbc48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1208)));
    // 0x1cbc4c: 0xdfb204c0  ld          $s2, 0x4C0($sp)
    ctx->pc = 0x1cbc4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1216)));
    // 0x1cbc50: 0xdfb304c8  ld          $s3, 0x4C8($sp)
    ctx->pc = 0x1cbc50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1224)));
    // 0x1cbc54: 0xdfb404d0  ld          $s4, 0x4D0($sp)
    ctx->pc = 0x1cbc54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1232)));
    // 0x1cbc58: 0xdfb504d8  ld          $s5, 0x4D8($sp)
    ctx->pc = 0x1cbc58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1240)));
    // 0x1cbc5c: 0xdfbf04e0  ld          $ra, 0x4E0($sp)
    ctx->pc = 0x1cbc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1248)));
    // 0x1cbc60: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC60u;
        // 0x1cbc64: 0x27bd04f0  addiu       $sp, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBC68u;
}
