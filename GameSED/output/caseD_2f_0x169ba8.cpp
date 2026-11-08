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

// Function: caseD_2f
// Address: 0x169ba8 - 0x169c50
void caseD_2f_0x169ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2f_0x169ba8");
#endif

    ctx->pc = 0x169ba8u;

    // 0x169ba8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169bac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169bb0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169bb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169bb8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169bb8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169bbc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169bbcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169bc0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169bc0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169bc8: 0xc7818468  lwc1        $f1, -0x7B98($gp)
    ctx->pc = 0x169bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169bcc: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x169bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169bd0: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x169bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x169bd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x169bd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169bd8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169bd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x169bdc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x169bdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x169be0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169be4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169be4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169be8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169be8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169bec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169becu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169bf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169bf4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x169bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169bf8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x169bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x169bfc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169c00: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169c00u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x169c04: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x169c04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x169c08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x169c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169c0c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169c0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169c10: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169c10u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169c14: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169c14u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169c18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169c18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169c1c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x169c1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169c20: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x169c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x169c24: 0x26c611b0  addiu       $a2, $s6, 0x11B0
    ctx->pc = 0x169c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 4528));
    // 0x169c28: 0x26c511a0  addiu       $a1, $s6, 0x11A0
    ctx->pc = 0x169c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4512));
    // 0x169c2c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x169c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x169c30: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169c30u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x169c34: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x169c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x169c38: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x169c38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169c3c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x169c3cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169c40: 0x70431008  paddw       $v0, $v0, $v1
    ctx->pc = 0x169c40u;
    SET_GPR_VEC(ctx, 2, PS2_PADDW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x169c44: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x169c44u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x169c48: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x169C48u;
    {
        const bool branch_taken_0x169c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169C48u;
        // 0x169c4c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169c48) {
            ctx->pc = 0x16A080u;
            return;
        }
    }
    ctx->pc = 0x169C50u;
}
