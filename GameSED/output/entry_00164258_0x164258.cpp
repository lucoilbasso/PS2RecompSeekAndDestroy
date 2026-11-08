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

// Function: entry_00164258
// Address: 0x164258 - 0x1642e8
void entry_00164258_0x164258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164258_0x164258");
#endif

    ctx->pc = 0x164258u;

    // 0x164258: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x164258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16425c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x16425cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x164260: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x164260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x164264: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164264u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164268: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x164268u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16426c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16426cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164274: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x164274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x164278: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x164278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x16427c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x16427cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x164280: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x164280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164284: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x164284u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x164288: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x164288u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16428c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16428cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x164290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x164290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164294: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x164294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x164298: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x164298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x16429c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16429cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1642a0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1642a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1642a4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1642a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1642a8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1642a8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1642ac: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1642acu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1642b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1642b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1642b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1642b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1642b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1642b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1642bc: 0x26a41a90  addiu       $a0, $s5, 0x1A90
    ctx->pc = 0x1642bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 6800));
    // 0x1642c0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1642c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1642c4: 0x26a31a80  addiu       $v1, $s5, 0x1A80
    ctx->pc = 0x1642c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 6784));
    // 0x1642c8: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x1642c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1642cc: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1642ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1642d0: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1642d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1642d4: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1642d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1642d8: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1642d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1642dc: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1642dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1642e0: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1642E0u;
    {
        const bool branch_taken_0x1642e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1642E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642E0u;
        // 0x1642e4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1642e0) {
            ctx->pc = 0x164448u;
            return;
        }
    }
    ctx->pc = 0x1642E8u;
}
