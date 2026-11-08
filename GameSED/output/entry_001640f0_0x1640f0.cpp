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

// Function: entry_001640f0
// Address: 0x1640f0 - 0x16419c
void entry_001640f0_0x1640f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001640f0_0x1640f0");
#endif

    ctx->pc = 0x1640f0u;

    // 0x1640f0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1640f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1640f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1640f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1640f8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1640f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1640fc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1640fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x164100: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164100u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164104: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x164104u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164108: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164108u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16410c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16410cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164110: 0xc7818354  lwc1        $f1, -0x7CAC($gp)
    ctx->pc = 0x164110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164114: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x164114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x164118: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x164118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x16411c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16411cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x164120: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x164120u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x164124: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x164124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x164128: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x164128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16412c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x16412cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164130: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x164130u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164134: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164134u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164138: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16413c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16413cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x164140: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x164140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x164144: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x164144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x164148: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x164148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x16414c: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x16414cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x164150: 0xafa40024  sw          $a0, 0x24($sp)
    ctx->pc = 0x164150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
    // 0x164154: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x164154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x164158: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164158u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x16415c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x16415cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x164160: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x164160u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164164: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164164u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164168: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x164168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16416c: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x16416cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x164170: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x164170u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x164174: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x164174u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x164178: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x164178u;
    {
        const bool branch_taken_0x164178 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x16417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164178u;
        // 0x16417c: 0x8ea21ab0  lw          $v0, 0x1AB0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164178) {
            ctx->pc = 0x16419Cu;
            return;
        }
    }
    ctx->pc = 0x164180u;
    // 0x164180: 0xaea41aa8  sw          $a0, 0x1AA8($s5)
    ctx->pc = 0x164180u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6824), GPR_U32(ctx, 4));
    // 0x164184: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x164184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x164188: 0xaea21ab0  sw          $v0, 0x1AB0($s5)
    ctx->pc = 0x164188u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 6832), GPR_U32(ctx, 2));
    // 0x16418c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x16418cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x164190: 0x46100ad  bgez        $v1, . + 4 + (0xAD << 2)
    ctx->pc = 0x164190u;
    {
        const bool branch_taken_0x164190 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x164194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164190u;
        // 0x164194: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164190) {
            ctx->pc = 0x164448u;
            return;
        }
    }
    ctx->pc = 0x164198u;
    // 0x164198: 0x8ea21ab0  lw          $v0, 0x1AB0($s5)
    ctx->pc = 0x164198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 6832)));
    ctx->pc = 0x16419cu;
}
