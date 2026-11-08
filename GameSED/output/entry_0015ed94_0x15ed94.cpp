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

// Function: entry_0015ed94
// Address: 0x15ed94 - 0x15eeec
void entry_0015ed94_0x15ed94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ed94_0x15ed94");
#endif

    switch (ctx->pc) {
        case 0x15eda8u: goto label_15eda8;
        case 0x15edb0u: goto label_15edb0;
        case 0x15edd0u: goto label_15edd0;
        case 0x15edd8u: goto label_15edd8;
        case 0x15ee00u: goto label_15ee00;
        case 0x15ee10u: goto label_15ee10;
        case 0x15ee2cu: goto label_15ee2c;
        default: break;
    }

    ctx->pc = 0x15ed94u;

label_15ed94:
    // 0x15ed94: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15ed94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15ed98:
    // 0x15ed98: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15ed98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15ed9c:
    // 0x15ed9c: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15ed9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15eda0:
    // 0x15eda0: 0xc06bd28  jal         func_1AF4A0
label_15eda4:
    if (ctx->pc == 0x15EDA4u) {
        ctx->pc = 0x15EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDA0u;
        // 0x15eda4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDA8u;
        goto label_15eda8;
    }
    ctx->pc = 0x15EDA0u;
    SET_GPR_U32(ctx, 31, 0x15EDA8u);
    ctx->pc = 0x15EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDA0u;
    // 0x15eda4: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15EDA0u, 0x15EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDA8u;
label_15eda8:
    // 0x15eda8: 0xc06bd20  jal         func_1AF480
label_15edac:
    if (ctx->pc == 0x15EDACu) {
        ctx->pc = 0x15EDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDA8u;
        // 0x15edac: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDB0u;
        goto label_15edb0;
    }
    ctx->pc = 0x15EDA8u;
    SET_GPR_U32(ctx, 31, 0x15EDB0u);
    ctx->pc = 0x15EDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDA8u;
    // 0x15edac: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15EDA8u, 0x15EDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDB0u;
label_15edb0:
    // 0x15edb0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15edb4:
    // 0x15edb4: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15edb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15edb8:
    // 0x15edb8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15edbc:
    // 0x15edbc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15edc0:
    // 0x15edc0: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15edc4:
    // 0x15edc4: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15edc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15edc8:
    // 0x15edc8: 0xc0682b2  jal         func_1A0AC8
label_15edcc:
    if (ctx->pc == 0x15EDCCu) {
        ctx->pc = 0x15EDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDC8u;
        // 0x15edcc: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDD0u;
        goto label_15edd0;
    }
    ctx->pc = 0x15EDC8u;
    SET_GPR_U32(ctx, 31, 0x15EDD0u);
    ctx->pc = 0x15EDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDC8u;
    // 0x15edcc: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15EDC8u, 0x15EDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDD0u;
label_15edd0:
    // 0x15edd0: 0xc0682b6  jal         func_1A0AD8
label_15edd4:
    if (ctx->pc == 0x15EDD4u) {
        ctx->pc = 0x15EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDD0u;
        // 0x15edd4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EDD8u;
        goto label_15edd8;
    }
    ctx->pc = 0x15EDD0u;
    SET_GPR_U32(ctx, 31, 0x15EDD8u);
    ctx->pc = 0x15EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDD0u;
    // 0x15edd4: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15EDD0u, 0x15EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EDD8u;
label_15edd8:
    // 0x15edd8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15edd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15eddc:
    // 0x15eddc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15eddcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15ede0:
    // 0x15ede0: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15ede0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15ede4:
    // 0x15ede4: 0x245601c0  addiu       $s6, $v0, 0x1C0
    ctx->pc = 0x15ede4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15ede8:
    // 0x15ede8: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15ede8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15edec:
    // 0x15edec: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15edecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15edf0:
    // 0x15edf0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15edf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15edf4:
    // 0x15edf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15edf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15edf8:
    // 0x15edf8: 0xc062cb0  jal         func_18B2C0
label_15edfc:
    if (ctx->pc == 0x15EDFCu) {
        ctx->pc = 0x15EDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EDF8u;
        // 0x15edfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE00u;
        goto label_15ee00;
    }
    ctx->pc = 0x15EDF8u;
    SET_GPR_U32(ctx, 31, 0x15EE00u);
    ctx->pc = 0x15EDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EDF8u;
    // 0x15edfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15EDF8u, 0x15EE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE00u;
label_15ee00:
    // 0x15ee00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15ee00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15ee04:
    // 0x15ee04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ee04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ee08:
    // 0x15ee08: 0xc06825c  jal         func_1A0970
label_15ee0c:
    if (ctx->pc == 0x15EE0Cu) {
        ctx->pc = 0x15EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE08u;
        // 0x15ee0c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE10u;
        goto label_15ee10;
    }
    ctx->pc = 0x15EE08u;
    SET_GPR_U32(ctx, 31, 0x15EE10u);
    ctx->pc = 0x15EE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EE08u;
    // 0x15ee0c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15EE08u, 0x15EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EE10u;
label_15ee10:
    // 0x15ee10: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15ee10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15ee14:
    // 0x15ee14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15ee18:
    // 0x15ee18: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15ee18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15ee1c:
    // 0x15ee1c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15ee1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15ee20:
    // 0x15ee20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15ee20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15ee24:
    // 0x15ee24: 0x60f809  jalr        $v1
label_15ee28:
    if (ctx->pc == 0x15EE28u) {
        ctx->pc = 0x15EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE24u;
        // 0x15ee28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE2Cu;
        goto label_15ee2c;
    }
    ctx->pc = 0x15EE24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15EE2Cu);
        ctx->pc = 0x15EE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE24u;
        // 0x15ee28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EE24u, 0x15EE2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EE2Cu;
label_15ee2c:
    // 0x15ee2c: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15ee2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15ee30:
    // 0x15ee30: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15ee34:
    if (ctx->pc == 0x15EE34u) {
        ctx->pc = 0x15EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE30u;
        // 0x15ee34: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EE38u;
        goto label_15ee38;
    }
    ctx->pc = 0x15EE30u;
    {
        const bool branch_taken_0x15ee30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EE30u;
        // 0x15ee34: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ee30) {
            ctx->pc = 0x15EEECu;
            return;
        }
    }
    ctx->pc = 0x15EE38u;
label_15ee38:
    // 0x15ee38: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15ee38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15ee3c:
    // 0x15ee3c: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15ee3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15ee40:
    // 0x15ee40: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15ee40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15ee44:
    // 0x15ee44: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15ee44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15ee48:
    // 0x15ee48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15ee48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15ee4c:
    // 0x15ee4c: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15ee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15ee50:
    // 0x15ee50: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15ee50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15ee54:
    // 0x15ee54: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15ee54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15ee58:
    // 0x15ee58: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15ee58u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15ee5c:
    // 0x15ee5c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15ee5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15ee60:
    // 0x15ee60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15ee64:
    // 0x15ee64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15ee64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15ee68:
    // 0x15ee68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15ee68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15ee6c:
    // 0x15ee6c: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15ee6cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15ee70:
    // 0x15ee70: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15ee70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15ee74:
    // 0x15ee74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15ee74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15ee78:
    // 0x15ee78: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15ee78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15ee7c:
    // 0x15ee7c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15ee7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15ee80:
    // 0x15ee80: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15ee80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15ee84:
    // 0x15ee84: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15ee84u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15ee88:
    // 0x15ee88: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15ee88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15ee8c:
    // 0x15ee8c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15ee8cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15ee90:
    // 0x15ee90: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15ee90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15ee94:
    // 0x15ee94: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15ee94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15ee98:
    // 0x15ee98: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15ee98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15ee9c:
    // 0x15ee9c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15eea0:
    // 0x15eea0: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15eea0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15eea4:
    // 0x15eea4: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15eea4u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15eea8:
    // 0x15eea8: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15eea8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15eeac:
    // 0x15eeac: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15eeb0:
    // 0x15eeb0: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15eeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15eeb4:
    // 0x15eeb4: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15eeb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15eeb8:
    // 0x15eeb8: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15eeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15eebc:
    // 0x15eebc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15eebcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15eec0:
    // 0x15eec0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15eec0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15eec4:
    // 0x15eec4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15eec4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15eec8:
    // 0x15eec8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15eec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15eecc:
    // 0x15eecc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15eeccu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15eed0:
    // 0x15eed0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15eed0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15eed4:
    // 0x15eed4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15eed4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15eed8:
    // 0x15eed8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15eedc:
    // 0x15eedc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15eedcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15eee0:
    // 0x15eee0: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15eee0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15eee4:
    // 0x15eee4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15eee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15eee8:
    // 0x15eee8: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15eeecu;
}
