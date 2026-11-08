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

// Function: entry_0011ad64
// Address: 0x11ad64 - 0x11ae48
void entry_0011ad64_0x11ad64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ad64_0x11ad64");
#endif

    switch (ctx->pc) {
        case 0x11ad70u: goto label_11ad70;
        case 0x11ad94u: goto label_11ad94;
        case 0x11adc4u: goto label_11adc4;
        case 0x11adccu: goto label_11adcc;
        case 0x11ade8u: goto label_11ade8;
        case 0x11adf4u: goto label_11adf4;
        case 0x11ae10u: goto label_11ae10;
        case 0x11ae2cu: goto label_11ae2c;
        case 0x11ae34u: goto label_11ae34;
        case 0x11ae3cu: goto label_11ae3c;
        default: break;
    }

    ctx->pc = 0x11ad64u;

    // 0x11ad64: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x11ad64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x11ad68: 0xc066546  jal         func_199518
    ctx->pc = 0x11AD68u;
    SET_GPR_U32(ctx, 31, 0x11AD70u);
    ctx->pc = 0x11AD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD68u;
    // 0x11ad6c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199518u, 0x11AD68u, 0x11AD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD70u;
label_11ad70:
    // 0x11ad70: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x11ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x11ad74: 0xae400080  sw          $zero, 0x80($s2)
    ctx->pc = 0x11ad74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 0));
    // 0x11ad78: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x11ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x11ad7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ad80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ad80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ad84: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x11ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x11ad88: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11ad88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11ad8c: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x11AD8Cu;
    SET_GPR_U32(ctx, 31, 0x11AD94u);
    ctx->pc = 0x11AD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AD8Cu;
    // 0x11ad90: 0xafb20014  sw          $s2, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x11AD8Cu, 0x11AD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AD94u;
label_11ad94:
    // 0x11ad94: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x11ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11ad98: 0xae420084  sw          $v0, 0x84($s2)
    ctx->pc = 0x11ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 2));
    // 0x11ad9c: 0xae4340a4  sw          $v1, 0x40A4($s2)
    ctx->pc = 0x11ad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16548), GPR_U32(ctx, 3));
    // 0x11ada0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x11ada0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11ada4: 0xae400088  sw          $zero, 0x88($s2)
    ctx->pc = 0x11ada4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 0));
    // 0x11ada8: 0xae40008c  sw          $zero, 0x8C($s2)
    ctx->pc = 0x11ada8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
    // 0x11adac: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x11adacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x11adb0: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x11adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x11adb4: 0xae4040a0  sw          $zero, 0x40A0($s2)
    ctx->pc = 0x11adb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16544), GPR_U32(ctx, 0));
    // 0x11adb8: 0xae4040a8  sw          $zero, 0x40A8($s2)
    ctx->pc = 0x11adb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16552), GPR_U32(ctx, 0));
    // 0x11adbc: 0xc0682b2  jal         func_1A0AC8
    ctx->pc = 0x11ADBCu;
    SET_GPR_U32(ctx, 31, 0x11ADC4u);
    ctx->pc = 0x11ADC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ADBCu;
    // 0x11adc0: 0xae4040ac  sw          $zero, 0x40AC($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 16556), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x11ADBCu, 0x11ADC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ADC4u;
label_11adc4:
    // 0x11adc4: 0xc0682b6  jal         func_1A0AD8
    ctx->pc = 0x11ADC4u;
    SET_GPR_U32(ctx, 31, 0x11ADCCu);
    ctx->pc = 0x11ADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ADC4u;
    // 0x11adc8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x11ADC4u, 0x11ADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ADCCu;
label_11adcc:
    // 0x11adcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11adccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11add0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11add0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11add4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11add4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11add8: 0x2442e620  addiu       $v0, $v0, -0x19E0
    ctx->pc = 0x11add8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960672));
    // 0x11addc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11addcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ade0: 0xc040152  jal         func_100548
    ctx->pc = 0x11ADE0u;
    SET_GPR_U32(ctx, 31, 0x11ADE8u);
    ctx->pc = 0x11ADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ADE0u;
    // 0x11ade4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100548u, 0x11ADE0u, 0x11ADE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ADE8u;
label_11ade8:
    // 0x11ade8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ade8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11adec: 0xc06825c  jal         func_1A0970
    ctx->pc = 0x11ADECu;
    SET_GPR_U32(ctx, 31, 0x11ADF4u);
    ctx->pc = 0x11ADF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11ADECu;
    // 0x11adf0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x11ADECu, 0x11ADF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11ADF4u;
label_11adf4:
    // 0x11adf4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11adf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11adf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11adf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11adfc: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x11ADFCu;
    {
        const bool branch_taken_0x11adfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ADFCu;
        // 0x11ae00: 0xae500098  sw          $s0, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11adfc) {
            ctx->pc = 0x11AE48u;
            return;
        }
    }
    ctx->pc = 0x11AE04u;
    // 0x11ae04: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x11ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x11ae08: 0xc04161e  jal         func_105878
    ctx->pc = 0x11AE08u;
    SET_GPR_U32(ctx, 31, 0x11AE10u);
    ctx->pc = 0x11AE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE08u;
    // 0x11ae0c: 0x8c51016c  lw          $s1, 0x16C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105878u, 0x11AE08u, 0x11AE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE10u;
label_11ae10:
    // 0x11ae10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11ae10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae14: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11ae14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11ae18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae1c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x11ae1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11ae20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae24: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x11AE24u;
    SET_GPR_U32(ctx, 31, 0x11AE2Cu);
    ctx->pc = 0x11AE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE24u;
    // 0x11ae28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x11AE24u, 0x11AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE2Cu;
label_11ae2c:
    // 0x11ae2c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x11AE2Cu;
    SET_GPR_U32(ctx, 31, 0x11AE34u);
    ctx->pc = 0x11AE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE2Cu;
    // 0x11ae30: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x11AE2Cu, 0x11AE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE34u;
label_11ae34:
    // 0x11ae34: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x11AE34u;
    SET_GPR_U32(ctx, 31, 0x11AE3Cu);
    ctx->pc = 0x11AE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AE34u;
    // 0x11ae38: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x11AE34u, 0x11AE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE3Cu;
label_11ae3c:
    // 0x11ae3c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x11AE3Cu;
    {
        const bool branch_taken_0x11ae3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AE3Cu;
        // 0x11ae40: 0xae510088  sw          $s1, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ae3c) {
            ctx->pc = 0x11AEA0u;
            return;
        }
    }
    ctx->pc = 0x11AE44u;
    // 0x11ae44: 0x0  nop
    ctx->pc = 0x11ae44u;
    // NOP
    ctx->pc = 0x11ae48u;
}
