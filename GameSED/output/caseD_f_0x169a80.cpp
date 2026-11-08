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

// Function: caseD_f
// Address: 0x169a80 - 0x169b10
void caseD_f_0x169a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_f_0x169a80");
#endif

    ctx->pc = 0x169a80u;

    // 0x169a80: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x169a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169a84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169a88: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x169a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169a8c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169a90: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169a90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169a94: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169a94u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169a98: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169a98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169a9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169aa0: 0xc7818464  lwc1        $f1, -0x7B9C($gp)
    ctx->pc = 0x169aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169aa4: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x169aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x169aa8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x169aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x169aac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x169aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169ab0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169ab0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x169ab4: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x169ab4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x169ab8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x169ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x169abc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169abcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169ac0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169ac0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169ac4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169ac4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169ac8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169ac8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169acc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x169accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169ad0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x169ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x169ad4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x169ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x169ad8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169ad8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x169adc: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x169adcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x169ae0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x169ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x169ae4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x169ae4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x169ae8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x169ae8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x169aec: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x169aecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x169af0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x169af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169af4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x169af4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x169af8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x169af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x169afc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169afcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x169b00: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x169b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x169b04: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x169B04u;
    {
        const bool branch_taken_0x169b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169B04u;
        // 0x169b08: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169b04) {
            ctx->pc = 0x16A080u;
            return;
        }
    }
    ctx->pc = 0x169B0Cu;
    // 0x169b0c: 0x0  nop
    ctx->pc = 0x169b0cu;
    // NOP
    ctx->pc = 0x169b10u;
}
