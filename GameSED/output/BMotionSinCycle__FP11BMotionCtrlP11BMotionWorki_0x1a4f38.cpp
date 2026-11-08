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

// Function: BMotionSinCycle__FP11BMotionCtrlP11BMotionWorki
// Address: 0x1a4f38 - 0x1a5004
void BMotionSinCycle__FP11BMotionCtrlP11BMotionWorki_0x1a4f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BMotionSinCycle__FP11BMotionCtrlP11BMotionWorki_0x1a4f38");
#endif

    switch (ctx->pc) {
        case 0x1a4f38u: goto label_1a4f38;
        case 0x1a4f3cu: goto label_1a4f3c;
        case 0x1a4f40u: goto label_1a4f40;
        case 0x1a4f44u: goto label_1a4f44;
        case 0x1a4f48u: goto label_1a4f48;
        case 0x1a4f4cu: goto label_1a4f4c;
        case 0x1a4f50u: goto label_1a4f50;
        case 0x1a4f54u: goto label_1a4f54;
        case 0x1a4f58u: goto label_1a4f58;
        case 0x1a4f5cu: goto label_1a4f5c;
        case 0x1a4f60u: goto label_1a4f60;
        case 0x1a4f64u: goto label_1a4f64;
        case 0x1a4f68u: goto label_1a4f68;
        case 0x1a4f6cu: goto label_1a4f6c;
        case 0x1a4f70u: goto label_1a4f70;
        case 0x1a4f74u: goto label_1a4f74;
        case 0x1a4f78u: goto label_1a4f78;
        case 0x1a4f7cu: goto label_1a4f7c;
        case 0x1a4f80u: goto label_1a4f80;
        case 0x1a4f84u: goto label_1a4f84;
        case 0x1a4f88u: goto label_1a4f88;
        case 0x1a4f8cu: goto label_1a4f8c;
        case 0x1a4f90u: goto label_1a4f90;
        case 0x1a4f94u: goto label_1a4f94;
        case 0x1a4f98u: goto label_1a4f98;
        case 0x1a4f9cu: goto label_1a4f9c;
        case 0x1a4fa0u: goto label_1a4fa0;
        case 0x1a4fa4u: goto label_1a4fa4;
        case 0x1a4fa8u: goto label_1a4fa8;
        case 0x1a4facu: goto label_1a4fac;
        case 0x1a4fb0u: goto label_1a4fb0;
        case 0x1a4fb4u: goto label_1a4fb4;
        case 0x1a4fb8u: goto label_1a4fb8;
        case 0x1a4fbcu: goto label_1a4fbc;
        case 0x1a4fc0u: goto label_1a4fc0;
        case 0x1a4fc4u: goto label_1a4fc4;
        case 0x1a4fc8u: goto label_1a4fc8;
        case 0x1a4fccu: goto label_1a4fcc;
        case 0x1a4fd0u: goto label_1a4fd0;
        case 0x1a4fd4u: goto label_1a4fd4;
        case 0x1a4fd8u: goto label_1a4fd8;
        case 0x1a4fdcu: goto label_1a4fdc;
        case 0x1a4fe0u: goto label_1a4fe0;
        case 0x1a4fe4u: goto label_1a4fe4;
        case 0x1a4fe8u: goto label_1a4fe8;
        case 0x1a4fecu: goto label_1a4fec;
        case 0x1a4ff0u: goto label_1a4ff0;
        case 0x1a4ff4u: goto label_1a4ff4;
        case 0x1a4ff8u: goto label_1a4ff8;
        case 0x1a4ffcu: goto label_1a4ffc;
        case 0x1a5000u: goto label_1a5000;
        default: break;
    }

    ctx->pc = 0x1a4f38u;

label_1a4f38:
    // 0x1a4f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4f3c:
    // 0x1a4f3c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a4f3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f40:
    // 0x1a4f40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4f44:
    // 0x1a4f44: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a4f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f48:
    // 0x1a4f48: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a4f48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a4f4c:
    // 0x1a4f4c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1a4f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f50:
    // 0x1a4f50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a4f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1a4f54:
    // 0x1a4f54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a4f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a4f58:
    // 0x1a4f58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a4f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a4f5c:
    // 0x1a4f5c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1a4f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1a4f60:
    // 0x1a4f60: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1a4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a4f64:
    // 0x1a4f64: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1a4f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a4f68:
    // 0x1a4f68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a4f6c:
    // 0x1a4f6c: 0xc4e20020  lwc1        $f2, 0x20($a3)
    ctx->pc = 0x1a4f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a4f70:
    // 0x1a4f70: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a4f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a4f74:
    // 0x1a4f74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1a4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a4f78:
    // 0x1a4f78: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1a4f78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1a4f7c:
    // 0x1a4f7c: 0x3c012022  lui         $at, 0x2022
    ctx->pc = 0x1a4f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8226 << 16));
label_1a4f80:
    // 0x1a4f80: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x1a4f80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
label_1a4f84:
    // 0x1a4f84: 0xc420f640  lwc1        $f0, -0x9C0($at)
    ctx->pc = 0x1a4f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294964800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4f88:
    // 0x1a4f88: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4f8c:
    // 0x1a4f8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1a4f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a4f90:
    // 0x1a4f90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a4f94:
    if (ctx->pc == 0x1A4F94u) {
        ctx->pc = 0x1A4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F90u;
        // 0x1a4f94: 0x46020b00  add.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F98u;
        goto label_1a4f98;
    }
    ctx->pc = 0x1A4F90u;
    {
        const bool branch_taken_0x1a4f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F90u;
        // 0x1a4f94: 0x46020b00  add.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f90) {
            ctx->pc = 0x1A4FA8u;
            goto label_1a4fa8;
        }
    }
    ctx->pc = 0x1A4F98u;
label_1a4f98:
    // 0x1a4f98: 0x40f809  jalr        $v0
label_1a4f9c:
    if (ctx->pc == 0x1A4F9Cu) {
        ctx->pc = 0x1A4FA0u;
        goto label_1a4fa0;
    }
    ctx->pc = 0x1A4F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4FA0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F98u, 0x1A4FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4FA0u;
label_1a4fa0:
    // 0x1a4fa0: 0x1000000d  b           . + 4 + (0xD << 2)
label_1a4fa4:
    if (ctx->pc == 0x1A4FA4u) {
        ctx->pc = 0x1A4FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FA0u;
        // 0x1a4fa4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FA8u;
        goto label_1a4fa8;
    }
    ctx->pc = 0x1A4FA0u;
    {
        const bool branch_taken_0x1a4fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FA0u;
        // 0x1a4fa4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fa0) {
            ctx->pc = 0x1A4FD8u;
            goto label_1a4fd8;
        }
    }
    ctx->pc = 0x1A4FA8u;
label_1a4fa8:
    // 0x1a4fa8: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x1a4fa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_1a4fac:
    // 0x1a4fac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1a4fb0:
    if (ctx->pc == 0x1A4FB0u) {
        ctx->pc = 0x1A4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FACu;
        // 0x1a4fb0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FB4u;
        goto label_1a4fb4;
    }
    ctx->pc = 0x1A4FACu;
    {
        const bool branch_taken_0x1a4fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FACu;
        // 0x1a4fb0: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fac) {
            ctx->pc = 0x1A4FC8u;
            goto label_1a4fc8;
        }
    }
    ctx->pc = 0x1A4FB4u;
label_1a4fb4:
    // 0x1a4fb4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1a4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a4fb8:
    // 0x1a4fb8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a4fb8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1a4fbc:
    // 0x1a4fbc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1a4fc0:
    if (ctx->pc == 0x1A4FC0u) {
        ctx->pc = 0x1A4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FBCu;
        // 0x1a4fc0: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FC4u;
        goto label_1a4fc4;
    }
    ctx->pc = 0x1A4FBCu;
    {
        const bool branch_taken_0x1a4fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FBCu;
        // 0x1a4fc0: 0xe44c0000  swc1        $f12, 0x0($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fbc) {
            ctx->pc = 0x1A4FD8u;
            goto label_1a4fd8;
        }
    }
    ctx->pc = 0x1A4FC4u;
label_1a4fc4:
    // 0x1a4fc4: 0x0  nop
    ctx->pc = 0x1a4fc4u;
    // NOP
label_1a4fc8:
    // 0x1a4fc8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4fcc:
    // 0x1a4fcc: 0x24a59238  addiu       $a1, $a1, -0x6DC8
    ctx->pc = 0x1a4fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939192));
label_1a4fd0:
    // 0x1a4fd0: 0xc068186  jal         func_1A0618
label_1a4fd4:
    if (ctx->pc == 0x1A4FD4u) {
        ctx->pc = 0x1A4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FD0u;
        // 0x1a4fd4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FD8u;
        goto label_1a4fd8;
    }
    ctx->pc = 0x1A4FD0u;
    SET_GPR_U32(ctx, 31, 0x1A4FD8u);
    ctx->pc = 0x1A4FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4FD0u;
    // 0x1a4fd4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A4FD0u, 0x1A4FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FD8u;
label_1a4fd8:
    // 0x1a4fd8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a4fdc:
    // 0x1a4fdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1a4fe0:
    if (ctx->pc == 0x1A4FE0u) {
        ctx->pc = 0x1A4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FDCu;
        // 0x1a4fe0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FE4u;
        goto label_1a4fe4;
    }
    ctx->pc = 0x1A4FDCu;
    {
        const bool branch_taken_0x1a4fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FDCu;
        // 0x1a4fe0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fdc) {
            ctx->pc = 0x1A4FF0u;
            goto label_1a4ff0;
        }
    }
    ctx->pc = 0x1A4FE4u;
label_1a4fe4:
    // 0x1a4fe4: 0x40f809  jalr        $v0
label_1a4fe8:
    if (ctx->pc == 0x1A4FE8u) {
        ctx->pc = 0x1A4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FE4u;
        // 0x1a4fe8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4FECu;
        goto label_1a4fec;
    }
    ctx->pc = 0x1A4FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4FECu);
        ctx->pc = 0x1A4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FE4u;
        // 0x1a4fe8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4FE4u, 0x1A4FECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4FECu;
label_1a4fec:
    // 0x1a4fec: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1a4fecu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1a4ff0:
    // 0x1a4ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4ff4:
    // 0x1a4ff4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a4ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4ff8:
    // 0x1a4ff8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1a4ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4ffc:
    // 0x1a4ffc: 0x3e00008  jr          $ra
label_1a5000:
    if (ctx->pc == 0x1A5000u) {
        ctx->pc = 0x1A5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FFCu;
        // 0x1a5000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5004u;
        goto label_fallthrough_0x1a4ffc;
    }
    ctx->pc = 0x1A4FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4FFCu;
        // 0x1a5000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4ffc:
    ctx->pc = 0x1A5004u;
}
