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

// Function: entry_001641b0
// Address: 0x1641b0 - 0x164240
void entry_001641b0_0x1641b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001641b0_0x1641b0");
#endif

    ctx->pc = 0x1641b0u;

    // 0x1641b0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1641b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1641b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1641b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1641b8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1641b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1641bc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1641bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1641c0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1641c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1641c4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1641c4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1641c8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1641c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1641cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1641ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1641d0: 0xc7818358  lwc1        $f1, -0x7CA8($gp)
    ctx->pc = 0x1641d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1641d4: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x1641d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1641d8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1641d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1641dc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1641dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1641e0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1641e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x1641e4: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1641e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1641e8: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1641e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1641ec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1641ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1641f0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1641f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1641f4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1641f4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1641f8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1641f8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1641fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1641fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164200: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x164204: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x164204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x164208: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x164208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16420c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16420cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x164210: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x164210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x164214: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x164214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x164218: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164218u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16421c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16421cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164220: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164220u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164228: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16422c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x16422cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x164230: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x164230u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x164234: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x164234u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x164238: 0x5cc00001  bgtzl       $a2, . + 4 + (0x1 << 2)
    ctx->pc = 0x164238u;
    {
        const bool branch_taken_0x164238 = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x164238) {
            ctx->pc = 0x16423Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164238u;
            // 0x16423c: 0xaea61aa0  sw          $a2, 0x1AA0($s5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 21), 6816), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164240u;
            return;
        }
    }
    ctx->pc = 0x164240u;
}
