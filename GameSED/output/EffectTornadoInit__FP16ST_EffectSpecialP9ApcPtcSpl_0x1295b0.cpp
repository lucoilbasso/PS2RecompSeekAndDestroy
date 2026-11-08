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

// Function: EffectTornadoInit__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x1295b0 - 0x1296cc
void EffectTornadoInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x1295b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectTornadoInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x1295b0");
#endif

    switch (ctx->pc) {
        case 0x1295d4u: goto label_1295d4;
        default: break;
    }

    ctx->pc = 0x1295b0u;

    // 0x1295b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1295b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1295b4: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1295b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1295b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1295b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1295bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1295bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1295c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1295c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1295c4: 0x261101b0  addiu       $s1, $s0, 0x1B0
    ctx->pc = 0x1295c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x1295c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1295c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1295cc: 0xc04844a  jal         func_121128
    ctx->pc = 0x1295CCu;
    SET_GPR_U32(ctx, 31, 0x1295D4u);
    ctx->pc = 0x1295D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1295CCu;
    // 0x1295d0: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x1295CCu, 0x1295D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1295D4u;
label_1295d4:
    // 0x1295d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1295d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1295d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1295d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1295dc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1295dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1295e0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1295e0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1295e4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1295e4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1295e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1295e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1295ec: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x1295ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1295f0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1295f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1295f4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1295f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1295f8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1295f8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1295fc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1295fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x129600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129604: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x129604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x129608: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x129608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12960c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12960cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x129610: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x129610u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x129614: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x129614u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x129618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12961c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x12961cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x129620: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x129620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x129624: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x129624u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x129628: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x129628u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12962c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12962cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x129630: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129634: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x129634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x129638: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x129638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12963c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12963cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x129640: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x129640u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x129644: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x129644u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x129648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12964c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x12964cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x129650: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x129650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x129654: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x129654u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x129658: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x129658u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12965c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12965cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x129660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129664: 0x8e0400f4  lw          $a0, 0xF4($s0)
    ctx->pc = 0x129664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x129668: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x129668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x12966c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x12966Cu;
    {
        const bool branch_taken_0x12966c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x129670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12966Cu;
        // 0x129670: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12966c) {
            ctx->pc = 0x1296A8u;
            goto label_1296a8;
        }
    }
    ctx->pc = 0x129674u;
    // 0x129674: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x129674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x129678: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x129678u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12967c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12967cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x129680: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x129680u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x129684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x129684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x129688: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x129688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x12968c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12968cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x129690: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x129690u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x129694: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x129694u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x129698: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x129698u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12969c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12969cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1296a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1296A0u;
    {
        const bool branch_taken_0x1296a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1296A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296A0u;
        // 0x1296a4: 0xe6200020  swc1        $f0, 0x20($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1296a0) {
            ctx->pc = 0x1296B8u;
            goto label_1296b8;
        }
    }
    ctx->pc = 0x1296A8u;
label_1296a8:
    // 0x1296a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1296a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1296ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1296acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1296b0: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1296b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1296b4: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1296b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_1296b8:
    // 0x1296b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1296b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1296bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1296bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1296c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1296c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1296c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1296C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1296C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1296C4u;
        // 0x1296c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1296C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1296CCu;
}
