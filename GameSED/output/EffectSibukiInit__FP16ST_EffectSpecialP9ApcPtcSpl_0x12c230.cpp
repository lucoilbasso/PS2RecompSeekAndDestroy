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

// Function: EffectSibukiInit__FP16ST_EffectSpecialP9ApcPtcSpl
// Address: 0x12c230 - 0x12c2f4
void EffectSibukiInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x12c230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffectSibukiInit__FP16ST_EffectSpecialP9ApcPtcSpl_0x12c230");
#endif

    switch (ctx->pc) {
        case 0x12c268u: goto label_12c268;
        default: break;
    }

    ctx->pc = 0x12c230u;

    // 0x12c230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c234: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c238: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c23c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c240: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x12c240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x12c244: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c248: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12c248u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c24c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c250: 0x263001b0  addiu       $s0, $s1, 0x1B0
    ctx->pc = 0x12c250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
    // 0x12c254: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x12c254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x12c258: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x12c258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x12c25c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12c260: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C260u;
    SET_GPR_U32(ctx, 31, 0x12C268u);
    ctx->pc = 0x12C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C260u;
    // 0x12c264: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C260u, 0x12C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C268u;
label_12c268:
    // 0x12c268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12c268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c26c: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12C26Cu;
    {
        const bool branch_taken_0x12c26c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c26c) {
            ctx->pc = 0x12C270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C26Cu;
            // 0x12c270: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C2A8u;
            goto label_12c2a8;
        }
    }
    ctx->pc = 0x12C274u;
    // 0x12c274: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12c274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12c278: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c278u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c27c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c27cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c280: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c280u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c288: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x12c288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x12c28c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12c28cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12c290: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c290u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c294: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c294u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c298: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c298u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c2a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12C2A0u;
    {
        const bool branch_taken_0x12c2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2A0u;
        // 0x12c2a4: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2a0) {
            ctx->pc = 0x12C2ACu;
            goto label_12c2ac;
        }
    }
    ctx->pc = 0x12C2A8u;
label_12c2a8:
    // 0x12c2a8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x12c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_12c2ac:
    // 0x12c2ac: 0x8e2400f4  lw          $a0, 0xF4($s1)
    ctx->pc = 0x12c2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x12c2b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x12c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x12c2b4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c2b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c2b8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c2b8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c2bc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c2bcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c2c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c2c4: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x12c2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x12c2c8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12c2cc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12c2ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12c2d0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12c2d0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12c2d4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12c2d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12c2d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12c2d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c2dc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x12c2dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x12c2e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c2e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c2e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c2ec: 0x3e00008  jr          $ra
    ctx->pc = 0x12C2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2ECu;
        // 0x12c2f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C2F4u;
}
