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

// Function: entry_0015bdf8
// Address: 0x15bdf8 - 0x15bf94
void entry_0015bdf8_0x15bdf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bdf8_0x15bdf8");
#endif

    switch (ctx->pc) {
        case 0x15be4cu: goto label_15be4c;
        case 0x15be58u: goto label_15be58;
        case 0x15be78u: goto label_15be78;
        case 0x15be80u: goto label_15be80;
        case 0x15beacu: goto label_15beac;
        case 0x15beb8u: goto label_15beb8;
        case 0x15bed4u: goto label_15bed4;
        default: break;
    }

    ctx->pc = 0x15bdf8u;

label_15bdf8:
    // 0x15bdf8: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x15bdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_15bdfc:
    // 0x15bdfc: 0x104001de  beqz        $v0, . + 4 + (0x1DE << 2)
label_15be00:
    if (ctx->pc == 0x15BE00u) {
        ctx->pc = 0x15BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDFCu;
        // 0x15be00: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE04u;
        goto label_15be04;
    }
    ctx->pc = 0x15BDFCu;
    {
        const bool branch_taken_0x15bdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BDFCu;
        // 0x15be00: 0x8c650004  lw          $a1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdfc) {
            ctx->pc = 0x15C578u;
            return;
        }
    }
    ctx->pc = 0x15BE04u;
label_15be04:
    // 0x15be04: 0x12a001dd  beqz        $s5, . + 4 + (0x1DD << 2)
label_15be08:
    if (ctx->pc == 0x15BE08u) {
        ctx->pc = 0x15BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE04u;
        // 0x15be08: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE0Cu;
        goto label_15be0c;
    }
    ctx->pc = 0x15BE04u;
    {
        const bool branch_taken_0x15be04 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE04u;
        // 0x15be08: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be04) {
            ctx->pc = 0x15C57Cu;
            return;
        }
    }
    ctx->pc = 0x15BE0Cu;
label_15be0c:
    // 0x15be0c: 0x10a001db  beqz        $a1, . + 4 + (0x1DB << 2)
label_15be10:
    if (ctx->pc == 0x15BE10u) {
        ctx->pc = 0x15BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE0Cu;
        // 0x15be10: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE14u;
        goto label_15be14;
    }
    ctx->pc = 0x15BE0Cu;
    {
        const bool branch_taken_0x15be0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE0Cu;
        // 0x15be10: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be0c) {
            ctx->pc = 0x15C57Cu;
            return;
        }
    }
    ctx->pc = 0x15BE14u;
label_15be14:
    // 0x15be14: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x15be14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_15be18:
    // 0x15be18: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x15be18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_15be1c:
    // 0x15be1c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15be1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_15be20:
    // 0x15be20: 0x8c910024  lw          $s1, 0x24($a0)
    ctx->pc = 0x15be20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_15be24:
    // 0x15be24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15be24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15be28:
    // 0x15be28: 0x24a5a380  addiu       $a1, $a1, -0x5C80
    ctx->pc = 0x15be28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943616));
label_15be2c:
    // 0x15be2c: 0xaea70018  sw          $a3, 0x18($s5)
    ctx->pc = 0x15be2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 7));
label_15be30:
    // 0x15be30: 0x24a2ffd8  addiu       $v0, $a1, -0x28
    ctx->pc = 0x15be30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967256));
label_15be34:
    // 0x15be34: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x15be34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_15be38:
    // 0x15be38: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x15be38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_15be3c:
    // 0x15be3c: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x15be3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15be40:
    // 0x15be40: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x15be40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_15be44:
    // 0x15be44: 0xc06bd28  jal         func_1AF4A0
label_15be48:
    if (ctx->pc == 0x15BE48u) {
        ctx->pc = 0x15BE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE44u;
        // 0x15be48: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE4Cu;
        goto label_15be4c;
    }
    ctx->pc = 0x15BE44u;
    SET_GPR_U32(ctx, 31, 0x15BE4Cu);
    ctx->pc = 0x15BE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BE44u;
    // 0x15be48: 0x8e920000  lw          $s2, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x15BE44u, 0x15BE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE4Cu;
label_15be4c:
    // 0x15be4c: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x15be4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_15be50:
    // 0x15be50: 0xc06bd20  jal         func_1AF480
label_15be54:
    if (ctx->pc == 0x15BE54u) {
        ctx->pc = 0x15BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE50u;
        // 0x15be54: 0x26930008  addiu       $s3, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE58u;
        goto label_15be58;
    }
    ctx->pc = 0x15BE50u;
    SET_GPR_U32(ctx, 31, 0x15BE58u);
    ctx->pc = 0x15BE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BE50u;
    // 0x15be54: 0x26930008  addiu       $s3, $s4, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x15BE50u, 0x15BE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE58u;
label_15be58:
    // 0x15be58: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x15be58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_15be5c:
    // 0x15be5c: 0x8e300028  lw          $s0, 0x28($s1)
    ctx->pc = 0x15be5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_15be60:
    // 0x15be60: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x15be60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15be64:
    // 0x15be64: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x15be64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_15be68:
    // 0x15be68: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x15be68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_15be6c:
    // 0x15be6c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x15be6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_15be70:
    // 0x15be70: 0xc0682b2  jal         func_1A0AC8
label_15be74:
    if (ctx->pc == 0x15BE74u) {
        ctx->pc = 0x15BE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE70u;
        // 0x15be74: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE78u;
        goto label_15be78;
    }
    ctx->pc = 0x15BE70u;
    SET_GPR_U32(ctx, 31, 0x15BE78u);
    ctx->pc = 0x15BE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BE70u;
    // 0x15be74: 0x8e910020  lw          $s1, 0x20($s4) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AC8u, 0x15BE70u, 0x15BE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE78u;
label_15be78:
    // 0x15be78: 0xc0682b6  jal         func_1A0AD8
label_15be7c:
    if (ctx->pc == 0x15BE7Cu) {
        ctx->pc = 0x15BE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BE78u;
        // 0x15be7c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BE80u;
        goto label_15be80;
    }
    ctx->pc = 0x15BE78u;
    SET_GPR_U32(ctx, 31, 0x15BE80u);
    ctx->pc = 0x15BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BE78u;
    // 0x15be7c: 0x24040220  addiu       $a0, $zero, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0AD8u, 0x15BE78u, 0x15BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BE80u;
label_15be80:
    // 0x15be80: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15be80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15be84:
    // 0x15be84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15be84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15be88:
    // 0x15be88: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x15be88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
label_15be8c:
    // 0x15be8c: 0x244201c0  addiu       $v0, $v0, 0x1C0
    ctx->pc = 0x15be8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 448));
label_15be90:
    // 0x15be90: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x15be90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_15be94:
    // 0x15be94: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x15be94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_15be98:
    // 0x15be98: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x15be98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15be9c:
    // 0x15be9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15be9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15bea0:
    // 0x15bea0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x15bea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15bea4:
    // 0x15bea4: 0xc062cb0  jal         func_18B2C0
label_15bea8:
    if (ctx->pc == 0x15BEA8u) {
        ctx->pc = 0x15BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEA4u;
        // 0x15bea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BEACu;
        goto label_15beac;
    }
    ctx->pc = 0x15BEA4u;
    SET_GPR_U32(ctx, 31, 0x15BEACu);
    ctx->pc = 0x15BEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BEA4u;
    // 0x15bea8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18B2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18B2C0u, 0x15BEA4u, 0x15BEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BEACu;
label_15beac:
    // 0x15beac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15beacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15beb0:
    // 0x15beb0: 0xc06825c  jal         func_1A0970
label_15beb4:
    if (ctx->pc == 0x15BEB4u) {
        ctx->pc = 0x15BEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BEB0u;
        // 0x15beb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BEB8u;
        goto label_15beb8;
    }
    ctx->pc = 0x15BEB0u;
    SET_GPR_U32(ctx, 31, 0x15BEB8u);
    ctx->pc = 0x15BEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BEB0u;
    // 0x15beb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0970u, 0x15BEB0u, 0x15BEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BEB8u;
label_15beb8:
    // 0x15beb8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x15beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15bebc:
    // 0x15bebc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15bebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15bec0:
    // 0x15bec0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x15bec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_15bec4:
    // 0x15bec4: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15bec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_15bec8:
    // 0x15bec8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15bec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_15becc:
    // 0x15becc: 0x60f809  jalr        $v1
label_15bed0:
    if (ctx->pc == 0x15BED0u) {
        ctx->pc = 0x15BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BECCu;
        // 0x15bed0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BED4u;
        goto label_15bed4;
    }
    ctx->pc = 0x15BECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15BED4u);
        ctx->pc = 0x15BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BECCu;
        // 0x15bed0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BECCu, 0x15BED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BED4u;
label_15bed4:
    // 0x15bed4: 0xde820010  ld          $v0, 0x10($s4)
    ctx->pc = 0x15bed4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_15bed8:
    // 0x15bed8: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_15bedc:
    if (ctx->pc == 0x15BEDCu) {
        ctx->pc = 0x15BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BED8u;
        // 0x15bedc: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BEE0u;
        goto label_15bee0;
    }
    ctx->pc = 0x15BED8u;
    {
        const bool branch_taken_0x15bed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BED8u;
        // 0x15bedc: 0x26080150  addiu       $t0, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bed8) {
            ctx->pc = 0x15BF94u;
            return;
        }
    }
    ctx->pc = 0x15BEE0u;
label_15bee0:
    // 0x15bee0: 0x9682000c  lhu         $v0, 0xC($s4)
    ctx->pc = 0x15bee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
label_15bee4:
    // 0x15bee4: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x15bee4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
label_15bee8:
    // 0x15bee8: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15bee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15beec:
    // 0x15beec: 0x8e850010  lw          $a1, 0x10($s4)
    ctx->pc = 0x15beecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_15bef0:
    // 0x15bef0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x15bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_15bef4:
    // 0x15bef4: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x15bef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_15bef8:
    // 0x15bef8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x15bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_15befc:
    // 0x15befc: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x15befcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_15bf00:
    // 0x15bf00: 0x31c43  sra         $v1, $v1, 17
    ctx->pc = 0x15bf00u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 17));
label_15bf04:
    // 0x15bf04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x15bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15bf08:
    // 0x15bf08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_15bf0c:
    // 0x15bf0c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15bf0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15bf10:
    // 0x15bf10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15bf10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15bf14:
    // 0x15bf14: 0xa506000e  sh          $a2, 0xE($t0)
    ctx->pc = 0x15bf14u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 6));
label_15bf18:
    // 0x15bf18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15bf18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_15bf1c:
    // 0x15bf1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15bf1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_15bf20:
    // 0x15bf20: 0x26070180  addiu       $a3, $s0, 0x180
    ctx->pc = 0x15bf20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
label_15bf24:
    // 0x15bf24: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15bf24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15bf28:
    // 0x15bf28: 0xe5010020  swc1        $f1, 0x20($t0)
    ctx->pc = 0x15bf28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_15bf2c:
    // 0x15bf2c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15bf2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_15bf30:
    // 0x15bf30: 0xe5000024  swc1        $f0, 0x24($t0)
    ctx->pc = 0x15bf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_15bf34:
    // 0x15bf34: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x15bf34u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_15bf38:
    // 0x15bf38: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15bf38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15bf3c:
    // 0x15bf3c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x15bf3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15bf40:
    // 0x15bf40: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15bf40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15bf44:
    // 0x15bf44: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15bf44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15bf48:
    // 0x15bf48: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15bf48u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15bf4c:
    // 0x15bf4c: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15bf4cu;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15bf50:
    // 0x15bf50: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15bf50u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15bf54:
    // 0x15bf54: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x15bf54u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_15bf58:
    // 0x15bf58: 0x26060190  addiu       $a2, $s0, 0x190
    ctx->pc = 0x15bf58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
label_15bf5c:
    // 0x15bf5c: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x15bf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15bf60:
    // 0x15bf60: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x15bf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15bf64:
    // 0x15bf64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x15bf64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15bf68:
    // 0x15bf68: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x15bf68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_15bf6c:
    // 0x15bf6c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x15bf6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_15bf70:
    // 0x15bf70: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x15bf70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_15bf74:
    // 0x15bf74: 0x70621488  pextlw      $v0, $v1, $v0
    ctx->pc = 0x15bf74u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_15bf78:
    // 0x15bf78: 0x70a42488  pextlw      $a0, $a1, $a0
    ctx->pc = 0x15bf78u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
label_15bf7c:
    // 0x15bf7c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x15bf7cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
label_15bf80:
    // 0x15bf80: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x15bf80u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
label_15bf84:
    // 0x15bf84: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15bf84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_15bf88:
    // 0x15bf88: 0xd8e30000  lqc2        $vf3, 0x0($a3)
    ctx->pc = 0x15bf88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_15bf8c:
    // 0x15bf8c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x15bf8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_15bf90:
    // 0x15bf90: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x15bf90u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x15bf94u;
}
