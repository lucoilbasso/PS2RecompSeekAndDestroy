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

// Function: entry_0015cfb4
// Address: 0x15cfb4 - 0x15d118
void entry_0015cfb4_0x15cfb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015cfb4_0x15cfb4");
#endif

    switch (ctx->pc) {
        case 0x15cfd4u: goto label_15cfd4;
        case 0x15cfdcu: goto label_15cfdc;
        case 0x15cffcu: goto label_15cffc;
        case 0x15d004u: goto label_15d004;
        case 0x15d02cu: goto label_15d02c;
        case 0x15d03cu: goto label_15d03c;
        case 0x15d058u: goto label_15d058;
        default: break;
    }

    ctx->pc = 0x15cfb4u;

label_15cfb4:
    // 0x15cfb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15cfb8:
    // 0x15cfb8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x15cfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_15cfbc:
    // 0x15cfbc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15cfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_15cfc0:
    // 0x15cfc0: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15cfc0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15cfc4:
    // 0x15cfc4: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x15cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_15cfc8:
    // 0x15cfc8: 0x8c700024  lw          $s0, 0x24($v1)
    ctx->pc = 0x15cfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_15cfcc:
    // 0x15cfcc: 0xc06bd28  jal         func_1AF4A0
label_15cfd0:
    if (ctx->pc == 0x15CFD0u) {
        ctx->pc = 0x15CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFCCu;
        // 0x15cfd0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CFD4u;
        goto label_15cfd4;
    }
    ctx->pc = 0x15CFCCu;
    SET_GPR_U32(ctx, 31, 0x15CFD4u);
    ctx->pc = 0x15CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFCCu;
    // 0x15cfd0: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15CFCCu, 0x15CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFD4u;
label_15cfd4:
    // 0x15cfd4: 0xc06bd20  jal         func_1AF480
label_15cfd8:
    if (ctx->pc == 0x15CFD8u) {
        ctx->pc = 0x15CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFD4u;
        // 0x15cfd8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CFDCu;
        goto label_15cfdc;
    }
    ctx->pc = 0x15CFD4u;
    SET_GPR_U32(ctx, 31, 0x15CFDCu);
    ctx->pc = 0x15CFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFD4u;
    // 0x15cfd8: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15CFD4u, 0x15CFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFDCu;
label_15cfdc:
    // 0x15cfdc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15cfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15cfe0:
    // 0x15cfe0: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x15cfe0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_15cfe4:
    // 0x15cfe4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15cfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15cfe8:
    // 0x15cfe8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15cfec:
    // 0x15cfec: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15cfecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15cff0:
    // 0x15cff0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x15cff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_15cff4:
    // 0x15cff4: 0xc0682b2  jal         func_1A0AC8
label_15cff8:
    if (ctx->pc == 0x15CFF8u) {
        ctx->pc = 0x15CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFF4u;
        // 0x15cff8: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15CFFCu;
        goto label_15cffc;
    }
    ctx->pc = 0x15CFF4u;
    SET_GPR_U32(ctx, 31, 0x15CFFCu);
    ctx->pc = 0x15CFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFF4u;
    // 0x15cff8: 0x8e900020  lw          $s0, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15CFF4u, 0x15CFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CFFCu;
label_15cffc:
    // 0x15cffc: 0xc0682b6  jal         func_1A0AD8
label_15d000:
    if (ctx->pc == 0x15D000u) {
        ctx->pc = 0x15D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CFFCu;
        // 0x15d000: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D004u;
        goto label_15d004;
    }
    ctx->pc = 0x15CFFCu;
    SET_GPR_U32(ctx, 31, 0x15D004u);
    ctx->pc = 0x15D000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CFFCu;
    // 0x15d000: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15CFFCu, 0x15D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D004u;
label_15d004:
    // 0x15d004: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15d004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15d008:
    // 0x15d008: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15d008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15d00c:
    // 0x15d00c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15d010:
    // 0x15d010: 0x245601c0  addiu       $s6, $v0, 0x1C0
    ctx->pc = 0x15d010u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15d014:
    // 0x15d014: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x15d014u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_15d018:
    // 0x15d018: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15d018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15d01c:
    // 0x15d01c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x15d01cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15d020:
    // 0x15d020: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15d020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15d024:
    // 0x15d024: 0xc062cb0  jal         func_18B2C0
label_15d028:
    if (ctx->pc == 0x15D028u) {
        ctx->pc = 0x15D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D024u;
        // 0x15d028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D02Cu;
        goto label_15d02c;
    }
    ctx->pc = 0x15D024u;
    SET_GPR_U32(ctx, 31, 0x15D02Cu);
    ctx->pc = 0x15D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D024u;
    // 0x15d028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15D024u, 0x15D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D02Cu;
label_15d02c:
    // 0x15d02c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15d02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15d030:
    // 0x15d030: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d034:
    // 0x15d034: 0xc06825c  jal         func_1A0970
label_15d038:
    if (ctx->pc == 0x15D038u) {
        ctx->pc = 0x15D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D034u;
        // 0x15d038: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D03Cu;
        goto label_15d03c;
    }
    ctx->pc = 0x15D034u;
    SET_GPR_U32(ctx, 31, 0x15D03Cu);
    ctx->pc = 0x15D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15D034u;
    // 0x15d038: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15D034u, 0x15D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15D03Cu;
label_15d03c:
    // 0x15d03c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15d03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15d040:
    // 0x15d040: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15d040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d044:
    // 0x15d044: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15d044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15d048:
    // 0x15d048: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15d048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15d04c:
    // 0x15d04c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15d04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15d050:
    // 0x15d050: 0x60f809  jalr        $v1
label_15d054:
    if (ctx->pc == 0x15D054u) {
        ctx->pc = 0x15D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D050u;
        // 0x15d054: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D058u;
        goto label_15d058;
    }
    ctx->pc = 0x15D050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15D058u);
        ctx->pc = 0x15D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D050u;
        // 0x15d054: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15D050u, 0x15D058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15D058u;
label_15d058:
    // 0x15d058: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15d058u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15d05c:
    // 0x15d05c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15d060:
    if (ctx->pc == 0x15D060u) {
        ctx->pc = 0x15D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D05Cu;
        // 0x15d060: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15D064u;
        goto label_15d064;
    }
    ctx->pc = 0x15D05Cu;
    {
        const bool branch_taken_0x15d05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15D05Cu;
        // 0x15d060: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d05c) {
            ctx->pc = 0x15D118u;
            return;
        }
    }
    ctx->pc = 0x15D064u;
label_15d064:
    // 0x15d064: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15d064u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15d068:
    // 0x15d068: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15d068u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15d06c:
    // 0x15d06c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15d06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15d070:
    // 0x15d070: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15d070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15d074:
    // 0x15d074: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15d074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15d078:
    // 0x15d078: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15d078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15d07c:
    // 0x15d07c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15d080:
    // 0x15d080: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15d080u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15d084:
    // 0x15d084: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15d084u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15d088:
    // 0x15d088: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15d088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15d08c:
    // 0x15d08c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15d08cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15d090:
    // 0x15d090: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15d090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15d094:
    // 0x15d094: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15d094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15d098:
    // 0x15d098: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15d098u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15d09c:
    // 0x15d09c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15d09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15d0a0:
    // 0x15d0a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15d0a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15d0a4:
    // 0x15d0a4: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15d0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15d0a8:
    // 0x15d0a8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15d0a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15d0ac:
    // 0x15d0ac: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15d0acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15d0b0:
    // 0x15d0b0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15d0b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15d0b4:
    // 0x15d0b4: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15d0b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15d0b8:
    // 0x15d0b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15d0b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15d0bc:
    // 0x15d0bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15d0bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d0c0:
    // 0x15d0c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15d0c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d0c4:
    // 0x15d0c4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15d0c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d0c8:
    // 0x15d0c8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d0cc:
    // 0x15d0cc: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d0ccu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d0d0:
    // 0x15d0d0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d0d0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d0d4:
    // 0x15d0d4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d0d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d0d8:
    // 0x15d0d8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15d0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15d0dc:
    // 0x15d0dc: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15d0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15d0e0:
    // 0x15d0e0: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15d0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15d0e4:
    // 0x15d0e4: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15d0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15d0e8:
    // 0x15d0e8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15d0e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15d0ec:
    // 0x15d0ec: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15d0ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15d0f0:
    // 0x15d0f0: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15d0f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15d0f4:
    // 0x15d0f4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15d0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15d0f8:
    // 0x15d0f8: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15d0f8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15d0fc:
    // 0x15d0fc: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15d0fcu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15d100:
    // 0x15d100: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15d100u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15d104:
    // 0x15d104: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15d104u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15d108:
    // 0x15d108: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d108u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15d10c:
    // 0x15d10c: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15d10cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15d110:
    // 0x15d110: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15d110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15d114:
    // 0x15d114: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15d114u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15d118u;
}
