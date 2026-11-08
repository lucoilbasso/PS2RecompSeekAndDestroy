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

// Function: entry_0015bf94
// Address: 0x15bf94 - 0x15c168
void entry_0015bf94_0x15bf94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bf94_0x15bf94");
#endif

    switch (ctx->pc) {
        case 0x15bfc8u: goto label_15bfc8;
        case 0x15bff4u: goto label_15bff4;
        case 0x15c024u: goto label_15c024;
        case 0x15c02cu: goto label_15c02c;
        case 0x15c04cu: goto label_15c04c;
        case 0x15c054u: goto label_15c054;
        case 0x15c07cu: goto label_15c07c;
        case 0x15c08cu: goto label_15c08c;
        case 0x15c0a8u: goto label_15c0a8;
        default: break;
    }

    ctx->pc = 0x15bf94u;

label_15bf94:
    // 0x15bf94: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15bf94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15bf98:
    // 0x15bf98: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15bf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15bf9c:
    // 0x15bf9c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15bf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15bfa0:
    // 0x15bfa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15bfa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15bfa4:
    // 0x15bfa4: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15bfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15bfa8:
    // 0x15bfa8: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15bfac:
    // 0x15bfac: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15bfb0:
    // 0x15bfb0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15bfb0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15bfb4:
    // 0x15bfb4: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x15bfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
label_15bfb8:
    // 0x15bfb8: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x15bfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_15bfbc:
    // 0x15bfbc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15bfc0:
    // 0x15bfc0: 0x40f809  jalr        $v0
label_15bfc4:
    if (ctx->pc == 0x15BFC4u) {
        ctx->pc = 0x15BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFC0u;
        // 0x15bfc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BFC8u;
        goto label_15bfc8;
    }
    ctx->pc = 0x15BFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15BFC8u);
        ctx->pc = 0x15BFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFC0u;
        // 0x15bfc4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BFC0u, 0x15BFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BFC8u;
label_15bfc8:
    // 0x15bfc8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15bfcc:
    // 0x15bfcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_15bfd0:
    // 0x15bfd0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15bfd4:
    // 0x15bfd4: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15bfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15bfd8:
    // 0x15bfd8: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15bfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15bfdc:
    // 0x15bfdc: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15bfdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15bfe0:
    // 0x15bfe0: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x15bfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15bfe4:
    // 0x15bfe4: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15bfe4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15bfe8:
    // 0x15bfe8: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x15bfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_15bfec:
    // 0x15bfec: 0xe0f809  jalr        $a3
label_15bff0:
    if (ctx->pc == 0x15BFF0u) {
        ctx->pc = 0x15BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFECu;
        // 0x15bff0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BFF4u;
        goto label_15bff4;
    }
    ctx->pc = 0x15BFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15BFF4u);
        ctx->pc = 0x15BFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFECu;
        // 0x15bff0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BFECu, 0x15BFF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BFF4u;
label_15bff4:
    // 0x15bff4: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x15bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
label_15bff8:
    // 0x15bff8: 0x5840015d  blezl       $v0, . + 4 + (0x15D << 2)
label_15bffc:
    if (ctx->pc == 0x15BFFCu) {
        ctx->pc = 0x15BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BFF8u;
        // 0x15bffc: 0x96e20016  lhu         $v0, 0x16($s7) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C000u;
        goto label_15c000;
    }
    ctx->pc = 0x15BFF8u;
    {
        const bool branch_taken_0x15bff8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x15bff8) {
            ctx->pc = 0x15BFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BFF8u;
            // 0x15bffc: 0x96e20016  lhu         $v0, 0x16($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C570u;
            return;
        }
    }
    ctx->pc = 0x15C000u;
label_15c000:
    // 0x15c000: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x15c000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_15c004:
    // 0x15c004: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x15c004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
label_15c008:
    // 0x15c008: 0x2463a380  addiu       $v1, $v1, -0x5C80
    ctx->pc = 0x15c008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943616));
label_15c00c:
    // 0x15c00c: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15c00cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15c010:
    // 0x15c010: 0x247400c8  addiu       $s4, $v1, 0xC8
    ctx->pc = 0x15c010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 200));
label_15c014:
    // 0x15c014: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15c014u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15c018:
    // 0x15c018: 0x247300d0  addiu       $s3, $v1, 0xD0
    ctx->pc = 0x15c018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
label_15c01c:
    // 0x15c01c: 0xc06bd28  jal         func_1AF4A0
label_15c020:
    if (ctx->pc == 0x15C020u) {
        ctx->pc = 0x15C020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C01Cu;
        // 0x15c020: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C024u;
        goto label_15c024;
    }
    ctx->pc = 0x15C01Cu;
    SET_GPR_U32(ctx, 31, 0x15C024u);
    ctx->pc = 0x15C020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C01Cu;
    // 0x15c020: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15C01Cu, 0x15C024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C024u;
label_15c024:
    // 0x15c024: 0xc06bd20  jal         func_1AF480
label_15c028:
    if (ctx->pc == 0x15C028u) {
        ctx->pc = 0x15C028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C024u;
        // 0x15c028: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C02Cu;
        goto label_15c02c;
    }
    ctx->pc = 0x15C024u;
    SET_GPR_U32(ctx, 31, 0x15C02Cu);
    ctx->pc = 0x15C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C024u;
    // 0x15c028: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15C024u, 0x15C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C02Cu;
label_15c02c:
    // 0x15c02c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15c030:
    // 0x15c030: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15c030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15c034:
    // 0x15c034: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15c034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15c038:
    // 0x15c038: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15c038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15c03c:
    // 0x15c03c: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15c03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15c040:
    // 0x15c040: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15c040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15c044:
    // 0x15c044: 0xc0682b2  jal         func_1A0AC8
label_15c048:
    if (ctx->pc == 0x15C048u) {
        ctx->pc = 0x15C048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C044u;
        // 0x15c048: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C04Cu;
        goto label_15c04c;
    }
    ctx->pc = 0x15C044u;
    SET_GPR_U32(ctx, 31, 0x15C04Cu);
    ctx->pc = 0x15C048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C044u;
    // 0x15c048: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15C044u, 0x15C04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C04Cu;
label_15c04c:
    // 0x15c04c: 0xc0682b6  jal         func_1A0AD8
label_15c050:
    if (ctx->pc == 0x15C050u) {
        ctx->pc = 0x15C050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C04Cu;
        // 0x15c050: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C054u;
        goto label_15c054;
    }
    ctx->pc = 0x15C04Cu;
    SET_GPR_U32(ctx, 31, 0x15C054u);
    ctx->pc = 0x15C050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C04Cu;
    // 0x15c050: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15C04Cu, 0x15C054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C054u;
label_15c054:
    // 0x15c054: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15c054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c058:
    // 0x15c058: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15c058u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c05c:
    // 0x15c05c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15c060:
    // 0x15c060: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x15c060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15c064:
    // 0x15c064: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15c064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15c068:
    // 0x15c068: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15c068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15c06c:
    // 0x15c06c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c070:
    // 0x15c070: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15c070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c074:
    // 0x15c074: 0xc062cb0  jal         func_18B2C0
label_15c078:
    if (ctx->pc == 0x15C078u) {
        ctx->pc = 0x15C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C074u;
        // 0x15c078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C07Cu;
        goto label_15c07c;
    }
    ctx->pc = 0x15C074u;
    SET_GPR_U32(ctx, 31, 0x15C07Cu);
    ctx->pc = 0x15C078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C074u;
    // 0x15c078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15C074u, 0x15C07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C07Cu;
label_15c07c:
    // 0x15c07c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c07cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c080:
    // 0x15c080: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c084:
    // 0x15c084: 0xc06825c  jal         func_1A0970
label_15c088:
    if (ctx->pc == 0x15C088u) {
        ctx->pc = 0x15C088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C084u;
        // 0x15c088: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C08Cu;
        goto label_15c08c;
    }
    ctx->pc = 0x15C084u;
    SET_GPR_U32(ctx, 31, 0x15C08Cu);
    ctx->pc = 0x15C088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C084u;
    // 0x15c088: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15C084u, 0x15C08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C08Cu;
label_15c08c:
    // 0x15c08c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15c090:
    // 0x15c090: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15c090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c094:
    // 0x15c094: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15c094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15c098:
    // 0x15c098: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15c098u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15c09c:
    // 0x15c09c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15c09cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15c0a0:
    // 0x15c0a0: 0x60f809  jalr        $v1
label_15c0a4:
    if (ctx->pc == 0x15C0A4u) {
        ctx->pc = 0x15C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0A0u;
        // 0x15c0a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C0A8u;
        goto label_15c0a8;
    }
    ctx->pc = 0x15C0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C0A8u);
        ctx->pc = 0x15C0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0A0u;
        // 0x15c0a4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C0A0u, 0x15C0A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C0A8u;
label_15c0a8:
    // 0x15c0a8: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15c0a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15c0ac:
    // 0x15c0ac: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15c0b0:
    if (ctx->pc == 0x15C0B0u) {
        ctx->pc = 0x15C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0ACu;
        // 0x15c0b0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C0B4u;
        goto label_15c0b4;
    }
    ctx->pc = 0x15C0ACu;
    {
        const bool branch_taken_0x15c0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0ACu;
        // 0x15c0b0: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c0ac) {
            ctx->pc = 0x15C168u;
            return;
        }
    }
    ctx->pc = 0x15C0B4u;
label_15c0b4:
    // 0x15c0b4: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15c0b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15c0b8:
    // 0x15c0b8: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15c0b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15c0bc:
    // 0x15c0bc: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15c0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15c0c0:
    // 0x15c0c0: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15c0c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15c0c4:
    // 0x15c0c4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15c0c8:
    // 0x15c0c8: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15c0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15c0cc:
    // 0x15c0cc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15c0d0:
    // 0x15c0d0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15c0d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15c0d4:
    // 0x15c0d4: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15c0d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15c0d8:
    // 0x15c0d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15c0dc:
    // 0x15c0dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15c0e0:
    // 0x15c0e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15c0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15c0e4:
    // 0x15c0e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15c0e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15c0e8:
    // 0x15c0e8: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15c0e8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15c0ec:
    // 0x15c0ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15c0ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15c0f0:
    // 0x15c0f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15c0f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15c0f4:
    // 0x15c0f4: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15c0f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15c0f8:
    // 0x15c0f8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15c0f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15c0fc:
    // 0x15c0fc: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15c0fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15c100:
    // 0x15c100: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15c100u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15c104:
    // 0x15c104: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15c104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15c108:
    // 0x15c108: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15c108u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15c10c:
    // 0x15c10c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15c10cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15c110:
    // 0x15c110: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15c110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15c114:
    // 0x15c114: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15c114u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15c118:
    // 0x15c118: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15c118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15c11c:
    // 0x15c11c: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15c11cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15c120:
    // 0x15c120: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15c120u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15c124:
    // 0x15c124: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15c124u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15c128:
    // 0x15c128: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15c128u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15c12c:
    // 0x15c12c: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15c12cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15c130:
    // 0x15c130: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15c134:
    // 0x15c134: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15c134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15c138:
    // 0x15c138: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15c138u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15c13c:
    // 0x15c13c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15c13cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15c140:
    // 0x15c140: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15c140u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15c144:
    // 0x15c144: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15c144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15c148:
    // 0x15c148: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15c148u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15c14c:
    // 0x15c14c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15c14cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15c150:
    // 0x15c150: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15c150u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15c154:
    // 0x15c154: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15c154u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15c158:
    // 0x15c158: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15c158u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15c15c:
    // 0x15c15c: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15c15cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15c160:
    // 0x15c160: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15c160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15c164:
    // 0x15c164: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15c164u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15c168u;
}
