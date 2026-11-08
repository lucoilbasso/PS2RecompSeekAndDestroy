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

// Function: BMotionVectorTwoPointPeriodBezier__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a2cb8 - 0x1a2d88
void BMotionVectorTwoPointPeriodBezier__FP11BMotionCtrlP11BMotionWorki_0x1a2cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionVectorTwoPointPeriodBezier__FP11BMotionCtrlP11BMotionWorki_0x1a2cb8");
#endif

    switch (ctx->pc) {
        case 0x1a2cb8u: goto label_1a2cb8;
        case 0x1a2cbcu: goto label_1a2cbc;
        case 0x1a2cc0u: goto label_1a2cc0;
        case 0x1a2cc4u: goto label_1a2cc4;
        case 0x1a2cc8u: goto label_1a2cc8;
        case 0x1a2cccu: goto label_1a2ccc;
        case 0x1a2cd0u: goto label_1a2cd0;
        case 0x1a2cd4u: goto label_1a2cd4;
        case 0x1a2cd8u: goto label_1a2cd8;
        case 0x1a2cdcu: goto label_1a2cdc;
        case 0x1a2ce0u: goto label_1a2ce0;
        case 0x1a2ce4u: goto label_1a2ce4;
        case 0x1a2ce8u: goto label_1a2ce8;
        case 0x1a2cecu: goto label_1a2cec;
        case 0x1a2cf0u: goto label_1a2cf0;
        case 0x1a2cf4u: goto label_1a2cf4;
        case 0x1a2cf8u: goto label_1a2cf8;
        case 0x1a2cfcu: goto label_1a2cfc;
        case 0x1a2d00u: goto label_1a2d00;
        case 0x1a2d04u: goto label_1a2d04;
        case 0x1a2d08u: goto label_1a2d08;
        case 0x1a2d0cu: goto label_1a2d0c;
        case 0x1a2d10u: goto label_1a2d10;
        case 0x1a2d14u: goto label_1a2d14;
        case 0x1a2d18u: goto label_1a2d18;
        case 0x1a2d1cu: goto label_1a2d1c;
        case 0x1a2d20u: goto label_1a2d20;
        case 0x1a2d24u: goto label_1a2d24;
        case 0x1a2d28u: goto label_1a2d28;
        case 0x1a2d2cu: goto label_1a2d2c;
        case 0x1a2d30u: goto label_1a2d30;
        case 0x1a2d34u: goto label_1a2d34;
        case 0x1a2d38u: goto label_1a2d38;
        case 0x1a2d3cu: goto label_1a2d3c;
        case 0x1a2d40u: goto label_1a2d40;
        case 0x1a2d44u: goto label_1a2d44;
        case 0x1a2d48u: goto label_1a2d48;
        case 0x1a2d4cu: goto label_1a2d4c;
        case 0x1a2d50u: goto label_1a2d50;
        case 0x1a2d54u: goto label_1a2d54;
        case 0x1a2d58u: goto label_1a2d58;
        case 0x1a2d5cu: goto label_1a2d5c;
        case 0x1a2d60u: goto label_1a2d60;
        case 0x1a2d64u: goto label_1a2d64;
        case 0x1a2d68u: goto label_1a2d68;
        case 0x1a2d6cu: goto label_1a2d6c;
        case 0x1a2d70u: goto label_1a2d70;
        case 0x1a2d74u: goto label_1a2d74;
        case 0x1a2d78u: goto label_1a2d78;
        case 0x1a2d7cu: goto label_1a2d7c;
        case 0x1a2d80u: goto label_1a2d80;
        case 0x1a2d84u: goto label_1a2d84;
        default: break;
    }

    ctx->pc = 0x1a2cb8u;

label_1a2cb8:
    // 0x1a2cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a2cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a2cbc:
    // 0x1a2cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a2cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a2cc0:
    // 0x1a2cc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a2cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a2cc4:
    // 0x1a2cc4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a2cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a2cc8:
    // 0x1a2cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a2cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a2ccc:
    // 0x1a2ccc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1a2cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a2cd0:
    // 0x1a2cd0: 0x8ca200e0  lw          $v0, 0xE0($a1)
    ctx->pc = 0x1a2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
label_1a2cd4:
    // 0x1a2cd4: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1a2cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a2cd8:
    // 0x1a2cd8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a2cdc:
    if (ctx->pc == 0x1A2CDCu) {
        ctx->pc = 0x1A2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CD8u;
        // 0x1a2cdc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CE0u;
        goto label_1a2ce0;
    }
    ctx->pc = 0x1A2CD8u;
    {
        const bool branch_taken_0x1a2cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CD8u;
        // 0x1a2cdc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2cd8) {
            ctx->pc = 0x1A2CECu;
            goto label_1a2cec;
        }
    }
    ctx->pc = 0x1A2CE0u;
label_1a2ce0:
    // 0x1a2ce0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1a2ce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1a2ce4:
    // 0x1a2ce4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a2ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a2ce8:
    // 0x1a2ce8: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1a2ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1a2cec:
    // 0x1a2cec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2cecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2cf0:
    // 0x1a2cf0: 0x4c20021  bltzl       $a2, . + 4 + (0x21 << 2)
label_1a2cf4:
    if (ctx->pc == 0x1A2CF4u) {
        ctx->pc = 0x1A2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2CF0u;
        // 0x1a2cf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2CF8u;
        goto label_1a2cf8;
    }
    ctx->pc = 0x1A2CF0u;
    {
        const bool branch_taken_0x1a2cf0 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1a2cf0) {
            ctx->pc = 0x1A2CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2CF0u;
            // 0x1a2cf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2D78u;
            goto label_1a2d78;
        }
    }
    ctx->pc = 0x1A2CF8u;
label_1a2cf8:
    // 0x1a2cf8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1a2cfc:
    if (ctx->pc == 0x1A2CFCu) {
        ctx->pc = 0x1A2D00u;
        goto label_1a2d00;
    }
    ctx->pc = 0x1A2CF8u;
    {
        const bool branch_taken_0x1a2cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2cf8) {
            ctx->pc = 0x1A2D68u;
            goto label_1a2d68;
        }
    }
    ctx->pc = 0x1A2D00u;
label_1a2d00:
    // 0x1a2d00: 0xc06a67a  jal         func_1A99E8
label_1a2d04:
    if (ctx->pc == 0x1A2D04u) {
        ctx->pc = 0x1A2D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D00u;
        // 0x1a2d04: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D08u;
        goto label_1a2d08;
    }
    ctx->pc = 0x1A2D00u;
    SET_GPR_U32(ctx, 31, 0x1A2D08u);
    ctx->pc = 0x1A2D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2D00u;
    // 0x1a2d04: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A99E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A99E8u, 0x1A2D00u, 0x1A2D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D08u;
label_1a2d08:
    // 0x1a2d08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a2d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a2d0c:
    // 0x1a2d0c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1a2d10:
    if (ctx->pc == 0x1A2D10u) {
        ctx->pc = 0x1A2D14u;
        goto label_1a2d14;
    }
    ctx->pc = 0x1A2D0Cu;
    {
        const bool branch_taken_0x1a2d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d0c) {
            ctx->pc = 0x1A2D70u;
            goto label_1a2d70;
        }
    }
    ctx->pc = 0x1A2D14u;
label_1a2d14:
    // 0x1a2d14: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a2d18:
    // 0x1a2d18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a2d1c:
    if (ctx->pc == 0x1A2D1Cu) {
        ctx->pc = 0x1A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D18u;
        // 0x1a2d1c: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D20u;
        goto label_1a2d20;
    }
    ctx->pc = 0x1A2D18u;
    {
        const bool branch_taken_0x1a2d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D18u;
        // 0x1a2d1c: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d18) {
            ctx->pc = 0x1A2D38u;
            goto label_1a2d38;
        }
    }
    ctx->pc = 0x1A2D20u;
label_1a2d20:
    // 0x1a2d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2d24:
    // 0x1a2d24: 0x40f809  jalr        $v0
label_1a2d28:
    if (ctx->pc == 0x1A2D28u) {
        ctx->pc = 0x1A2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D24u;
        // 0x1a2d28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D2Cu;
        goto label_1a2d2c;
    }
    ctx->pc = 0x1A2D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2D2Cu);
        ctx->pc = 0x1A2D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D24u;
        // 0x1a2d28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D24u, 0x1A2D2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2D2Cu;
label_1a2d2c:
    // 0x1a2d2c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a2d30:
    if (ctx->pc == 0x1A2D30u) {
        ctx->pc = 0x1A2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D2Cu;
        // 0x1a2d30: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D34u;
        goto label_1a2d34;
    }
    ctx->pc = 0x1A2D2Cu;
    {
        const bool branch_taken_0x1a2d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D2Cu;
        // 0x1a2d30: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2d2c) {
            ctx->pc = 0x1A2D50u;
            goto label_1a2d50;
        }
    }
    ctx->pc = 0x1A2D34u;
label_1a2d34:
    // 0x1a2d34: 0x0  nop
    ctx->pc = 0x1a2d34u;
    // NOP
label_1a2d38:
    // 0x1a2d38: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a2d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a2d3c:
    // 0x1a2d3c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a2d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a2d40:
    // 0x1a2d40: 0x24a59268  addiu       $a1, $a1, -0x6D98
    ctx->pc = 0x1a2d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939240));
label_1a2d44:
    // 0x1a2d44: 0xc068186  jal         func_1A0618
label_1a2d48:
    if (ctx->pc == 0x1A2D48u) {
        ctx->pc = 0x1A2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D44u;
        // 0x1a2d48: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D4Cu;
        goto label_1a2d4c;
    }
    ctx->pc = 0x1A2D44u;
    SET_GPR_U32(ctx, 31, 0x1A2D4Cu);
    ctx->pc = 0x1A2D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2D44u;
    // 0x1a2d48: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2D44u, 0x1A2D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D4Cu;
label_1a2d4c:
    // 0x1a2d4c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a2d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a2d50:
    // 0x1a2d50: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a2d54:
    if (ctx->pc == 0x1A2D54u) {
        ctx->pc = 0x1A2D58u;
        goto label_1a2d58;
    }
    ctx->pc = 0x1A2D50u;
    {
        const bool branch_taken_0x1a2d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d50) {
            ctx->pc = 0x1A2D70u;
            goto label_1a2d70;
        }
    }
    ctx->pc = 0x1A2D58u;
label_1a2d58:
    // 0x1a2d58: 0x40f809  jalr        $v0
label_1a2d5c:
    if (ctx->pc == 0x1A2D5Cu) {
        ctx->pc = 0x1A2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D58u;
        // 0x1a2d5c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D60u;
        goto label_1a2d60;
    }
    ctx->pc = 0x1A2D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2D60u);
        ctx->pc = 0x1A2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D58u;
        // 0x1a2d5c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D58u, 0x1A2D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2D60u;
label_1a2d60:
    // 0x1a2d60: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a2d64:
    if (ctx->pc == 0x1A2D64u) {
        ctx->pc = 0x1A2D68u;
        goto label_1a2d68;
    }
    ctx->pc = 0x1A2D60u;
    {
        const bool branch_taken_0x1a2d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2d60) {
            ctx->pc = 0x1A2D70u;
            goto label_1a2d70;
        }
    }
    ctx->pc = 0x1A2D68u;
label_1a2d68:
    // 0x1a2d68: 0xc06881e  jal         func_1A2078
label_1a2d6c:
    if (ctx->pc == 0x1A2D6Cu) {
        ctx->pc = 0x1A2D70u;
        goto label_1a2d70;
    }
    ctx->pc = 0x1A2D68u;
    SET_GPR_U32(ctx, 31, 0x1A2D70u);
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A2D68u, 0x1A2D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D70u;
label_1a2d70:
    // 0x1a2d70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a2d70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2d74:
    // 0x1a2d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a2d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2d78:
    // 0x1a2d78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a2d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a2d7c:
    // 0x1a2d7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a2d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2d80:
    // 0x1a2d80: 0x3e00008  jr          $ra
label_1a2d84:
    if (ctx->pc == 0x1A2D84u) {
        ctx->pc = 0x1A2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D80u;
        // 0x1a2d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D88u;
        goto label_fallthrough_0x1a2d80;
    }
    ctx->pc = 0x1A2D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D80u;
        // 0x1a2d84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a2d80:
    ctx->pc = 0x1A2D88u;
}
