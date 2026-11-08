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

// Function: __swsetup
// Address: 0x1d2c88 - 0x1d2d94
void ps2___swsetup_0x1d2c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___swsetup_0x1d2c88");
#endif

    switch (ctx->pc) {
        case 0x1d2cc8u: goto label_1d2cc8;
        case 0x1d2d0cu: goto label_1d2d0c;
        case 0x1d2d48u: goto label_1d2d48;
        default: break;
    }

    ctx->pc = 0x1d2c88u;

    // 0x1d2c88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d2c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d2c90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d2c90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d2c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d2c98: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1d2c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1d2c9c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2C9Cu;
    {
        const bool branch_taken_0x1d2c9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2c9c) {
            ctx->pc = 0x1D2CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2C9Cu;
            // 0x1d2ca0: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2CB8u;
            goto label_1d2cb8;
        }
    }
    ctx->pc = 0x1D2CA4u;
    // 0x1d2ca4: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1d2ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1d2ca8: 0x8c43e1b0  lw          $v1, -0x1E50($v0)
    ctx->pc = 0x1d2ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x24E1B0u));
    // 0x1d2cac: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1d2cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x1d2cb0: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1d2cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1d2cb4: 0x0  nop
    ctx->pc = 0x1d2cb4u;
    // NOP
label_1d2cb8:
    // 0x1d2cb8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2CB8u;
    {
        const bool branch_taken_0x1d2cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2cb8) {
            ctx->pc = 0x1D2CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2CB8u;
            // 0x1d2cbc: 0x9604000c  lhu         $a0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2CCCu;
            goto label_1d2ccc;
        }
    }
    ctx->pc = 0x1D2CC0u;
    // 0x1d2cc0: 0xc075156  jal         func_1D4558
    ctx->pc = 0x1D2CC0u;
    SET_GPR_U32(ctx, 31, 0x1D2CC8u);
    ctx->pc = 0x1D2CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2CC0u;
    // 0x1d2cc4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4558u, 0x1D2CC0u, 0x1D2CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2CC8u;
label_1d2cc8:
    // 0x1d2cc8: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x1d2cc8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1d2ccc:
    // 0x1d2ccc: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x1d2cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x1d2cd0: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D2CD0u;
    {
        const bool branch_taken_0x1d2cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2cd0) {
            ctx->pc = 0x1D2CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2CD0u;
            // 0x1d2cd4: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2D38u;
            goto label_1d2d38;
        }
    }
    ctx->pc = 0x1D2CD8u;
    // 0x1d2cd8: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x1d2cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x1d2cdc: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D2CDCu;
    {
        const bool branch_taken_0x1d2cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CDCu;
        // 0x1d2ce0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cdc) {
            ctx->pc = 0x1D2D84u;
            goto label_1d2d84;
        }
    }
    ctx->pc = 0x1D2CE4u;
    // 0x1d2ce4: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x1d2ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1d2ce8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D2CE8u;
    {
        const bool branch_taken_0x1d2ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2ce8) {
            ctx->pc = 0x1D2CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2CE8u;
            // 0x1d2cec: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2D30u;
            goto label_1d2d30;
        }
    }
    ctx->pc = 0x1D2CF0u;
    // 0x1d2cf0: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1d2cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d2cf4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2CF4u;
    {
        const bool branch_taken_0x1d2cf4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2CF4u;
        // 0x1d2cf8: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2cf4) {
            ctx->pc = 0x1D2D14u;
            goto label_1d2d14;
        }
    }
    ctx->pc = 0x1D2CFCu;
    // 0x1d2cfc: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2CFCu;
    {
        const bool branch_taken_0x1d2cfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d2cfc) {
            ctx->pc = 0x1D2D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2CFCu;
            // 0x1d2d00: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2D14u;
            goto label_1d2d14;
        }
    }
    ctx->pc = 0x1D2D04u;
    // 0x1d2d04: 0xc07517a  jal         func_1D45E8
    ctx->pc = 0x1D2D04u;
    SET_GPR_U32(ctx, 31, 0x1D2D0Cu);
    ctx->pc = 0x1D2D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D04u;
    // 0x1d2d08: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45E8u, 0x1D2D04u, 0x1D2D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D0Cu;
label_1d2d0c:
    // 0x1d2d0c: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x1d2d0cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2d10: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1d2d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1d2d14:
    // 0x1d2d14: 0x2402ffdb  addiu       $v0, $zero, -0x25
    ctx->pc = 0x1d2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x1d2d18: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1d2d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d2d1c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1d2d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1d2d20: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1d2d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1d2d24: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d2d24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d2d28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2d2c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x1d2d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_1d2d30:
    // 0x1d2d30: 0x34820008  ori         $v0, $a0, 0x8
    ctx->pc = 0x1d2d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x1d2d34: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d2d34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_1d2d38:
    // 0x1d2d38: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2D38u;
    {
        const bool branch_taken_0x1d2d38 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2d38) {
            ctx->pc = 0x1D2D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2D38u;
            // 0x1d2d3c: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2D4Cu;
            goto label_1d2d4c;
        }
    }
    ctx->pc = 0x1D2D40u;
    // 0x1d2d40: 0xc0753ec  jal         func_1D4FB0
    ctx->pc = 0x1D2D40u;
    SET_GPR_U32(ctx, 31, 0x1D2D48u);
    ctx->pc = 0x1D2D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2D40u;
    // 0x1d2d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4FB0u, 0x1D2D40u, 0x1D2D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2D48u;
label_1d2d48:
    // 0x1d2d48: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d2d48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1d2d4c:
    // 0x1d2d4c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1d2d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d2d50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D2D50u;
    {
        const bool branch_taken_0x1d2d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D50u;
        // 0x1d2d54: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d50) {
            ctx->pc = 0x1D2D70u;
            goto label_1d2d70;
        }
    }
    ctx->pc = 0x1D2D58u;
    // 0x1d2d58: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1d2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d2d5c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d2d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d2d60: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1d2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1d2d64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D2D64u;
    {
        const bool branch_taken_0x1d2d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D64u;
        // 0x1d2d68: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d64) {
            ctx->pc = 0x1D2D80u;
            goto label_1d2d80;
        }
    }
    ctx->pc = 0x1D2D6Cu;
    // 0x1d2d6c: 0x0  nop
    ctx->pc = 0x1d2d6cu;
    // NOP
label_1d2d70:
    // 0x1d2d70: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2D70u;
    {
        const bool branch_taken_0x1d2d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D70u;
        // 0x1d2d74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2d70) {
            ctx->pc = 0x1D2D7Cu;
            goto label_1d2d7c;
        }
    }
    ctx->pc = 0x1D2D78u;
    // 0x1d2d78: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d2d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1d2d7c:
    // 0x1d2d7c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1d2d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_1d2d80:
    // 0x1d2d80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d2d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2d84:
    // 0x1d2d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d2d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2d88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d2d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d2d8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D8Cu;
        // 0x1d2d90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2D8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2D94u;
}
