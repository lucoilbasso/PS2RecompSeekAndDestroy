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

// Function: entry_0011f74c
// Address: 0x11f74c - 0x11f7d0
void entry_0011f74c_0x11f74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f74c_0x11f74c");
#endif

    ctx->pc = 0x11f74cu;

    // 0x11f74c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x11f74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x11f750: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x11f750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x11f754: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x11f754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x11f758: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x11f758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x11f75c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x11f75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x11f760: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x11f760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x11f764: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x11f764u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x11f768: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x11f768u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x11f76c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x11f76cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x11f770: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x11f770u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x11f774: 0x8e570010  lw          $s7, 0x10($s2)
    ctx->pc = 0x11f774u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x11f778: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x11f778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11f77c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f77cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f780: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f780u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f784: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f784u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f788: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x11f788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x11f78c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x11f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x11f790: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x11f790u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x11f794: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f794u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f798: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f798u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f79c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x11f79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x11f7a0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x11f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x11f7a4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f7a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f7a8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f7a8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f7ac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f7acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f7b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x11f7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f7b4: 0x4616b040  add.s       $f1, $f22, $f22
    ctx->pc = 0x11f7b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x11f7b8: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x11f7b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f7bc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x11F7BCu;
    {
        const bool branch_taken_0x11f7bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7BCu;
        // 0x11f7c0: 0x460005c7  neg.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7bc) {
            ctx->pc = 0x11F7D0u;
            return;
        }
    }
    ctx->pc = 0x11F7C4u;
    // 0x11f7c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11F7C4u;
    {
        const bool branch_taken_0x11f7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F7C4u;
        // 0x11f7c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7c4) {
            ctx->pc = 0x11F7E0u;
            return;
        }
    }
    ctx->pc = 0x11F7CCu;
    // 0x11f7cc: 0x0  nop
    ctx->pc = 0x11f7ccu;
    // NOP
    ctx->pc = 0x11f7d0u;
}
