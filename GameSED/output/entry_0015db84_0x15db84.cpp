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

// Function: entry_0015db84
// Address: 0x15db84 - 0x15dd38
void entry_0015db84_0x15db84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015db84_0x15db84");
#endif

    switch (ctx->pc) {
        case 0x15dbb8u: goto label_15dbb8;
        case 0x15dbe4u: goto label_15dbe4;
        case 0x15dbfcu: goto label_15dbfc;
        case 0x15dc04u: goto label_15dc04;
        case 0x15dc24u: goto label_15dc24;
        case 0x15dc2cu: goto label_15dc2c;
        case 0x15dc4cu: goto label_15dc4c;
        case 0x15dc5cu: goto label_15dc5c;
        case 0x15dc78u: goto label_15dc78;
        default: break;
    }

    ctx->pc = 0x15db84u;

label_15db84:
    // 0x15db84: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x15db84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15db88:
    // 0x15db88: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15db88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15db8c:
    // 0x15db8c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15db90:
    // 0x15db90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15db90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15db94:
    // 0x15db94: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15db94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15db98:
    // 0x15db98: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15db9c:
    // 0x15db9c: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15db9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15dba0:
    // 0x15dba0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15dba0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15dba4:
    // 0x15dba4: 0xae22012c  sw          $v0, 0x12C($s1)
    ctx->pc = 0x15dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 2));
label_15dba8:
    // 0x15dba8: 0xaeb10000  sw          $s1, 0x0($s5)
    ctx->pc = 0x15dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
label_15dbac:
    // 0x15dbac: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15dbb0:
    // 0x15dbb0: 0x40f809  jalr        $v0
label_15dbb4:
    if (ctx->pc == 0x15DBB4u) {
        ctx->pc = 0x15DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBB0u;
        // 0x15dbb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBB8u;
        goto label_15dbb8;
    }
    ctx->pc = 0x15DBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15DBB8u);
        ctx->pc = 0x15DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBB0u;
        // 0x15dbb4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DBB0u, 0x15DBB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DBB8u;
label_15dbb8:
    // 0x15dbb8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x15dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_15dbbc:
    // 0x15dbbc: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15dbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15dbc0:
    // 0x15dbc0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15dbc4:
    // 0x15dbc4: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15dbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15dbc8:
    // 0x15dbc8: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15dbc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15dbcc:
    // 0x15dbcc: 0xbe2821  addu        $a1, $a1, $fp
    ctx->pc = 0x15dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 30)));
label_15dbd0:
    // 0x15dbd0: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15dbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15dbd4:
    // 0x15dbd4: 0x24c6ff54  addiu       $a2, $a2, -0xAC
    ctx->pc = 0x15dbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967124));
label_15dbd8:
    // 0x15dbd8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x15dbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
label_15dbdc:
    // 0x15dbdc: 0xe0f809  jalr        $a3
label_15dbe0:
    if (ctx->pc == 0x15DBE0u) {
        ctx->pc = 0x15DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBDCu;
        // 0x15dbe0: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBE4u;
        goto label_15dbe4;
    }
    ctx->pc = 0x15DBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15DBE4u);
        ctx->pc = 0x15DBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBDCu;
        // 0x15dbe0: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DBDCu, 0x15DBE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DBE4u;
label_15dbe4:
    // 0x15dbe4: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x15dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
label_15dbe8:
    // 0x15dbe8: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15dbe8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15dbec:
    // 0x15dbec: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15dbecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15dbf0:
    // 0x15dbf0: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15dbf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15dbf4:
    // 0x15dbf4: 0xc06bd28  jal         func_1AF4A0
label_15dbf8:
    if (ctx->pc == 0x15DBF8u) {
        ctx->pc = 0x15DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBF4u;
        // 0x15dbf8: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DBFCu;
        goto label_15dbfc;
    }
    ctx->pc = 0x15DBF4u;
    SET_GPR_U32(ctx, 31, 0x15DBFCu);
    ctx->pc = 0x15DBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBF4u;
    // 0x15dbf8: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15DBF4u, 0x15DBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DBFCu;
label_15dbfc:
    // 0x15dbfc: 0xc06bd20  jal         func_1AF480
label_15dc00:
    if (ctx->pc == 0x15DC00u) {
        ctx->pc = 0x15DC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DBFCu;
        // 0x15dc00: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC04u;
        goto label_15dc04;
    }
    ctx->pc = 0x15DBFCu;
    SET_GPR_U32(ctx, 31, 0x15DC04u);
    ctx->pc = 0x15DC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DBFCu;
    // 0x15dc00: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15DBFCu, 0x15DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC04u;
label_15dc04:
    // 0x15dc04: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15dc08:
    // 0x15dc08: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15dc08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15dc0c:
    // 0x15dc0c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15dc10:
    // 0x15dc10: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15dc10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15dc14:
    // 0x15dc14: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15dc18:
    // 0x15dc18: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15dc18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15dc1c:
    // 0x15dc1c: 0xc0682b2  jal         func_1A0AC8
label_15dc20:
    if (ctx->pc == 0x15DC20u) {
        ctx->pc = 0x15DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC1Cu;
        // 0x15dc20: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC24u;
        goto label_15dc24;
    }
    ctx->pc = 0x15DC1Cu;
    SET_GPR_U32(ctx, 31, 0x15DC24u);
    ctx->pc = 0x15DC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC1Cu;
    // 0x15dc20: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15DC1Cu, 0x15DC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC24u;
label_15dc24:
    // 0x15dc24: 0xc0682b6  jal         func_1A0AD8
label_15dc28:
    if (ctx->pc == 0x15DC28u) {
        ctx->pc = 0x15DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC24u;
        // 0x15dc28: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC2Cu;
        goto label_15dc2c;
    }
    ctx->pc = 0x15DC24u;
    SET_GPR_U32(ctx, 31, 0x15DC2Cu);
    ctx->pc = 0x15DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC24u;
    // 0x15dc28: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15DC24u, 0x15DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC2Cu;
label_15dc2c:
    // 0x15dc2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15dc2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15dc30:
    // 0x15dc30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15dc30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15dc34:
    // 0x15dc34: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15dc34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15dc38:
    // 0x15dc38: 0xae57000c  sw          $s7, 0xC($s2)
    ctx->pc = 0x15dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 23));
label_15dc3c:
    // 0x15dc3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15dc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15dc40:
    // 0x15dc40: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15dc40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15dc44:
    // 0x15dc44: 0xc062cb0  jal         func_18B2C0
label_15dc48:
    if (ctx->pc == 0x15DC48u) {
        ctx->pc = 0x15DC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC44u;
        // 0x15dc48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC4Cu;
        goto label_15dc4c;
    }
    ctx->pc = 0x15DC44u;
    SET_GPR_U32(ctx, 31, 0x15DC4Cu);
    ctx->pc = 0x15DC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC44u;
    // 0x15dc48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15DC44u, 0x15DC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC4Cu;
label_15dc4c:
    // 0x15dc4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15dc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15dc50:
    // 0x15dc50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dc54:
    // 0x15dc54: 0xc06825c  jal         func_1A0970
label_15dc58:
    if (ctx->pc == 0x15DC58u) {
        ctx->pc = 0x15DC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC54u;
        // 0x15dc58: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC5Cu;
        goto label_15dc5c;
    }
    ctx->pc = 0x15DC54u;
    SET_GPR_U32(ctx, 31, 0x15DC5Cu);
    ctx->pc = 0x15DC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DC54u;
    // 0x15dc58: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15DC54u, 0x15DC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DC5Cu;
label_15dc5c:
    // 0x15dc5c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15dc60:
    // 0x15dc60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15dc64:
    // 0x15dc64: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15dc68:
    // 0x15dc68: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15dc68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15dc6c:
    // 0x15dc6c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15dc70:
    // 0x15dc70: 0x60f809  jalr        $v1
label_15dc74:
    if (ctx->pc == 0x15DC74u) {
        ctx->pc = 0x15DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC70u;
        // 0x15dc74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC78u;
        goto label_15dc78;
    }
    ctx->pc = 0x15DC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15DC78u);
        ctx->pc = 0x15DC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC70u;
        // 0x15dc74: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15DC70u, 0x15DC78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15DC78u;
label_15dc78:
    // 0x15dc78: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15dc78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15dc7c:
    // 0x15dc7c: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15dc80:
    if (ctx->pc == 0x15DC80u) {
        ctx->pc = 0x15DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC7Cu;
        // 0x15dc80: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15DC84u;
        goto label_15dc84;
    }
    ctx->pc = 0x15DC7Cu;
    {
        const bool branch_taken_0x15dc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DC7Cu;
        // 0x15dc80: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dc7c) {
            ctx->pc = 0x15DD38u;
            return;
        }
    }
    ctx->pc = 0x15DC84u;
label_15dc84:
    // 0x15dc84: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15dc84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15dc88:
    // 0x15dc88: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15dc88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15dc8c:
    // 0x15dc8c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15dc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15dc90:
    // 0x15dc90: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15dc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15dc94:
    // 0x15dc94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15dc98:
    // 0x15dc98: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15dc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15dc9c:
    // 0x15dc9c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15dca0:
    // 0x15dca0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15dca0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15dca4:
    // 0x15dca4: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15dca4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15dca8:
    // 0x15dca8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15dcac:
    // 0x15dcac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15dcb0:
    // 0x15dcb0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15dcb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15dcb4:
    // 0x15dcb4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15dcb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15dcb8:
    // 0x15dcb8: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15dcb8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15dcbc:
    // 0x15dcbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15dcbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15dcc0:
    // 0x15dcc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15dcc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15dcc4:
    // 0x15dcc4: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15dcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15dcc8:
    // 0x15dcc8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15dcc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15dccc:
    // 0x15dccc: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15dcccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15dcd0:
    // 0x15dcd0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15dcd0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15dcd4:
    // 0x15dcd4: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15dcd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15dcd8:
    // 0x15dcd8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15dcd8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15dcdc:
    // 0x15dcdc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15dcdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15dce0:
    // 0x15dce0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15dce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15dce4:
    // 0x15dce4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15dce4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15dce8:
    // 0x15dce8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15dce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15dcec:
    // 0x15dcec: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15dcecu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15dcf0:
    // 0x15dcf0: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15dcf0u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15dcf4:
    // 0x15dcf4: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15dcf4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15dcf8:
    // 0x15dcf8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15dcfc:
    // 0x15dcfc: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15dcfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15dd00:
    // 0x15dd00: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15dd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15dd04:
    // 0x15dd04: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15dd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15dd08:
    // 0x15dd08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15dd08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15dd0c:
    // 0x15dd0c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15dd0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15dd10:
    // 0x15dd10: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15dd10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15dd14:
    // 0x15dd14: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15dd14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15dd18:
    // 0x15dd18: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15dd18u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15dd1c:
    // 0x15dd1c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15dd1cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15dd20:
    // 0x15dd20: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15dd20u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15dd24:
    // 0x15dd24: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15dd24u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15dd28:
    // 0x15dd28: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15dd28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15dd2c:
    // 0x15dd2c: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15dd2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15dd30:
    // 0x15dd30: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15dd30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15dd34:
    // 0x15dd34: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15dd34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15dd38u;
}
