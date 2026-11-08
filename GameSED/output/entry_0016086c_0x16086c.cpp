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

// Function: entry_0016086c
// Address: 0x16086c - 0x160950
void entry_0016086c_0x16086c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016086c_0x16086c");
#endif

    ctx->pc = 0x16086cu;

    // 0x16086c: 0x2723823  subu        $a3, $s3, $s2
    ctx->pc = 0x16086cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x160870: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x160870u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x160874: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x160874u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x160878: 0x94490204  lhu         $t1, 0x204($v0)
    ctx->pc = 0x160878u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 516)));
    // 0x16087c: 0x24460150  addiu       $a2, $v0, 0x150
    ctx->pc = 0x16087cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x160880: 0x94440206  lhu         $a0, 0x206($v0)
    ctx->pc = 0x160880u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 518)));
    // 0x160884: 0x35082000  ori         $t0, $t0, 0x2000
    ctx->pc = 0x160884u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8192);
    // 0x160888: 0x92c00  sll         $a1, $t1, 16
    ctx->pc = 0x160888u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x16088c: 0x844c01a6  lh          $t4, 0x1A6($v0)
    ctx->pc = 0x16088cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 422)));
    // 0x160890: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x160890u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x160894: 0x844a01a4  lh          $t2, 0x1A4($v0)
    ctx->pc = 0x160894u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 420)));
    // 0x160898: 0x94cb0008  lhu         $t3, 0x8($a2)
    ctx->pc = 0x160898u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x16089c: 0x51bc0  sll         $v1, $a1, 15
    ctx->pc = 0x16089cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x1608a0: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1608a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1608a4: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x1608a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x1608a8: 0xae080010  sw          $t0, 0x10($s0)
    ctx->pc = 0x1608a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 8));
    // 0x1608ac: 0x1631807  srav        $v1, $v1, $t3
    ctx->pc = 0x1608acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 11) & 0x1F));
    // 0x1608b0: 0xa4c90050  sh          $t1, 0x50($a2)
    ctx->pc = 0x1608b0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 80), (uint16_t)GPR_U32(ctx, 9));
    // 0x1608b4: 0xa4c40052  sh          $a0, 0x52($a2)
    ctx->pc = 0x1608b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 82), (uint16_t)GPR_U32(ctx, 4));
    // 0x1608b8: 0xa4ca0054  sh          $t2, 0x54($a2)
    ctx->pc = 0x1608b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 84), (uint16_t)GPR_U32(ctx, 10));
    // 0x1608bc: 0xa4cc0056  sh          $t4, 0x56($a2)
    ctx->pc = 0x1608bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 86), (uint16_t)GPR_U32(ctx, 12));
    // 0x1608c0: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1608c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1608c4: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1608c4u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1608c8: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1608c8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1608cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1608ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1608d0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1608d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1608d4: 0x94c7000a  lhu         $a3, 0xA($a2)
    ctx->pc = 0x1608d4u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 10)));
    // 0x1608d8: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x1608d8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x1608dc: 0xe4c00060  swc1        $f0, 0x60($a2)
    ctx->pc = 0x1608dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 96), bits); }
    // 0x1608e0: 0x41bc0  sll         $v1, $a0, 15
    ctx->pc = 0x1608e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x1608e4: 0x24634000  addiu       $v1, $v1, 0x4000
    ctx->pc = 0x1608e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16384));
    // 0x1608e8: 0xe31807  srav        $v1, $v1, $a3
    ctx->pc = 0x1608e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 7) & 0x1F));
    // 0x1608ec: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1608ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1608f0: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1608f0u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1608f4: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1608f4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1608f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1608f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1608fc: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x1608fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x160900: 0xe4c00064  swc1        $f0, 0x64($a2)
    ctx->pc = 0x160900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
    // 0x160904: 0x52bc0  sll         $a1, $a1, 15
    ctx->pc = 0x160904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 15));
    // 0x160908: 0x24a5c000  addiu       $a1, $a1, -0x4000
    ctx->pc = 0x160908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950912));
    // 0x16090c: 0x1652807  srav        $a1, $a1, $t3
    ctx->pc = 0x16090cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 11) & 0x1F));
    // 0x160910: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x160910u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x160914: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x160914u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x160918: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x160918u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x16091c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16091cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160920: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x160920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x160924: 0xe4c00068  swc1        $f0, 0x68($a2)
    ctx->pc = 0x160924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 104), bits); }
    // 0x160928: 0x423c0  sll         $a0, $a0, 15
    ctx->pc = 0x160928u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 15));
    // 0x16092c: 0x2484c000  addiu       $a0, $a0, -0x4000
    ctx->pc = 0x16092cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950912));
    // 0x160930: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x160930u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
    // 0x160934: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x160934u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x160938: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x160938u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x16093c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x16093cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x160940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160944: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x160944u;
    {
        const bool branch_taken_0x160944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160944u;
        // 0x160948: 0xe4c0006c  swc1        $f0, 0x6C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160944) {
            ctx->pc = 0x160A38u;
            return;
        }
    }
    ctx->pc = 0x16094Cu;
    // 0x16094c: 0x0  nop
    ctx->pc = 0x16094cu;
    // NOP
    ctx->pc = 0x160950u;
}
