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

// Function: TankAdvanceProc__7ApcTank
// Address: 0x150da0 - 0x15189c
void TankAdvanceProc__7ApcTank_0x150da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TankAdvanceProc__7ApcTank_0x150da0");
#endif

    switch (ctx->pc) {
        case 0x150e00u: goto label_150e00;
        case 0x150e44u: goto label_150e44;
        case 0x150e6cu: goto label_150e6c;
        case 0x1511f4u: goto label_1511f4;
        case 0x151214u: goto label_151214;
        case 0x151250u: goto label_151250;
        case 0x151258u: goto label_151258;
        case 0x1514e8u: goto label_1514e8;
        case 0x1514f0u: goto label_1514f0;
        case 0x1516a0u: goto label_1516a0;
        case 0x1516a8u: goto label_1516a8;
        default: break;
    }

    ctx->pc = 0x150da0u;

    // 0x150da0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x150da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x150da4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x150da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150da8: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x150da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x150dac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150db0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x150db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x150db4: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x150db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x150db8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x150db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x150dbc: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x150dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x150dc0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x150dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x150dc4: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x150dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x150dc8: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x150dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x150dcc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x150dccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x150dd0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x150dd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x150dd4: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x150dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x150dd8: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x150dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x150ddc: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x150ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x150de0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x150de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x150de4: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x150de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x150de8: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x150de8u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x150dec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x150DECu;
    {
        const bool branch_taken_0x150dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x150DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150DECu;
        // 0x150df0: 0x4882b  sltu        $s1, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x150dec) {
            ctx->pc = 0x150E04u;
            goto label_150e04;
        }
    }
    ctx->pc = 0x150DF4u;
    // 0x150df4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x150df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150df8: 0xc0542ee  jal         func_150BB8
    ctx->pc = 0x150DF8u;
    SET_GPR_U32(ctx, 31, 0x150E00u);
    ctx->pc = 0x150DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150DF8u;
    // 0x150dfc: 0x26040370  addiu       $a0, $s0, 0x370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150BB8u, 0x150DF8u, 0x150E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E00u;
label_150e00:
    // 0x150e00: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x150e00u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_150e04:
    // 0x150e04: 0x8e020690  lw          $v0, 0x690($s0)
    ctx->pc = 0x150e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x150e08: 0x8c431ab0  lw          $v1, 0x1AB0($v0)
    ctx->pc = 0x150e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6832)));
    // 0x150e0c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x150E0Cu;
    {
        const bool branch_taken_0x150e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x150E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E0Cu;
        // 0x150e10: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e0c) {
            ctx->pc = 0x150E74u;
            goto label_150e74;
        }
    }
    ctx->pc = 0x150E14u;
    // 0x150e14: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x150e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x150e18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x150e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x150e1c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x150E1Cu;
    {
        const bool branch_taken_0x150e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x150e1c) {
            ctx->pc = 0x150E74u;
            goto label_150e74;
        }
    }
    ctx->pc = 0x150E24u;
    // 0x150e24: 0xc6000380  lwc1        $f0, 0x380($s0)
    ctx->pc = 0x150e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150e28: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x150e28u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x150e2c: 0xc781823c  lwc1        $f1, -0x7DC4($gp)
    ctx->pc = 0x150e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150e30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x150e30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150e34: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x150E34u;
    {
        const bool branch_taken_0x150e34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x150E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150E34u;
        // 0x150e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150e34) {
            ctx->pc = 0x150E74u;
            goto label_150e74;
        }
    }
    ctx->pc = 0x150E3Cu;
    // 0x150e3c: 0xc053dee  jal         func_14F7B8
    ctx->pc = 0x150E3Cu;
    SET_GPR_U32(ctx, 31, 0x150E44u);
    ctx->pc = 0x150E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150E3Cu;
    // 0x150e40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F7B8u, 0x150E3Cu, 0x150E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E44u;
label_150e44:
    // 0x150e44: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x150e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x150e48: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x150e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150e4c: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x150e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x150e50: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x150e50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150e54: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x150e54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150e58: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x150e58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x150e5c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x150e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x150e60: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x150e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x150e64: 0xc067a02  jal         func_19E808
    ctx->pc = 0x150E64u;
    SET_GPR_U32(ctx, 31, 0x150E6Cu);
    ctx->pc = 0x150E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150E64u;
    // 0x150e68: 0xc7ad0008  lwc1        $f13, 0x8($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19E808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E808u, 0x150E64u, 0x150E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150E6Cu;
label_150e6c:
    // 0x150e6c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x150e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150e70: 0xae02038c  sw          $v0, 0x38C($s0)
    ctx->pc = 0x150e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 908), GPR_U32(ctx, 2));
label_150e74:
    // 0x150e74: 0x50a0001b  beql        $a1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x150E74u;
    {
        const bool branch_taken_0x150e74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x150e74) {
            ctx->pc = 0x150E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150E74u;
            // 0x150e78: 0x92030576  lbu         $v1, 0x576($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1398)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150EE4u;
            goto label_150ee4;
        }
    }
    ctx->pc = 0x150E7Cu;
    // 0x150e7c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x150e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x150e80: 0x8e03038c  lw          $v1, 0x38C($s0)
    ctx->pc = 0x150e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
    // 0x150e84: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x150e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150e88: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x150e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x150e8c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x150e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x150e90: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x150e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x150e94: 0x28654000  slti        $a1, $v1, 0x4000
    ctx->pc = 0x150e94u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16384) ? 1 : 0);
    // 0x150e98: 0x24648000  addiu       $a0, $v1, -0x8000
    ctx->pc = 0x150e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x150e9c: 0x85180a  movz        $v1, $a0, $a1
    ctx->pc = 0x150e9cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x150ea0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x150ea0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x150ea4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x150ea4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150ea8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x150ea8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x150eac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x150eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150eb0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x150eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x150eb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150eb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150eb8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x150eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x150ebc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x150ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x150ec0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x150ec0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x150ec4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150ec8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x150ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x150ecc: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x150eccu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x150ed0: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x150ed0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x150ed4: 0xc6000308  lwc1        $f0, 0x308($s0)
    ctx->pc = 0x150ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150ed8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x150ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x150edc: 0xe6000384  swc1        $f0, 0x384($s0)
    ctx->pc = 0x150edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 900), bits); }
    // 0x150ee0: 0x92030576  lbu         $v1, 0x576($s0)
    ctx->pc = 0x150ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1398)));
label_150ee4:
    // 0x150ee4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x150ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150ee8: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x150ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x150eec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150eecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150ef0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150EF0u;
    {
        const bool branch_taken_0x150ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150EF0u;
        // 0x150ef4: 0x8e050690  lw          $a1, 0x690($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ef0) {
            ctx->pc = 0x150F00u;
            goto label_150f00;
        }
    }
    ctx->pc = 0x150EF8u;
    // 0x150ef8: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x150ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x150efc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_150f00:
    // 0x150f00: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x150f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x150f04: 0x24639c80  addiu       $v1, $v1, -0x6380
    ctx->pc = 0x150f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941824));
    // 0x150f08: 0x26060670  addiu       $a2, $s0, 0x670
    ctx->pc = 0x150f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
    // 0x150f0c: 0x24a500e0  addiu       $a1, $a1, 0xE0
    ctx->pc = 0x150f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 224));
    // 0x150f10: 0x26040660  addiu       $a0, $s0, 0x660
    ctx->pc = 0x150f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1632));
    // 0x150f14: 0x260201d0  addiu       $v0, $s0, 0x1D0
    ctx->pc = 0x150f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 464));
    // 0x150f18: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x150f18u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x150f1c: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x150f1cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x150f20: 0x78aa0020  lq          $t2, 0x20($a1)
    ctx->pc = 0x150f20u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x150f24: 0x482b0000  qmfc2.ni    $t3, $vf0
    ctx->pc = 0x150f24u;
    SET_GPR_VEC(ctx, 11, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x150f28: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x150f28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150f2c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x150f2cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150f30: 0x4bc3016c  vsub.xyz    $vf5, $vf0, $vf3
    ctx->pc = 0x150f30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150f34: 0x71286488  pextlw      $t4, $t1, $t0
    ctx->pc = 0x150f34u;
    SET_GPR_VEC(ctx, 12, PS2_PEXTLW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x150f38: 0x71286ca8  pextuw      $t5, $t1, $t0
    ctx->pc = 0x150f38u;
    SET_GPR_VEC(ctx, 13, PS2_PEXTUW(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x150f3c: 0x716a7488  pextlw      $t6, $t3, $t2
    ctx->pc = 0x150f3cu;
    SET_GPR_VEC(ctx, 14, PS2_PEXTLW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x150f40: 0x716a7ca8  pextuw      $t7, $t3, $t2
    ctx->pc = 0x150f40u;
    SET_GPR_VEC(ctx, 15, PS2_PEXTUW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x150f44: 0x4bc5096a  vmul.xyz    $vf5, $vf1, $vf5
    ctx->pc = 0x150f44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150f48: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x150f48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150f4c: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x150f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x150f50: 0x71cc4389  pcpyld      $t0, $t6, $t4
    ctx->pc = 0x150f50u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 14), GPR_VEC(ctx, 12)));
    // 0x150f54: 0x718e4ba9  pcpyud      $t1, $t4, $t6
    ctx->pc = 0x150f54u;
    SET_GPR_VEC(ctx, 9, _mm_unpackhi_epi64(GPR_VEC(ctx, 12), GPR_VEC(ctx, 14)));
    // 0x150f58: 0x71ed5389  pcpyld      $t2, $t7, $t5
    ctx->pc = 0x150f58u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 15), GPR_VEC(ctx, 13)));
    // 0x150f5c: 0x71af5ba9  pcpyud      $t3, $t5, $t7
    ctx->pc = 0x150f5cu;
    SET_GPR_VEC(ctx, 11, _mm_unpackhi_epi64(GPR_VEC(ctx, 13), GPR_VEC(ctx, 15)));
    // 0x150f60: 0x4bc518d8  vmulx.xyz   $vf3, $vf3, $vf5x
    ctx->pc = 0x150f60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x150f64: 0x48a82000  qmtc2.ni    $t0, $vf4
    ctx->pc = 0x150f64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x150f68: 0x48a92800  qmtc2.ni    $t1, $vf5
    ctx->pc = 0x150f68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x150f6c: 0x48aa3000  qmtc2.ni    $t2, $vf6
    ctx->pc = 0x150f6cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 10));
    // 0x150f70: 0x48ab3800  qmtc2.ni    $t3, $vf7
    ctx->pc = 0x150f70u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x150f74: 0x4bc118e8  vadd.xyz    $vf3, $vf3, $vf1
    ctx->pc = 0x150f74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x150f78: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x150f78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x150f7c: 0x48a84000  qmtc2.ni    $t0, $vf8
    ctx->pc = 0x150f7cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x150f80: 0x4be121bc  vmulax.xyzw $ACC, $vf4, $vf1x
    ctx->pc = 0x150f80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x150f84: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x150f84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x150f88: 0x4be130be  vmaddaz.xyzw $ACC, $vf6, $vf1z
    ctx->pc = 0x150f88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x150f8c: 0x4be1388b  vmaddw.xyzw $vf2, $vf7, $vf1w
    ctx->pc = 0x150f8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x150f90: 0x4bc818d8  vmulx.xyz   $vf3, $vf3, $vf8x
    ctx->pc = 0x150f90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x150f94: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x150f94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x150f98: 0xf8c30000  sqc2        $vf3, 0x0($a2)
    ctx->pc = 0x150f98u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x150f9c: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x150f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x150fa0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x150fa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150fa4: 0xc6010668  lwc1        $f1, 0x668($s0)
    ctx->pc = 0x150fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150fa8: 0xc6000360  lwc1        $f0, 0x360($s0)
    ctx->pc = 0x150fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150fac: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x150facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x150fb0: 0xc6030380  lwc1        $f3, 0x380($s0)
    ctx->pc = 0x150fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x150fb4: 0x46000a02  mul.s       $f8, $f1, $f0
    ctx->pc = 0x150fb4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x150fb8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x150FB8u;
    {
        const bool branch_taken_0x150fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FB8u;
        // 0x150fbc: 0xc6150384  lwc1        $f21, 0x384($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fb8) {
            ctx->pc = 0x150FE0u;
            goto label_150fe0;
        }
    }
    ctx->pc = 0x150FC0u;
    // 0x150fc0: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x150fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x150fc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x150FC4u;
    {
        const bool branch_taken_0x150fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FC4u;
        // 0x150fc8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fc4) {
            ctx->pc = 0x150FE4u;
            goto label_150fe4;
        }
    }
    ctx->pc = 0x150FCCu;
    // 0x150fcc: 0x92030575  lbu         $v1, 0x575($s0)
    ctx->pc = 0x150fccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    // 0x150fd0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150FD0u;
    {
        const bool branch_taken_0x150fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x150FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FD0u;
        // 0x150fd4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fd0) {
            ctx->pc = 0x150FE0u;
            goto label_150fe0;
        }
    }
    ctx->pc = 0x150FD8u;
    // 0x150fd8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x150FD8u;
    {
        const bool branch_taken_0x150fd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x150fd8) {
            ctx->pc = 0x150FE4u;
            goto label_150fe4;
        }
    }
    ctx->pc = 0x150FE0u;
label_150fe0:
    // 0x150fe0: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x150fe0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_150fe4:
    // 0x150fe4: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x150FE4u;
    {
        const bool branch_taken_0x150fe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FE4u;
        // 0x150fe8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150fe4) {
            ctx->pc = 0x15103Cu;
            goto label_15103c;
        }
    }
    ctx->pc = 0x150FECu;
    // 0x150fec: 0x92030575  lbu         $v1, 0x575($s0)
    ctx->pc = 0x150fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    // 0x150ff0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x150FF0u;
    {
        const bool branch_taken_0x150ff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x150FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FF0u;
        // 0x150ff4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ff0) {
            ctx->pc = 0x151000u;
            goto label_151000;
        }
    }
    ctx->pc = 0x150FF8u;
    // 0x150ff8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x150FF8u;
    {
        const bool branch_taken_0x150ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150FF8u;
        // 0x150ffc: 0xc4429904  lwc1        $f2, -0x66FC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ff8) {
            ctx->pc = 0x151034u;
            goto label_151034;
        }
    }
    ctx->pc = 0x151000u;
label_151000:
    // 0x151000: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x151000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x151004: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x151004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151008: 0x56c0000b  bnel        $s6, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x151008u;
    {
        const bool branch_taken_0x151008 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x151008) {
            ctx->pc = 0x15100Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151008u;
            // 0x15100c: 0x4602ad42  mul.s       $f21, $f21, $f2 (Delay Slot)
            ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x151038u;
            goto label_151038;
        }
    }
    ctx->pc = 0x151010u;
    // 0x151010: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x151010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x151014: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x151014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151018: 0xc601035c  lwc1        $f1, 0x35C($s0)
    ctx->pc = 0x151018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15101c: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x15101cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x151020: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x151020u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x151024: 0xc4209864  lwc1        $f0, -0x679C($at)
    ctx->pc = 0x151024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151028: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x151028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15102c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15102cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x151030: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x151030u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_151034:
    // 0x151034: 0x4602ad42  mul.s       $f21, $f21, $f2
    ctx->pc = 0x151034u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_151038:
    // 0x151038: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x151038u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_15103c:
    // 0x15103c: 0x8e0303b0  lw          $v1, 0x3B0($s0)
    ctx->pc = 0x15103cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x151040: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x151040u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x151044: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x151044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x151048: 0xc6050328  lwc1        $f5, 0x328($s0)
    ctx->pc = 0x151048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15104c: 0xc602032c  lwc1        $f2, 0x32C($s0)
    ctx->pc = 0x15104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151050: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x151050u;
    {
        const bool branch_taken_0x151050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151050u;
        // 0x151054: 0xc6010330  lwc1        $f1, 0x330($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151050) {
            ctx->pc = 0x151070u;
            goto label_151070;
        }
    }
    ctx->pc = 0x151058u;
    // 0x151058: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x151058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x15105c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15105Cu;
    {
        const bool branch_taken_0x15105c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15105c) {
            ctx->pc = 0x151060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15105Cu;
            // 0x151060: 0xc6050348  lwc1        $f5, 0x348($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x151074u;
            goto label_151074;
        }
    }
    ctx->pc = 0x151064u;
    // 0x151064: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x151064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x151068: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151068u;
    {
        const bool branch_taken_0x151068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151068) {
            ctx->pc = 0x15107Cu;
            goto label_15107c;
        }
    }
    ctx->pc = 0x151070u;
label_151070:
    // 0x151070: 0xc6050348  lwc1        $f5, 0x348($s0)
    ctx->pc = 0x151070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_151074:
    // 0x151074: 0xc602034c  lwc1        $f2, 0x34C($s0)
    ctx->pc = 0x151074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151078: 0xc6010350  lwc1        $f1, 0x350($s0)
    ctx->pc = 0x151078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_15107c:
    // 0x15107c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x15107cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x151080: 0xc6000684  lwc1        $f0, 0x684($s0)
    ctx->pc = 0x151080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151084: 0x46061832  c.eq.s      $f3, $f6
    ctx->pc = 0x151084u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151088: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x151088u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15108c: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x15108cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x151090: 0x45010033  bc1t        . + 4 + (0x33 << 2)
    ctx->pc = 0x151090u;
    {
        const bool branch_taken_0x151090 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x151094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151090u;
        // 0x151094: 0x46001082  mul.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151090) {
            ctx->pc = 0x151160u;
            goto label_151160;
        }
    }
    ctx->pc = 0x151098u;
    // 0x151098: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x151098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15109c: 0xc60403b8  lwc1        $f4, 0x3B8($s0)
    ctx->pc = 0x15109cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1510a0: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1510A0u;
    {
        const bool branch_taken_0x1510a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1510A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510A0u;
        // 0x1510a4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510a0) {
            ctx->pc = 0x1510F0u;
            goto label_1510f0;
        }
    }
    ctx->pc = 0x1510A8u;
    // 0x1510a8: 0x460311e9  min.s       $f7, $f2, $f3
    ctx->pc = 0x1510a8u;
    ctx->f[7] = std::min(ctx->f[2], ctx->f[3]);
    // 0x1510ac: 0x460038c6  mov.s       $f3, $f7
    ctx->pc = 0x1510acu;
    ctx->f[3] = FPU_MOV_S(ctx->f[7]);
    // 0x1510b0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1510B0u;
    {
        const bool branch_taken_0x1510b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510B0u;
        // 0x1510b4: 0x46003886  mov.s       $f2, $f7 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510b0) {
            ctx->pc = 0x1510CCu;
            goto label_1510cc;
        }
    }
    ctx->pc = 0x1510B8u;
    // 0x1510b8: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1510b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x1510bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1510bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1510c0: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x1510c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x1510c4: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x1510c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x1510c8: 0x460601e8  max.s       $f7, $f0, $f6
    ctx->pc = 0x1510c8u;
    ctx->f[7] = std::max(ctx->f[0], ctx->f[6]);
label_1510cc:
    // 0x1510cc: 0x46032829  min.s       $f0, $f5, $f3
    ctx->pc = 0x1510ccu;
    ctx->f[0] = std::min(ctx->f[5], ctx->f[3]);
    // 0x1510d0: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1510d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1510d4: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
    ctx->pc = 0x1510D4u;
    {
        const bool branch_taken_0x1510d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1510d4) {
            ctx->pc = 0x1510D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1510D4u;
            // 0x1510d8: 0x46041041  sub.s       $f1, $f2, $f4 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x151140u;
            goto label_151140;
        }
    }
    ctx->pc = 0x1510DCu;
    // 0x1510dc: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x1510dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1510e0: 0x45010019  bc1t        . + 4 + (0x19 << 2)
    ctx->pc = 0x1510E0u;
    {
        const bool branch_taken_0x1510e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1510e0) {
            ctx->pc = 0x151148u;
            goto label_151148;
        }
    }
    ctx->pc = 0x1510E8u;
    // 0x1510e8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1510E8u;
    {
        const bool branch_taken_0x1510e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510E8u;
        // 0x1510ec: 0x46041041  sub.s       $f1, $f2, $f4 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510e8) {
            ctx->pc = 0x151140u;
            goto label_151140;
        }
    }
    ctx->pc = 0x1510F0u;
label_1510f0:
    // 0x1510f0: 0x46001007  neg.s       $f0, $f2
    ctx->pc = 0x1510f0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[2]);
    // 0x1510f4: 0x460300a8  max.s       $f2, $f0, $f3
    ctx->pc = 0x1510f4u;
    ctx->f[2] = std::max(ctx->f[0], ctx->f[3]);
    // 0x1510f8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1510F8u;
    {
        const bool branch_taken_0x1510f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1510FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1510F8u;
        // 0x1510fc: 0x460011c7  neg.s       $f7, $f2 (Delay Slot)
        ctx->f[7] = FPU_NEG_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1510f8) {
            ctx->pc = 0x151114u;
            goto label_151114;
        }
    }
    ctx->pc = 0x151100u;
    // 0x151100: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x151100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
    // 0x151104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151108: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x151108u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x15110c: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x15110cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x151110: 0x460601e8  max.s       $f7, $f0, $f6
    ctx->pc = 0x151110u;
    ctx->f[7] = std::max(ctx->f[0], ctx->f[6]);
label_151114:
    // 0x151114: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x151114u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x151118: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x151118u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x15111c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x15111cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151120: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x151120u;
    {
        const bool branch_taken_0x151120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x151120) {
            ctx->pc = 0x151124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151120u;
            // 0x151124: 0x46041041  sub.s       $f1, $f2, $f4 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x151140u;
            goto label_151140;
        }
    }
    ctx->pc = 0x151128u;
    // 0x151128: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x151128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15112c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x15112Cu;
    {
        const bool branch_taken_0x15112c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15112c) {
            ctx->pc = 0x151130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15112Cu;
            // 0x151130: 0x46041041  sub.s       $f1, $f2, $f4 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x151140u;
            goto label_151140;
        }
    }
    ctx->pc = 0x151134u;
    // 0x151134: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x151134u;
    {
        const bool branch_taken_0x151134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151134u;
        // 0x151138: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151134) {
            ctx->pc = 0x151148u;
            goto label_151148;
        }
    }
    ctx->pc = 0x15113Cu;
    // 0x15113c: 0x0  nop
    ctx->pc = 0x15113cu;
    // NOP
label_151140:
    // 0x151140: 0xc7808240  lwc1        $f0, -0x7DC0($gp)
    ctx->pc = 0x151140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151144: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x151144u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_151148:
    // 0x151148: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x151148u;
    {
        const bool branch_taken_0x151148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x151148) {
            ctx->pc = 0x15114Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151148u;
            // 0x15114c: 0x46080840  add.s       $f1, $f1, $f8 (Delay Slot)
            ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x151150u;
            goto label_151150;
        }
    }
    ctx->pc = 0x151150u;
label_151150:
    // 0x151150: 0xc60003b8  lwc1        $f0, 0x3B8($s0)
    ctx->pc = 0x151150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151154: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x151154u;
    {
        const bool branch_taken_0x151154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151154u;
        // 0x151158: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151154) {
            ctx->pc = 0x151188u;
            goto label_151188;
        }
    }
    ctx->pc = 0x15115Cu;
    // 0x15115c: 0x0  nop
    ctx->pc = 0x15115cu;
    // NOP
label_151160:
    // 0x151160: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x151160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x151164: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x151164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x151168: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x151168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x15116c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15116Cu;
    {
        const bool branch_taken_0x15116c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15116Cu;
        // 0x151170: 0xc60003b8  lwc1        $f0, 0x3B8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15116c) {
            ctx->pc = 0x151180u;
            goto label_151180;
        }
    }
    ctx->pc = 0x151174u;
    // 0x151174: 0xc7818244  lwc1        $f1, -0x7DBC($gp)
    ctx->pc = 0x151174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151178: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x151178u;
    {
        const bool branch_taken_0x151178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151178u;
        // 0x15117c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151178) {
            ctx->pc = 0x151188u;
            goto label_151188;
        }
    }
    ctx->pc = 0x151180u;
label_151180:
    // 0x151180: 0xc7818248  lwc1        $f1, -0x7DB8($gp)
    ctx->pc = 0x151180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151184: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x151184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_151188:
    // 0x151188: 0xe60003b8  swc1        $f0, 0x3B8($s0)
    ctx->pc = 0x151188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 952), bits); }
    // 0x15118c: 0xc60203c4  lwc1        $f2, 0x3C4($s0)
    ctx->pc = 0x15118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151190: 0xc780824c  lwc1        $f0, -0x7DB4($gp)
    ctx->pc = 0x151190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151194: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x151194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x151198: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x151198u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15119c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x15119cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1511a0: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x1511a0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1511a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1511a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1511a8: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1511a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1511ac: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x1511acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1511b0: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x1511b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1511b4: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x1511b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1511b8: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x1511b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1511bc: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x1511bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1511c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1511c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1511c4: 0xc6010278  lwc1        $f1, 0x278($s0)
    ctx->pc = 0x1511c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1511c8: 0xc7808250  lwc1        $f0, -0x7DB0($gp)
    ctx->pc = 0x1511c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1511cc: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1511ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1511d0: 0xc60c03b8  lwc1        $f12, 0x3B8($s0)
    ctx->pc = 0x1511d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1511d4: 0xe60203c4  swc1        $f2, 0x3C4($s0)
    ctx->pc = 0x1511d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 964), bits); }
    // 0x1511d8: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x1511d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x1511dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1511dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1511e0: 0x46016341  sub.s       $f13, $f12, $f1
    ctx->pc = 0x1511e0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1511e4: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x1511e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x1511e8: 0xe60d03c0  swc1        $f13, 0x3C0($s0)
    ctx->pc = 0x1511e8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 960), bits); }
    // 0x1511ec: 0xc0589ee  jal         func_1627B8
    ctx->pc = 0x1511ECu;
    SET_GPR_U32(ctx, 31, 0x1511F4u);
    ctx->pc = 0x1511F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1511ECu;
    // 0x1511f0: 0xe60c03bc  swc1        $f12, 0x3BC($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 956), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1627B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1627B8u, 0x1511ECu, 0x1511F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1511F4u;
label_1511f4:
    // 0x1511f4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1511f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1511f8: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x1511f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x1511fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1511fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x151200: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151200u;
    {
        const bool branch_taken_0x151200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151200) {
            ctx->pc = 0x151214u;
            goto label_151214;
        }
    }
    ctx->pc = 0x151208u;
    // 0x151208: 0x8e040690  lw          $a0, 0x690($s0)
    ctx->pc = 0x151208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x15120c: 0xc058a68  jal         func_1629A0
    ctx->pc = 0x15120Cu;
    SET_GPR_U32(ctx, 31, 0x151214u);
    ctx->pc = 0x151210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15120Cu;
    // 0x151210: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1629A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1629A0u, 0x15120Cu, 0x151214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151214u;
label_151214:
    // 0x151214: 0x122000a2  beqz        $s1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x151214u;
    {
        const bool branch_taken_0x151214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x151218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151214u;
        // 0x151218: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151214) {
            ctx->pc = 0x1514A0u;
            goto label_1514a0;
        }
    }
    ctx->pc = 0x15121Cu;
    // 0x15121c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x151220: 0xc60103b8  lwc1        $f1, 0x3B8($s0)
    ctx->pc = 0x151220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151224: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x151224u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151228: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x151228u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15122c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x15122cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x151230: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151234: 0x26330020  addiu       $s3, $s1, 0x20
    ctx->pc = 0x151234u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x151238: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x151238u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x15123c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x15123cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x151240: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151240u;
    {
        const bool branch_taken_0x151240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151240u;
        // 0x151244: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151240) {
            ctx->pc = 0x151250u;
            goto label_151250;
        }
    }
    ctx->pc = 0x151248u;
    // 0x151248: 0xc061920  jal         func_186480
    ctx->pc = 0x151248u;
    SET_GPR_U32(ctx, 31, 0x151250u);
    ctx->pc = 0x15124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151248u;
    // 0x15124c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x151248u, 0x151250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151250u;
label_151250:
    // 0x151250: 0xc061422  jal         func_185088
    ctx->pc = 0x151250u;
    SET_GPR_U32(ctx, 31, 0x151258u);
    ctx->pc = 0x151254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151250u;
    // 0x151254: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x151250u, 0x151258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151258u;
label_151258:
    // 0x151258: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x151258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x15125c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x15125cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x151260: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x151260u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x151264: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x151264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x151268: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15126c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x15126cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151270: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x151270u;
    {
        const bool branch_taken_0x151270 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x151274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151270u;
        // 0x151274: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151270) {
            ctx->pc = 0x151290u;
            goto label_151290;
        }
    }
    ctx->pc = 0x151278u;
    // 0x151278: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x151278u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15127c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x15127cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x151280: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x151280u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x151284: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x151284u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151288: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x151288u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15128c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x15128cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_151290:
    // 0x151290: 0x26050630  addiu       $a1, $s0, 0x630
    ctx->pc = 0x151290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x151294: 0xc6030414  lwc1        $f3, 0x414($s0)
    ctx->pc = 0x151294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151298: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x151298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15129c: 0xc60203b4  lwc1        $f2, 0x3B4($s0)
    ctx->pc = 0x15129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1512a0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1512a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1512a4: 0xc7808254  lwc1        $f0, -0x7DAC($gp)
    ctx->pc = 0x1512a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1512a8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1512a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1512ac: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1512acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1512b0: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1512b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1512b4: 0x4bc110ac  vsub.xyz    $vf2, $vf2, $vf1
    ctx->pc = 0x1512b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1512b8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1512b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1512bc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1512bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1512c0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1512c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1512c4: 0x70621c88  pextlw      $v1, $v1, $v0
    ctx->pc = 0x1512c4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1512c8: 0x70822488  pextlw      $a0, $a0, $v0
    ctx->pc = 0x1512c8u;
    SET_GPR_VEC(ctx, 4, PS2_PEXTLW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x1512cc: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x1512ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1512d0: 0x48a24000  qmtc2.ni    $v0, $vf8
    ctx->pc = 0x1512d0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1512d4: 0xf8c20000  sqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1512d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1512d8: 0x4bc2422a  vmul.xyz    $vf8, $vf8, $vf2
    ctx->pc = 0x1512d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1512dc: 0x4bc80868  vadd.xyz    $vf1, $vf1, $vf8
    ctx->pc = 0x1512dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1512e0: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1512e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1512e4: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1512E4u;
    {
        const bool branch_taken_0x1512e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1512E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512E4u;
        // 0x1512e8: 0x26020670  addiu       $v0, $s0, 0x670 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512e4) {
            ctx->pc = 0x1512FCu;
            goto label_1512fc;
        }
    }
    ctx->pc = 0x1512ECu;
    // 0x1512ec: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1512ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1512f0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1512f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1512f4: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1512f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1512f8: 0xf8a20000  sqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1512f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1512fc:
    // 0x1512fc: 0x56c0002f  bnel        $s6, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x1512FCu;
    {
        const bool branch_taken_0x1512fc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1512fc) {
            ctx->pc = 0x151300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1512FCu;
            // 0x151300: 0x8e0203b0  lw          $v0, 0x3B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1513BCu;
            goto label_1513bc;
        }
    }
    ctx->pc = 0x151304u;
    // 0x151304: 0x92030576  lbu         $v1, 0x576($s0)
    ctx->pc = 0x151304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1398)));
    // 0x151308: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x151308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15130c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15130Cu;
    {
        const bool branch_taken_0x15130c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15130c) {
            ctx->pc = 0x151310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15130Cu;
            // 0x151310: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151320u;
            goto label_151320;
        }
    }
    ctx->pc = 0x151314u;
    // 0x151314: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x151314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x151318: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x151318u;
    {
        const bool branch_taken_0x151318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15131Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151318u;
        // 0x15131c: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151318) {
            ctx->pc = 0x1513C4u;
            goto label_1513c4;
        }
    }
    ctx->pc = 0x151320u;
label_151320:
    // 0x151320: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x151320u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x151324: 0x4bc421ea  vmul.xyz    $vf7, $vf4, $vf4
    ctx->pc = 0x151324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x151328: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x151328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15132c: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x15132cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x151330: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x151330u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x151334: 0x4a0003bf  vwaitq
    ctx->pc = 0x151334u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x151338: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x151338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15133c: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x15133cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x151340: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x151340u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x151344: 0xc6000664  lwc1        $f0, 0x664($s0)
    ctx->pc = 0x151344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151348: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x151348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15134c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x15134cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x151350: 0x46020068  max.s       $f1, $f0, $f2
    ctx->pc = 0x151350u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[2]);
    // 0x151354: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x151354u;
    {
        const bool branch_taken_0x151354 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x151358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151354u;
        // 0x151358: 0x92020575  lbu         $v0, 0x575($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151354) {
            ctx->pc = 0x151390u;
            goto label_151390;
        }
    }
    ctx->pc = 0x15135Cu;
    // 0x15135c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x15135cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x151360: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x151360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151364: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x151364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x151368: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x151368u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x15136c: 0xc4209868  lwc1        $f0, -0x6798($at)
    ctx->pc = 0x15136cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151370: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x151370u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x151374: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x151374u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x151378: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x151378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15137c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x15137Cu;
    {
        const bool branch_taken_0x15137c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x151380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15137Cu;
        // 0x151380: 0xe6010410  swc1        $f1, 0x410($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1040), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15137c) {
            ctx->pc = 0x1513C8u;
            goto label_1513c8;
        }
    }
    ctx->pc = 0x151384u;
    // 0x151384: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x151384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x151388: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x151388u;
    {
        const bool branch_taken_0x151388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15138Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151388u;
        // 0x15138c: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151388) {
            ctx->pc = 0x1513C4u;
            goto label_1513c4;
        }
    }
    ctx->pc = 0x151390u;
label_151390:
    // 0x151390: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x151390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x151394: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x151394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151398: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x151398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x15139c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x15139cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1513a0: 0xc420986c  lwc1        $f0, -0x6794($at)
    ctx->pc = 0x1513a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1513a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1513a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1513a8: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x1513a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1513ac: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1513acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1513b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1513B0u;
    {
        const bool branch_taken_0x1513b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1513B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513B0u;
        // 0x1513b4: 0xe6010410  swc1        $f1, 0x410($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1040), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513b0) {
            ctx->pc = 0x1513C8u;
            goto label_1513c8;
        }
    }
    ctx->pc = 0x1513B8u;
    // 0x1513b8: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x1513b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
label_1513bc:
    // 0x1513bc: 0x2403fbff  addiu       $v1, $zero, -0x401
    ctx->pc = 0x1513bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x1513c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1513c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1513c4:
    // 0x1513c4: 0xae0203b0  sw          $v0, 0x3B0($s0)
    ctx->pc = 0x1513c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 944), GPR_U32(ctx, 2));
label_1513c8:
    // 0x1513c8: 0x8e0203b0  lw          $v0, 0x3B0($s0)
    ctx->pc = 0x1513c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x1513cc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1513ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1513d0: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x1513d0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1513d4: 0x16a00008  bnez        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1513D4u;
    {
        const bool branch_taken_0x1513d4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1513D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513D4u;
        // 0x1513d8: 0x92020576  lbu         $v0, 0x576($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1398)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513d4) {
            ctx->pc = 0x1513F8u;
            goto label_1513f8;
        }
    }
    ctx->pc = 0x1513DCu;
    // 0x1513dc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1513dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1513e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1513e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1513e4: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x1513e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x1513e8: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1513e8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1513ec: 0xc42097e0  lwc1        $f0, -0x6820($at)
    ctx->pc = 0x1513ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1513f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1513F0u;
    {
        const bool branch_taken_0x1513f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1513F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1513F0u;
        // 0x1513f4: 0xe60003b4  swc1        $f0, 0x3B4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1513f0) {
            ctx->pc = 0x151410u;
            goto label_151410;
        }
    }
    ctx->pc = 0x1513F8u;
label_1513f8:
    // 0x1513f8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1513f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1513fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1513fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151400: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x151400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x151404: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x151404u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x151408: 0xc42097e4  lwc1        $f0, -0x681C($at)
    ctx->pc = 0x151408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15140c: 0xe60003b4  swc1        $f0, 0x3B4($s0)
    ctx->pc = 0x15140cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
label_151410:
    // 0x151410: 0x52a0000b  beql        $s5, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x151410u;
    {
        const bool branch_taken_0x151410 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x151410) {
            ctx->pc = 0x151414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151410u;
            // 0x151414: 0xc60003b4  lwc1        $f0, 0x3B4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x151440u;
            goto label_151440;
        }
    }
    ctx->pc = 0x151418u;
    // 0x151418: 0x92020575  lbu         $v0, 0x575($s0)
    ctx->pc = 0x151418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1397)));
    // 0x15141c: 0xc60103b4  lwc1        $f1, 0x3B4($s0)
    ctx->pc = 0x15141cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151420: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x151420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x151424: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x151424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x151428: 0x3c010021  lui         $at, 0x21
    ctx->pc = 0x151428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)33 << 16));
    // 0x15142c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x15142cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x151430: 0xc4209860  lwc1        $f0, -0x67A0($at)
    ctx->pc = 0x151430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294940768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151434: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x151434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x151438: 0xe60103b4  swc1        $f1, 0x3B4($s0)
    ctx->pc = 0x151438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
    // 0x15143c: 0xc60003b4  lwc1        $f0, 0x3B4($s0)
    ctx->pc = 0x15143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_151440:
    // 0x151440: 0xc6010354  lwc1        $f1, 0x354($s0)
    ctx->pc = 0x151440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 852)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151444: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x151444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x151448: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x151448u;
    {
        const bool branch_taken_0x151448 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x15144Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151448u;
        // 0x15144c: 0xe60003b4  swc1        $f0, 0x3B4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151448) {
            ctx->pc = 0x151458u;
            goto label_151458;
        }
    }
    ctx->pc = 0x151450u;
    // 0x151450: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x151450u;
    {
        const bool branch_taken_0x151450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151450u;
        // 0x151454: 0xe6150624  swc1        $f21, 0x624($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1572), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151450) {
            ctx->pc = 0x151494u;
            goto label_151494;
        }
    }
    ctx->pc = 0x151458u;
label_151458:
    // 0x151458: 0xc6000624  lwc1        $f0, 0x624($s0)
    ctx->pc = 0x151458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15145c: 0xc7818258  lwc1        $f1, -0x7DA8($gp)
    ctx->pc = 0x15145cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151460: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x151460u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x151464: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x151464u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x151468: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x151468u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15146c: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x15146cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x151470: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x151470u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x151474: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x151474u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x151478: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x151478u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x15147c: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x15147cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x151480: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x151480u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x151484: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x151484u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x151488: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x151488u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x15148c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15148cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151490: 0xe6000624  swc1        $f0, 0x624($s0)
    ctx->pc = 0x151490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1572), bits); }
label_151494:
    // 0x151494: 0xc6000634  lwc1        $f0, 0x634($s0)
    ctx->pc = 0x151494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151498: 0x100000f4  b           . + 4 + (0xF4 << 2)
    ctx->pc = 0x151498u;
    {
        const bool branch_taken_0x151498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15149Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151498u;
        // 0x15149c: 0xe6000418  swc1        $f0, 0x418($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1048), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151498) {
            ctx->pc = 0x15186Cu;
            goto label_15186c;
        }
    }
    ctx->pc = 0x1514A0u;
label_1514a0:
    // 0x1514a0: 0x8e0303b0  lw          $v1, 0x3B0($s0)
    ctx->pc = 0x1514a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 944)));
    // 0x1514a4: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x1514a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1514a8: 0x1040006b  beqz        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x1514A8u;
    {
        const bool branch_taken_0x1514a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514A8u;
        // 0x1514ac: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514a8) {
            ctx->pc = 0x151658u;
            goto label_151658;
        }
    }
    ctx->pc = 0x1514B0u;
    // 0x1514b0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1514b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1514b4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1514b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1514b8: 0xc60103b8  lwc1        $f1, 0x3B8($s0)
    ctx->pc = 0x1514b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1514bc: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x1514bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1514c0: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1514c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1514c4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1514c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1514c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1514c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1514cc: 0x26530020  addiu       $s3, $s2, 0x20
    ctx->pc = 0x1514ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1514d0: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x1514d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x1514d4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x1514d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x1514d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1514D8u;
    {
        const bool branch_taken_0x1514d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514D8u;
        // 0x1514dc: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514d8) {
            ctx->pc = 0x1514E8u;
            goto label_1514e8;
        }
    }
    ctx->pc = 0x1514E0u;
    // 0x1514e0: 0xc061920  jal         func_186480
    ctx->pc = 0x1514E0u;
    SET_GPR_U32(ctx, 31, 0x1514E8u);
    ctx->pc = 0x1514E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1514E0u;
    // 0x1514e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x1514E0u, 0x1514E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514E8u;
label_1514e8:
    // 0x1514e8: 0xc061422  jal         func_185088
    ctx->pc = 0x1514E8u;
    SET_GPR_U32(ctx, 31, 0x1514F0u);
    ctx->pc = 0x1514ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1514E8u;
    // 0x1514ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1514E8u, 0x1514F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514F0u;
label_1514f0:
    // 0x1514f0: 0x264300e0  addiu       $v1, $s2, 0xE0
    ctx->pc = 0x1514f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x1514f4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1514f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1514f8: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x1514f8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x1514fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1514fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x151500: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x151500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151504: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x151504u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x151508: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x151508u;
    {
        const bool branch_taken_0x151508 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151508u;
        // 0x15150c: 0x26030630  addiu       $v1, $s0, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151508) {
            ctx->pc = 0x151528u;
            goto label_151528;
        }
    }
    ctx->pc = 0x151510u;
    // 0x151510: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x151510u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151514: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x151514u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x151518: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x151518u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15151c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x15151cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x151520: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x151520u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x151524: 0x26030630  addiu       $v1, $s0, 0x630
    ctx->pc = 0x151524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
label_151528:
    // 0x151528: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x151528u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15152c: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x15152cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151530: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151530u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151534: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x151534u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151538: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x151538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x15153c: 0x24429c90  addiu       $v0, $v0, -0x6370
    ctx->pc = 0x15153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941840));
    // 0x151540: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x151540u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151544: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x151544u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x209C90u));
    // 0x151548: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x151548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x15154c: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x15154cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x151550: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x151550u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151554: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x151554u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151558: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15155c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x15155cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151560: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x151560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x151564: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x151564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x151568: 0x8e030170  lw          $v1, 0x170($s0)
    ctx->pc = 0x151568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
    // 0x15156c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151570: 0x8c650328  lw          $a1, 0x328($v1)
    ctx->pc = 0x151570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 808)));
    // 0x151574: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x151574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x151578: 0xc4a04010  lwc1        $f0, 0x4010($a1)
    ctx->pc = 0x151578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15157c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x15157cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151580: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x151580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x151584: 0x460700e8  max.s       $f3, $f0, $f7
    ctx->pc = 0x151584u;
    ctx->f[3] = std::max(ctx->f[0], ctx->f[7]);
    // 0x151588: 0x8e03037c  lw          $v1, 0x37C($s0)
    ctx->pc = 0x151588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x15158c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x15158cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x151590: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x151590u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x151594: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x151594u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x151598: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x151598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15159c: 0x46033834  c.lt.s      $f7, $f3
    ctx->pc = 0x15159cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1515a0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1515A0u;
    {
        const bool branch_taken_0x1515a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1515a0) {
            ctx->pc = 0x1515B4u;
            goto label_1515b4;
        }
    }
    ctx->pc = 0x1515A8u;
    // 0x1515a8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1515a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1515ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1515acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1515b0: 0x460010a9  min.s       $f2, $f2, $f0
    ctx->pc = 0x1515b0u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[0]);
label_1515b4:
    // 0x1515b4: 0x3c01c100  lui         $at, 0xC100
    ctx->pc = 0x1515b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49408 << 16));
    // 0x1515b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1515b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1515bc: 0xc6010414  lwc1        $f1, 0x414($s0)
    ctx->pc = 0x1515bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1515c0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1515c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1515c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1515c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1515c8: 0x46030080  add.s       $f2, $f0, $f3
    ctx->pc = 0x1515c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1515cc: 0xe6020634  swc1        $f2, 0x634($s0)
    ctx->pc = 0x1515ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
    // 0x1515d0: 0xc4a14014  lwc1        $f1, 0x4014($a1)
    ctx->pc = 0x1515d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1515d4: 0x46070832  c.eq.s      $f1, $f7
    ctx->pc = 0x1515d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1515d8: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1515D8u;
    {
        const bool branch_taken_0x1515d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1515d8) {
            ctx->pc = 0x1515F4u;
            goto label_1515f4;
        }
    }
    ctx->pc = 0x1515E0u;
    // 0x1515e0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1515e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1515e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1515e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1515e8: 0x46070029  min.s       $f0, $f0, $f7
    ctx->pc = 0x1515e8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[7]);
    // 0x1515ec: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1515ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1515f0: 0xe6000634  swc1        $f0, 0x634($s0)
    ctx->pc = 0x1515f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
label_1515f4:
    // 0x1515f4: 0xc780825c  lwc1        $f0, -0x7DA4($gp)
    ctx->pc = 0x1515f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1515f8: 0xc6030624  lwc1        $f3, 0x624($s0)
    ctx->pc = 0x1515f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1515fc: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1515fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x151600: 0xc7818260  lwc1        $f1, -0x7DA0($gp)
    ctx->pc = 0x151600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151604: 0xc6020634  lwc1        $f2, 0x634($s0)
    ctx->pc = 0x151604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151608: 0xc7858264  lwc1        $f5, -0x7D9C($gp)
    ctx->pc = 0x151608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x15160c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x15160cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x151610: 0xc6010628  lwc1        $f1, 0x628($s0)
    ctx->pc = 0x151610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151614: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x151614u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x151618: 0xc6000414  lwc1        $f0, 0x414($s0)
    ctx->pc = 0x151618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15161c: 0xc6040620  lwc1        $f4, 0x620($s0)
    ctx->pc = 0x15161cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x151620: 0xc7868268  lwc1        $f6, -0x7D98($gp)
    ctx->pc = 0x151620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x151624: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x151624u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x151628: 0xe6070528  swc1        $f7, 0x528($s0)
    ctx->pc = 0x151628u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1320), bits); }
    // 0x15162c: 0x46051942  mul.s       $f5, $f3, $f5
    ctx->pc = 0x15162cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x151630: 0xe6030624  swc1        $f3, 0x624($s0)
    ctx->pc = 0x151630u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1572), bits); }
    // 0x151634: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x151634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x151638: 0xe6070438  swc1        $f7, 0x438($s0)
    ctx->pc = 0x151638u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1080), bits); }
    // 0x15163c: 0xe6070488  swc1        $f7, 0x488($s0)
    ctx->pc = 0x15163cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1160), bits); }
    // 0x151640: 0xe6040620  swc1        $f4, 0x620($s0)
    ctx->pc = 0x151640u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    // 0x151644: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x151644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x151648: 0xe60704d8  swc1        $f7, 0x4D8($s0)
    ctx->pc = 0x151648u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1240), bits); }
    // 0x15164c: 0xe6000414  swc1        $f0, 0x414($s0)
    ctx->pc = 0x15164cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1044), bits); }
    // 0x151650: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x151650u;
    {
        const bool branch_taken_0x151650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151650u;
        // 0x151654: 0xe6010628  swc1        $f1, 0x628($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1576), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151650) {
            ctx->pc = 0x15186Cu;
            goto label_15186c;
        }
    }
    ctx->pc = 0x151658u;
label_151658:
    // 0x151658: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
    ctx->pc = 0x151658u;
    {
        const bool branch_taken_0x151658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151658) {
            ctx->pc = 0x15165Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151658u;
            // 0x15165c: 0xc6000414  lwc1        $f0, 0x414($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x151868u;
            goto label_151868;
        }
    }
    ctx->pc = 0x151660u;
    // 0x151660: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x151660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x151664: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x151664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x151668: 0xc60103b8  lwc1        $f1, 0x3B8($s0)
    ctx->pc = 0x151668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15166c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x15166cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151670: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x151670u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151674: 0x3a82b  sltu        $s5, $zero, $v1
    ctx->pc = 0x151674u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x151678: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x151678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x15167c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15167cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151680: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x151680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151684: 0x26530020  addiu       $s3, $s2, 0x20
    ctx->pc = 0x151684u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x151688: 0x96620002  lhu         $v0, 0x2($s3)
    ctx->pc = 0x151688u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x15168c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x15168cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x151690: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151690u;
    {
        const bool branch_taken_0x151690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151690u;
        // 0x151694: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x151690) {
            ctx->pc = 0x1516A0u;
            goto label_1516a0;
        }
    }
    ctx->pc = 0x151698u;
    // 0x151698: 0xc061920  jal         func_186480
    ctx->pc = 0x151698u;
    SET_GPR_U32(ctx, 31, 0x1516A0u);
    ctx->pc = 0x15169Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151698u;
    // 0x15169c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x151698u, 0x1516A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516A0u;
label_1516a0:
    // 0x1516a0: 0xc061422  jal         func_185088
    ctx->pc = 0x1516A0u;
    SET_GPR_U32(ctx, 31, 0x1516A8u);
    ctx->pc = 0x1516A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516A0u;
    // 0x1516a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1516A0u, 0x1516A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516A8u;
label_1516a8:
    // 0x1516a8: 0x264300e0  addiu       $v1, $s2, 0xE0
    ctx->pc = 0x1516a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x1516ac: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1516acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1516b0: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x1516b0u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
    // 0x1516b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1516b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1516b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1516b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1516bc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x1516bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1516c0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1516C0u;
    {
        const bool branch_taken_0x1516c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1516C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516C0u;
        // 0x1516c4: 0x26030630  addiu       $v1, $s0, 0x630 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516c0) {
            ctx->pc = 0x1516E0u;
            goto label_1516e0;
        }
    }
    ctx->pc = 0x1516C8u;
    // 0x1516c8: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1516c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1516cc: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1516ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1516d0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1516d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1516d4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1516d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1516d8: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1516d8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1516dc: 0x26030630  addiu       $v1, $s0, 0x630
    ctx->pc = 0x1516dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
label_1516e0:
    // 0x1516e0: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1516e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1516e4: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x1516e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1516e8: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1516e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1516ec: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x1516ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1516f0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1516f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1516f4: 0x24429ca0  addiu       $v0, $v0, -0x6360
    ctx->pc = 0x1516f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941856));
    // 0x1516f8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1516f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1516fc: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1516fcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x209CA0u));
    // 0x151700: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x151700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x151704: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x151704u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x151708: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x151708u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15170c: 0xda230000  lqc2        $vf3, 0x0($s1)
    ctx->pc = 0x15170cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151710: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x151710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x151714: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x151714u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x151718: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x151718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15171c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15171cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151720: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x151720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151724: 0xc6010860  lwc1        $f1, 0x860($s0)
    ctx->pc = 0x151724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151728: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x151728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15172c: 0x12a0000d  beqz        $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x15172Cu;
    {
        const bool branch_taken_0x15172c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x151730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15172Cu;
        // 0x151730: 0x46000881  sub.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15172c) {
            ctx->pc = 0x151764u;
            goto label_151764;
        }
    }
    ctx->pc = 0x151734u;
    // 0x151734: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x151734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151738: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x151738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15173c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x15173Cu;
    {
        const bool branch_taken_0x15173c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15173c) {
            ctx->pc = 0x151760u;
            goto label_151760;
        }
    }
    ctx->pc = 0x151744u;
    // 0x151744: 0x8e03037c  lw          $v1, 0x37C($s0)
    ctx->pc = 0x151744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 892)));
    // 0x151748: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x151748u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x15174c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x15174cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x151750: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x151750u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x151754: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151754u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151758: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x151758u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15175c: 0xe6000634  swc1        $f0, 0x634($s0)
    ctx->pc = 0x15175cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
label_151760:
    // 0x151760: 0x460110a8  max.s       $f2, $f2, $f1
    ctx->pc = 0x151760u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[1]);
label_151764:
    // 0x151764: 0xc6000414  lwc1        $f0, 0x414($s0)
    ctx->pc = 0x151764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151768: 0xc6010634  lwc1        $f1, 0x634($s0)
    ctx->pc = 0x151768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15176c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x15176cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x151770: 0x46000900  add.s       $f4, $f1, $f0
    ctx->pc = 0x151770u;
    ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x151774: 0x16a0000a  bnez        $s5, . + 4 + (0xA << 2)
    ctx->pc = 0x151774u;
    {
        const bool branch_taken_0x151774 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x151778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151774u;
        // 0x151778: 0xe6040634  swc1        $f4, 0x634($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151774) {
            ctx->pc = 0x1517A0u;
            goto label_1517a0;
        }
    }
    ctx->pc = 0x15177Cu;
    // 0x15177c: 0xc60203b8  lwc1        $f2, 0x3B8($s0)
    ctx->pc = 0x15177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151780: 0xc783826c  lwc1        $f3, -0x7D94($gp)
    ctx->pc = 0x151780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151784: 0xc6010620  lwc1        $f1, 0x620($s0)
    ctx->pc = 0x151784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151788: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x151788u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x15178c: 0xc7808270  lwc1        $f0, -0x7D90($gp)
    ctx->pc = 0x15178cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151790: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x151790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x151794: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x151794u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x151798: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x151798u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15179c: 0xe6010620  swc1        $f1, 0x620($s0)
    ctx->pc = 0x15179cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
label_1517a0:
    // 0x1517a0: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x1517a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x1517a4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1517a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1517a8: 0xc7818274  lwc1        $f1, -0x7D8C($gp)
    ctx->pc = 0x1517a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1517ac: 0x24a5f640  addiu       $a1, $a1, -0x9C0
    ctx->pc = 0x1517acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964800));
    // 0x1517b0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1517b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1517b4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x1517b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1517b8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1517b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1517bc: 0x4601a842  mul.s       $f1, $f21, $f1
    ctx->pc = 0x1517bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x1517c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1517c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1517c4: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x1517c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x1517c8: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x1517c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x1517cc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1517ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1517d0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1517d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1517d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1517d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1517d8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1517d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1517dc: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1517dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1517e0: 0xc6050624  lwc1        $f5, 0x624($s0)
    ctx->pc = 0x1517e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1517e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1517e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1517e8: 0xc7828278  lwc1        $f2, -0x7D88($gp)
    ctx->pc = 0x1517e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1517ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1517ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1517f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1517f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1517f4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1517f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1517f8: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1517f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x1517fc: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1517fcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x151800: 0xc781827c  lwc1        $f1, -0x7D84($gp)
    ctx->pc = 0x151800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x151804: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x151804u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x151808: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15180c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x15180cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x151810: 0xc6030628  lwc1        $f3, 0x628($s0)
    ctx->pc = 0x151810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151814: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x151814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x151818: 0xc7848280  lwc1        $f4, -0x7D80($gp)
    ctx->pc = 0x151818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15181c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x15181cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x151820: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x151820u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x151824: 0xc6000620  lwc1        $f0, 0x620($s0)
    ctx->pc = 0x151824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151828: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x151828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x15182c: 0xc6040414  lwc1        $f4, 0x414($s0)
    ctx->pc = 0x15182cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x151830: 0xc7868284  lwc1        $f6, -0x7D7C($gp)
    ctx->pc = 0x151830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x151834: 0xae000528  sw          $zero, 0x528($s0)
    ctx->pc = 0x151834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1320), GPR_U32(ctx, 0));
    // 0x151838: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x151838u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x15183c: 0xe6050624  swc1        $f5, 0x624($s0)
    ctx->pc = 0x15183cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1572), bits); }
    // 0x151840: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x151840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x151844: 0xae000438  sw          $zero, 0x438($s0)
    ctx->pc = 0x151844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1080), GPR_U32(ctx, 0));
    // 0x151848: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x151848u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x15184c: 0xae000488  sw          $zero, 0x488($s0)
    ctx->pc = 0x15184cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1160), GPR_U32(ctx, 0));
    // 0x151850: 0xae0004d8  sw          $zero, 0x4D8($s0)
    ctx->pc = 0x151850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1240), GPR_U32(ctx, 0));
    // 0x151854: 0xe6030628  swc1        $f3, 0x628($s0)
    ctx->pc = 0x151854u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1576), bits); }
    // 0x151858: 0xe6000620  swc1        $f0, 0x620($s0)
    ctx->pc = 0x151858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1568), bits); }
    // 0x15185c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15185Cu;
    {
        const bool branch_taken_0x15185c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15185Cu;
        // 0x151860: 0xe6040414  swc1        $f4, 0x414($s0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1044), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15185c) {
            ctx->pc = 0x15186Cu;
            goto label_15186c;
        }
    }
    ctx->pc = 0x151864u;
    // 0x151864: 0x0  nop
    ctx->pc = 0x151864u;
    // NOP
label_151868:
    // 0x151868: 0xe6000634  swc1        $f0, 0x634($s0)
    ctx->pc = 0x151868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1588), bits); }
label_15186c:
    // 0x15186c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x15186cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151870: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x151870u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x151874: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x151874u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151878: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x151878u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x15187c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x15187cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x151880: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x151880u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x151884: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x151884u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x151888: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x151888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x15188c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x15188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x151890: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x151890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x151894: 0x3e00008  jr          $ra
    ctx->pc = 0x151894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151894u;
        // 0x151898: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15189Cu;
}
