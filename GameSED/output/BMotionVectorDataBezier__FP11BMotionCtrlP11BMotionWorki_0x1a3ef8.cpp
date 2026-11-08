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

// Function: BMotionVectorDataBezier__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a3ef8 - 0x1a3fc8
void BMotionVectorDataBezier__FP11BMotionCtrlP11BMotionWorki_0x1a3ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionVectorDataBezier__FP11BMotionCtrlP11BMotionWorki_0x1a3ef8");
#endif

    switch (ctx->pc) {
        case 0x1a3ef8u: goto label_1a3ef8;
        case 0x1a3efcu: goto label_1a3efc;
        case 0x1a3f00u: goto label_1a3f00;
        case 0x1a3f04u: goto label_1a3f04;
        case 0x1a3f08u: goto label_1a3f08;
        case 0x1a3f0cu: goto label_1a3f0c;
        case 0x1a3f10u: goto label_1a3f10;
        case 0x1a3f14u: goto label_1a3f14;
        case 0x1a3f18u: goto label_1a3f18;
        case 0x1a3f1cu: goto label_1a3f1c;
        case 0x1a3f20u: goto label_1a3f20;
        case 0x1a3f24u: goto label_1a3f24;
        case 0x1a3f28u: goto label_1a3f28;
        case 0x1a3f2cu: goto label_1a3f2c;
        case 0x1a3f30u: goto label_1a3f30;
        case 0x1a3f34u: goto label_1a3f34;
        case 0x1a3f38u: goto label_1a3f38;
        case 0x1a3f3cu: goto label_1a3f3c;
        case 0x1a3f40u: goto label_1a3f40;
        case 0x1a3f44u: goto label_1a3f44;
        case 0x1a3f48u: goto label_1a3f48;
        case 0x1a3f4cu: goto label_1a3f4c;
        case 0x1a3f50u: goto label_1a3f50;
        case 0x1a3f54u: goto label_1a3f54;
        case 0x1a3f58u: goto label_1a3f58;
        case 0x1a3f5cu: goto label_1a3f5c;
        case 0x1a3f60u: goto label_1a3f60;
        case 0x1a3f64u: goto label_1a3f64;
        case 0x1a3f68u: goto label_1a3f68;
        case 0x1a3f6cu: goto label_1a3f6c;
        case 0x1a3f70u: goto label_1a3f70;
        case 0x1a3f74u: goto label_1a3f74;
        case 0x1a3f78u: goto label_1a3f78;
        case 0x1a3f7cu: goto label_1a3f7c;
        case 0x1a3f80u: goto label_1a3f80;
        case 0x1a3f84u: goto label_1a3f84;
        case 0x1a3f88u: goto label_1a3f88;
        case 0x1a3f8cu: goto label_1a3f8c;
        case 0x1a3f90u: goto label_1a3f90;
        case 0x1a3f94u: goto label_1a3f94;
        case 0x1a3f98u: goto label_1a3f98;
        case 0x1a3f9cu: goto label_1a3f9c;
        case 0x1a3fa0u: goto label_1a3fa0;
        case 0x1a3fa4u: goto label_1a3fa4;
        case 0x1a3fa8u: goto label_1a3fa8;
        case 0x1a3facu: goto label_1a3fac;
        case 0x1a3fb0u: goto label_1a3fb0;
        case 0x1a3fb4u: goto label_1a3fb4;
        case 0x1a3fb8u: goto label_1a3fb8;
        case 0x1a3fbcu: goto label_1a3fbc;
        case 0x1a3fc0u: goto label_1a3fc0;
        case 0x1a3fc4u: goto label_1a3fc4;
        default: break;
    }

    ctx->pc = 0x1a3ef8u;

label_1a3ef8:
    // 0x1a3ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a3efc:
    // 0x1a3efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a3f00:
    // 0x1a3f00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a3f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a3f04:
    // 0x1a3f04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a3f04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f08:
    // 0x1a3f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a3f0c:
    // 0x1a3f0c: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x1a3f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1a3f10:
    // 0x1a3f10: 0x8ca200e0  lw          $v0, 0xE0($a1)
    ctx->pc = 0x1a3f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 224)));
label_1a3f14:
    // 0x1a3f14: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1a3f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a3f18:
    // 0x1a3f18: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1a3f1c:
    if (ctx->pc == 0x1A3F1Cu) {
        ctx->pc = 0x1A3F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F18u;
        // 0x1a3f1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F20u;
        goto label_1a3f20;
    }
    ctx->pc = 0x1A3F18u;
    {
        const bool branch_taken_0x1a3f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F18u;
        // 0x1a3f1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f18) {
            ctx->pc = 0x1A3F2Cu;
            goto label_1a3f2c;
        }
    }
    ctx->pc = 0x1A3F20u;
label_1a3f20:
    // 0x1a3f20: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1a3f20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1a3f24:
    // 0x1a3f24: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a3f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_1a3f28:
    // 0x1a3f28: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1a3f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1a3f2c:
    // 0x1a3f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3f30:
    // 0x1a3f30: 0x4c20021  bltzl       $a2, . + 4 + (0x21 << 2)
label_1a3f34:
    if (ctx->pc == 0x1A3F34u) {
        ctx->pc = 0x1A3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F30u;
        // 0x1a3f34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F38u;
        goto label_1a3f38;
    }
    ctx->pc = 0x1A3F30u;
    {
        const bool branch_taken_0x1a3f30 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1a3f30) {
            ctx->pc = 0x1A3F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3F30u;
            // 0x1a3f34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3FB8u;
            goto label_1a3fb8;
        }
    }
    ctx->pc = 0x1A3F38u;
label_1a3f38:
    // 0x1a3f38: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1a3f3c:
    if (ctx->pc == 0x1A3F3Cu) {
        ctx->pc = 0x1A3F40u;
        goto label_1a3f40;
    }
    ctx->pc = 0x1A3F38u;
    {
        const bool branch_taken_0x1a3f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f38) {
            ctx->pc = 0x1A3FA8u;
            goto label_1a3fa8;
        }
    }
    ctx->pc = 0x1A3F40u;
label_1a3f40:
    // 0x1a3f40: 0xc06a67a  jal         func_1A99E8
label_1a3f44:
    if (ctx->pc == 0x1A3F44u) {
        ctx->pc = 0x1A3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F40u;
        // 0x1a3f44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F48u;
        goto label_1a3f48;
    }
    ctx->pc = 0x1A3F40u;
    SET_GPR_U32(ctx, 31, 0x1A3F48u);
    ctx->pc = 0x1A3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F40u;
    // 0x1a3f44: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A99E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A99E8u, 0x1A3F40u, 0x1A3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F48u;
label_1a3f48:
    // 0x1a3f48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a3f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a3f4c:
    // 0x1a3f4c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1a3f50:
    if (ctx->pc == 0x1A3F50u) {
        ctx->pc = 0x1A3F54u;
        goto label_1a3f54;
    }
    ctx->pc = 0x1A3F4Cu;
    {
        const bool branch_taken_0x1a3f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f4c) {
            ctx->pc = 0x1A3FB0u;
            goto label_1a3fb0;
        }
    }
    ctx->pc = 0x1A3F54u;
label_1a3f54:
    // 0x1a3f54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a3f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a3f58:
    // 0x1a3f58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a3f5c:
    if (ctx->pc == 0x1A3F5Cu) {
        ctx->pc = 0x1A3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F58u;
        // 0x1a3f5c: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F60u;
        goto label_1a3f60;
    }
    ctx->pc = 0x1A3F58u;
    {
        const bool branch_taken_0x1a3f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F58u;
        // 0x1a3f5c: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f58) {
            ctx->pc = 0x1A3F78u;
            goto label_1a3f78;
        }
    }
    ctx->pc = 0x1A3F60u;
label_1a3f60:
    // 0x1a3f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a3f64:
    // 0x1a3f64: 0x40f809  jalr        $v0
label_1a3f68:
    if (ctx->pc == 0x1A3F68u) {
        ctx->pc = 0x1A3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F64u;
        // 0x1a3f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F6Cu;
        goto label_1a3f6c;
    }
    ctx->pc = 0x1A3F64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3F6Cu);
        ctx->pc = 0x1A3F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F64u;
        // 0x1a3f68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3F64u, 0x1A3F6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3F6Cu;
label_1a3f6c:
    // 0x1a3f6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1a3f70:
    if (ctx->pc == 0x1A3F70u) {
        ctx->pc = 0x1A3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F6Cu;
        // 0x1a3f70: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F74u;
        goto label_1a3f74;
    }
    ctx->pc = 0x1A3F6Cu;
    {
        const bool branch_taken_0x1a3f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F6Cu;
        // 0x1a3f70: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3f6c) {
            ctx->pc = 0x1A3F90u;
            goto label_1a3f90;
        }
    }
    ctx->pc = 0x1A3F74u;
label_1a3f74:
    // 0x1a3f74: 0x0  nop
    ctx->pc = 0x1a3f74u;
    // NOP
label_1a3f78:
    // 0x1a3f78: 0x3c050026  lui         $a1, 0x26
    ctx->pc = 0x1a3f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
label_1a3f7c:
    // 0x1a3f7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a3f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a3f80:
    // 0x1a3f80: 0x24a59268  addiu       $a1, $a1, -0x6D98
    ctx->pc = 0x1a3f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939240));
label_1a3f84:
    // 0x1a3f84: 0xc068186  jal         func_1A0618
label_1a3f88:
    if (ctx->pc == 0x1A3F88u) {
        ctx->pc = 0x1A3F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F84u;
        // 0x1a3f88: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3F8Cu;
        goto label_1a3f8c;
    }
    ctx->pc = 0x1A3F84u;
    SET_GPR_U32(ctx, 31, 0x1A3F8Cu);
    ctx->pc = 0x1A3F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3F84u;
    // 0x1a3f88: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A3F84u, 0x1A3F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3F8Cu;
label_1a3f8c:
    // 0x1a3f8c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a3f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a3f90:
    // 0x1a3f90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1a3f94:
    if (ctx->pc == 0x1A3F94u) {
        ctx->pc = 0x1A3F98u;
        goto label_1a3f98;
    }
    ctx->pc = 0x1A3F90u;
    {
        const bool branch_taken_0x1a3f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3f90) {
            ctx->pc = 0x1A3FB0u;
            goto label_1a3fb0;
        }
    }
    ctx->pc = 0x1A3F98u;
label_1a3f98:
    // 0x1a3f98: 0x40f809  jalr        $v0
label_1a3f9c:
    if (ctx->pc == 0x1A3F9Cu) {
        ctx->pc = 0x1A3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F98u;
        // 0x1a3f9c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3FA0u;
        goto label_1a3fa0;
    }
    ctx->pc = 0x1A3F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3FA0u);
        ctx->pc = 0x1A3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3F98u;
        // 0x1a3f9c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3F98u, 0x1A3FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3FA0u;
label_1a3fa0:
    // 0x1a3fa0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a3fa4:
    if (ctx->pc == 0x1A3FA4u) {
        ctx->pc = 0x1A3FA8u;
        goto label_1a3fa8;
    }
    ctx->pc = 0x1A3FA0u;
    {
        const bool branch_taken_0x1a3fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3fa0) {
            ctx->pc = 0x1A3FB0u;
            goto label_1a3fb0;
        }
    }
    ctx->pc = 0x1A3FA8u;
label_1a3fa8:
    // 0x1a3fa8: 0xc06881e  jal         func_1A2078
label_1a3fac:
    if (ctx->pc == 0x1A3FACu) {
        ctx->pc = 0x1A3FB0u;
        goto label_1a3fb0;
    }
    ctx->pc = 0x1A3FA8u;
    SET_GPR_U32(ctx, 31, 0x1A3FB0u);
    ctx->pc = 0x1A2078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2078u, 0x1A3FA8u, 0x1A3FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3FB0u;
label_1a3fb0:
    // 0x1a3fb0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a3fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3fb4:
    // 0x1a3fb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a3fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a3fb8:
    // 0x1a3fb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a3fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a3fbc:
    // 0x1a3fbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a3fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a3fc0:
    // 0x1a3fc0: 0x3e00008  jr          $ra
label_1a3fc4:
    if (ctx->pc == 0x1A3FC4u) {
        ctx->pc = 0x1A3FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FC0u;
        // 0x1a3fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3FC8u;
        goto label_fallthrough_0x1a3fc0;
    }
    ctx->pc = 0x1A3FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3FC0u;
        // 0x1a3fc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a3fc0:
    ctx->pc = 0x1A3FC8u;
}
