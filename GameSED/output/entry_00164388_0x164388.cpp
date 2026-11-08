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

// Function: entry_00164388
// Address: 0x164388 - 0x164438
void entry_00164388_0x164388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164388_0x164388");
#endif

    ctx->pc = 0x164388u;

    // 0x164388: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x164388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16438c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x16438cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164390: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x164390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x164394: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x164394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164398: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x164398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x16439c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x16439cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1643a0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1643a0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1643a4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1643a4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1643a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1643a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1643ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1643acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1643b0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1643b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1643b4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1643b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1643b8: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1643b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1643bc: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1643bcu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1643c0: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1643c0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1643c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1643c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1643c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1643c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1643cc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1643ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1643d0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1643d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1643d4: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1643d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1643d8: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1643d8u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1643dc: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1643dcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1643e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1643e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1643e4: 0x8ea301b4  lw          $v1, 0x1B4($s5)
    ctx->pc = 0x1643e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
    // 0x1643e8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1643e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1643ec: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1643ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1643f0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1643f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1643f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1643f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1643f8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1643f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1643fc: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1643fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164400: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x164400u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164404: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x164404u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x164408: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x164408u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16440c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x16440cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x164410: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x164410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164414: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x164414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x164418: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x164418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16441c: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x16441cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x164420: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x164420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x164424: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x164424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x164428: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x164428u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x16442c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x16442cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x164430: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x164430u;
    {
        const bool branch_taken_0x164430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164430u;
        // 0x164434: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164430) {
            ctx->pc = 0x164444u;
            return;
        }
    }
    ctx->pc = 0x164438u;
}
