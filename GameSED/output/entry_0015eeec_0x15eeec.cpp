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

// Function: entry_0015eeec
// Address: 0x15eeec - 0x15f0a4
void entry_0015eeec_0x15eeec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eeec_0x15eeec");
#endif

    switch (ctx->pc) {
        case 0x15ef20u: goto label_15ef20;
        case 0x15ef50u: goto label_15ef50;
        case 0x15ef68u: goto label_15ef68;
        case 0x15ef70u: goto label_15ef70;
        case 0x15ef90u: goto label_15ef90;
        case 0x15ef98u: goto label_15ef98;
        case 0x15efb8u: goto label_15efb8;
        case 0x15efc8u: goto label_15efc8;
        case 0x15efe4u: goto label_15efe4;
        default: break;
    }

    ctx->pc = 0x15eeecu;

label_15eeec:
    // 0x15eeec: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15eeecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15eef0:
    // 0x15eef0: 0x8f848d10  lw          $a0, -0x72F0($gp)
    ctx->pc = 0x15eef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
label_15eef4:
    // 0x15eef4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15eef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15eef8:
    // 0x15eef8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15eef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15eefc:
    // 0x15eefc: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x15eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_15ef00:
    // 0x15ef00: 0x24630048  addiu       $v1, $v1, 0x48
    ctx->pc = 0x15ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_15ef04:
    // 0x15ef04: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x15ef04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_15ef08:
    // 0x15ef08: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15ef08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15ef0c:
    // 0x15ef0c: 0xae02012c  sw          $v0, 0x12C($s0)
    ctx->pc = 0x15ef0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
label_15ef10:
    // 0x15ef10: 0xaeb00f30  sw          $s0, 0xF30($s5)
    ctx->pc = 0x15ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3888), GPR_U32(ctx, 16));
label_15ef14:
    // 0x15ef14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15ef14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15ef18:
    // 0x15ef18: 0x40f809  jalr        $v0
label_15ef1c:
    if (ctx->pc == 0x15EF1Cu) {
        ctx->pc = 0x15EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF18u;
        // 0x15ef1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF20u;
        goto label_15ef20;
    }
    ctx->pc = 0x15EF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15EF20u);
        ctx->pc = 0x15EF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF18u;
        // 0x15ef1c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EF18u, 0x15EF20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EF20u;
label_15ef20:
    // 0x15ef20: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15ef24:
    // 0x15ef24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_15ef28:
    // 0x15ef28: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x15ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15ef2c:
    // 0x15ef2c: 0x8e850018  lw          $a1, 0x18($s4)
    ctx->pc = 0x15ef2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_15ef30:
    // 0x15ef30: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x15ef30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_15ef34:
    // 0x15ef34: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x15ef34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_15ef38:
    // 0x15ef38: 0x26940078  addiu       $s4, $s4, 0x78
    ctx->pc = 0x15ef38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 120));
label_15ef3c:
    // 0x15ef3c: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x15ef3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_15ef40:
    // 0x15ef40: 0x3c52821  addu        $a1, $fp, $a1
    ctx->pc = 0x15ef40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_15ef44:
    // 0x15ef44: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x15ef44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_15ef48:
    // 0x15ef48: 0xe0f809  jalr        $a3
label_15ef4c:
    if (ctx->pc == 0x15EF4Cu) {
        ctx->pc = 0x15EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF48u;
        // 0x15ef4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF50u;
        goto label_15ef50;
    }
    ctx->pc = 0x15EF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x15EF50u);
        ctx->pc = 0x15EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF48u;
        // 0x15ef4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EF48u, 0x15EF50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EF50u;
label_15ef50:
    // 0x15ef50: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x15ef50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_15ef54:
    // 0x15ef54: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x15ef54u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_15ef58:
    // 0x15ef58: 0x26930008  addiu       $s3, $s4, 0x8
    ctx->pc = 0x15ef58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_15ef5c:
    // 0x15ef5c: 0x8c510024  lw          $s1, 0x24($v0)
    ctx->pc = 0x15ef5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_15ef60:
    // 0x15ef60: 0xc06bd28  jal         func_1AF4A0
label_15ef64:
    if (ctx->pc == 0x15EF64u) {
        ctx->pc = 0x15EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF60u;
        // 0x15ef64: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF68u;
        goto label_15ef68;
    }
    ctx->pc = 0x15EF60u;
    SET_GPR_U32(ctx, 31, 0x15EF68u);
    ctx->pc = 0x15EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF60u;
    // 0x15ef64: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15EF60u, 0x15EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF68u;
label_15ef68:
    // 0x15ef68: 0xc06bd20  jal         func_1AF480
label_15ef6c:
    if (ctx->pc == 0x15EF6Cu) {
        ctx->pc = 0x15EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF68u;
        // 0x15ef6c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF70u;
        goto label_15ef70;
    }
    ctx->pc = 0x15EF68u;
    SET_GPR_U32(ctx, 31, 0x15EF70u);
    ctx->pc = 0x15EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF68u;
    // 0x15ef6c: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15EF68u, 0x15EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF70u;
label_15ef70:
    // 0x15ef70: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15ef70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15ef74:
    // 0x15ef74: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15ef74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15ef78:
    // 0x15ef78: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15ef78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15ef7c:
    // 0x15ef7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15ef80:
    // 0x15ef80: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15ef84:
    // 0x15ef84: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15ef84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15ef88:
    // 0x15ef88: 0xc0682b2  jal         func_1A0AC8
label_15ef8c:
    if (ctx->pc == 0x15EF8Cu) {
        ctx->pc = 0x15EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF88u;
        // 0x15ef8c: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF90u;
        goto label_15ef90;
    }
    ctx->pc = 0x15EF88u;
    SET_GPR_U32(ctx, 31, 0x15EF90u);
    ctx->pc = 0x15EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF88u;
    // 0x15ef8c: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15EF88u, 0x15EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF90u;
label_15ef90:
    // 0x15ef90: 0xc0682b6  jal         func_1A0AD8
label_15ef94:
    if (ctx->pc == 0x15EF94u) {
        ctx->pc = 0x15EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EF90u;
        // 0x15ef94: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EF98u;
        goto label_15ef98;
    }
    ctx->pc = 0x15EF90u;
    SET_GPR_U32(ctx, 31, 0x15EF98u);
    ctx->pc = 0x15EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF90u;
    // 0x15ef94: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15EF90u, 0x15EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EF98u;
label_15ef98:
    // 0x15ef98: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15ef98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15ef9c:
    // 0x15ef9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15ef9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15efa0:
    // 0x15efa0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15efa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15efa4:
    // 0x15efa4: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x15efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_15efa8:
    // 0x15efa8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15efa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15efac:
    // 0x15efac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15efacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15efb0:
    // 0x15efb0: 0xc062cb0  jal         func_18B2C0
label_15efb4:
    if (ctx->pc == 0x15EFB4u) {
        ctx->pc = 0x15EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFB0u;
        // 0x15efb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFB8u;
        goto label_15efb8;
    }
    ctx->pc = 0x15EFB0u;
    SET_GPR_U32(ctx, 31, 0x15EFB8u);
    ctx->pc = 0x15EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFB0u;
    // 0x15efb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15EFB0u, 0x15EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EFB8u;
label_15efb8:
    // 0x15efb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15efb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15efbc:
    // 0x15efbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15efbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15efc0:
    // 0x15efc0: 0xc06825c  jal         func_1A0970
label_15efc4:
    if (ctx->pc == 0x15EFC4u) {
        ctx->pc = 0x15EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFC0u;
        // 0x15efc4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFC8u;
        goto label_15efc8;
    }
    ctx->pc = 0x15EFC0u;
    SET_GPR_U32(ctx, 31, 0x15EFC8u);
    ctx->pc = 0x15EFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFC0u;
    // 0x15efc4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15EFC0u, 0x15EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15EFC8u;
label_15efc8:
    // 0x15efc8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15efcc:
    // 0x15efcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15efccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15efd0:
    // 0x15efd0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15efd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15efd4:
    // 0x15efd4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15efd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15efd8:
    // 0x15efd8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15efd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15efdc:
    // 0x15efdc: 0x60f809  jalr        $v1
label_15efe0:
    if (ctx->pc == 0x15EFE0u) {
        ctx->pc = 0x15EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFDCu;
        // 0x15efe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFE4u;
        goto label_15efe4;
    }
    ctx->pc = 0x15EFDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15EFE4u);
        ctx->pc = 0x15EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFDCu;
        // 0x15efe0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EFDCu, 0x15EFE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15EFE4u;
label_15efe4:
    // 0x15efe4: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15efe4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15efe8:
    // 0x15efe8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15efec:
    if (ctx->pc == 0x15EFECu) {
        ctx->pc = 0x15EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFE8u;
        // 0x15efec: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15EFF0u;
        goto label_15eff0;
    }
    ctx->pc = 0x15EFE8u;
    {
        const bool branch_taken_0x15efe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EFE8u;
        // 0x15efec: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15efe8) {
            ctx->pc = 0x15F0A4u;
            return;
        }
    }
    ctx->pc = 0x15EFF0u;
label_15eff0:
    // 0x15eff0: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15eff0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15eff4:
    // 0x15eff4: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15eff4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15eff8:
    // 0x15eff8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15eff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15effc:
    // 0x15effc: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15effcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15f000:
    // 0x15f000: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15f000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15f004:
    // 0x15f004: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15f004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15f008:
    // 0x15f008: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15f008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15f00c:
    // 0x15f00c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15f00cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15f010:
    // 0x15f010: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15f010u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15f014:
    // 0x15f014: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15f014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15f018:
    // 0x15f018: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15f018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15f01c:
    // 0x15f01c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15f01cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15f020:
    // 0x15f020: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15f020u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15f024:
    // 0x15f024: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15f024u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15f028:
    // 0x15f028: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15f028u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15f02c:
    // 0x15f02c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15f02cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15f030:
    // 0x15f030: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15f030u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15f034:
    // 0x15f034: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15f034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15f038:
    // 0x15f038: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15f038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15f03c:
    // 0x15f03c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15f03cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15f040:
    // 0x15f040: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15f040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15f044:
    // 0x15f044: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15f044u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15f048:
    // 0x15f048: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15f048u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f04c:
    // 0x15f04c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15f04cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f050:
    // 0x15f050: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f050u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f054:
    // 0x15f054: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f054u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f058:
    // 0x15f058: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f058u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f05c:
    // 0x15f05c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f05cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f060:
    // 0x15f060: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f060u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f064:
    // 0x15f064: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15f064u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15f068:
    // 0x15f068: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15f068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15f06c:
    // 0x15f06c: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15f06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15f070:
    // 0x15f070: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15f070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15f074:
    // 0x15f074: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15f074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15f078:
    // 0x15f078: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15f078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15f07c:
    // 0x15f07c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15f07cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15f080:
    // 0x15f080: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15f080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15f084:
    // 0x15f084: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15f084u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15f088:
    // 0x15f088: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15f088u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15f08c:
    // 0x15f08c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15f08cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15f090:
    // 0x15f090: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15f090u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15f094:
    // 0x15f094: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f094u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15f098:
    // 0x15f098: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15f098u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15f09c:
    // 0x15f09c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15f09cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15f0a0:
    // 0x15f0a0: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15f0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15f0a4u;
}
