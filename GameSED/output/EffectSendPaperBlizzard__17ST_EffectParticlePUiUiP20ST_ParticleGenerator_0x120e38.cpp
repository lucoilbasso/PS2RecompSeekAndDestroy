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

// Function: EffectSendPaperBlizzard__17ST_EffectParticlePUiUiP20ST_ParticleGenerator
// Address: 0x120e38 - 0x120fb8
void EffectSendPaperBlizzard__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x120e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSendPaperBlizzard__17ST_EffectParticlePUiUiP20ST_ParticleGenerator_0x120e38");
#endif

    switch (ctx->pc) {
        case 0x120ed0u: goto label_120ed0;
        case 0x120ed8u: goto label_120ed8;
        case 0x120ee4u: goto label_120ee4;
        case 0x120f08u: goto label_120f08;
        default: break;
    }

    ctx->pc = 0x120e38u;

    // 0x120e38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x120e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x120e3c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x120e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x120e40: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x120e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e44: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x120e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x120e48: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x120e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x120e4c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x120e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x120e50: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x120e50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120e54: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x120e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x120e58: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x120e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x120e5c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x120e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x120e60: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x120e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x120e64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x120e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x120e68: 0xe7b60078  swc1        $f22, 0x78($sp)
    ctx->pc = 0x120e68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x120e6c: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x120e6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x120e70: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x120e70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x120e74: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x120e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x120e78: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x120e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x120e7c: 0x29842  srl         $s3, $v0, 1
    ctx->pc = 0x120e7cu;
    SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x120e80: 0x39042  srl         $s2, $v1, 1
    ctx->pc = 0x120e80u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x120e84: 0x48b22000  qmtc2.ni    $s2, $vf4
    ctx->pc = 0x120e84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 18));
    // 0x120e88: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x120e88u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120e8c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x120e8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x120e90: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x120e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x120e94: 0x48b32000  qmtc2.ni    $s3, $vf4
    ctx->pc = 0x120e94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 19));
    // 0x120e98: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x120e98u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120e9c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x120e9cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x120ea0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x120ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x120ea4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x120ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x120ea8: 0x24630790  addiu       $v1, $v1, 0x790
    ctx->pc = 0x120ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1936));
    // 0x120eac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x120eacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x410790u));
    // 0x120eb0: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x120EB0u;
    {
        const bool branch_taken_0x120eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120EB0u;
        // 0x120eb4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120eb0) {
            ctx->pc = 0x120F84u;
            goto label_120f84;
        }
    }
    ctx->pc = 0x120EB8u;
    // 0x120eb8: 0x12c00032  beqz        $s6, . + 4 + (0x32 << 2)
    ctx->pc = 0x120EB8u;
    {
        const bool branch_taken_0x120eb8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x120EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120EB8u;
        // 0x120ebc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120eb8) {
            ctx->pc = 0x120F84u;
            goto label_120f84;
        }
    }
    ctx->pc = 0x120EC0u;
    // 0x120ec0: 0xc79680a4  lwc1        $f22, -0x7F5C($gp)
    ctx->pc = 0x120ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x120ec4: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x120ec4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ec8: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x120ec8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x120ecc: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x120eccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_120ed0:
    // 0x120ed0: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x120ED0u;
    SET_GPR_U32(ctx, 31, 0x120ED8u);
    ctx->pc = 0x120ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120ED0u;
    // 0x120ed4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x120ED0u, 0x120ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120ED8u;
label_120ed8:
    // 0x120ed8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x120ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120edc: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x120EDCu;
    SET_GPR_U32(ctx, 31, 0x120EE4u);
    ctx->pc = 0x120EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120EDCu;
    // 0x120ee0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x120EDCu, 0x120EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120EE4u;
label_120ee4:
    // 0x120ee4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x120ee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120ee8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x120ee8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120eec: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x120eecu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120ef0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x120ef0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x120ef4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x120ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120ef8: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x120ef8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x120efc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x120efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f00: 0xc066f72  jal         func_19BDC8
    ctx->pc = 0x120F00u;
    SET_GPR_U32(ctx, 31, 0x120F08u);
    ctx->pc = 0x120F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120F00u;
    // 0x120f04: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BDC8u, 0x120F00u, 0x120F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120F08u;
label_120f08:
    // 0x120f08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x120f08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120f0c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x120f0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x120f10: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x120f10u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x120f14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x120f14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x120f18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x120f18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120f1c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x120f1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x120f20: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x120f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x120f24: 0xe7b60014  swc1        $f22, 0x14($sp)
    ctx->pc = 0x120f24u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x120f28: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x120f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x120f2c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x120f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x120f30: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x120f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x120f34: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x120f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x120f38: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x120f38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x120f3c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x120f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x120f40: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x120f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x120f44: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x120f44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x120f48: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x120f48u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120f4c: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x120f50: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x120f50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x120f54: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x120f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x120f58: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x120f58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x120f5c: 0x2b6202b  sltu        $a0, $s5, $s6
    ctx->pc = 0x120f5cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x120f60: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x120f60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x120f64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x120f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x120f68: 0x2c430004  sltiu       $v1, $v0, 0x4
    ctx->pc = 0x120f68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x120f6c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x120F6Cu;
    {
        const bool branch_taken_0x120f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x120F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120F6Cu;
        // 0x120f70: 0xae22011c  sw          $v0, 0x11C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120f6c) {
            ctx->pc = 0x120F78u;
            goto label_120f78;
        }
    }
    ctx->pc = 0x120F74u;
    // 0x120f74: 0xae20011c  sw          $zero, 0x11C($s1)
    ctx->pc = 0x120f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
label_120f78:
    // 0x120f78: 0x5480ffd5  bnel        $a0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x120F78u;
    {
        const bool branch_taken_0x120f78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x120f78) {
            ctx->pc = 0x120F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x120F78u;
            // 0x120f7c: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120ed0;
        }
    }
    ctx->pc = 0x120F80u;
    // 0x120f80: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x120f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_120f84:
    // 0x120f84: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x120f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x120f88: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x120f88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x120f8c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x120f8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x120f90: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x120f90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120f94: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x120f94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x120f98: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x120f98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x120f9c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x120f9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x120fa0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x120fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x120fa4: 0xc7b60078  lwc1        $f22, 0x78($sp)
    ctx->pc = 0x120fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x120fa8: 0xc7b50070  lwc1        $f21, 0x70($sp)
    ctx->pc = 0x120fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x120fac: 0xc7b40068  lwc1        $f20, 0x68($sp)
    ctx->pc = 0x120facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x120fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x120FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120FB0u;
        // 0x120fb4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120FB8u;
}
