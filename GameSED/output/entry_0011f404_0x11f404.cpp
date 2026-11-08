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

// Function: entry_0011f404
// Address: 0x11f404 - 0x11f498
void entry_0011f404_0x11f404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f404_0x11f404");
#endif

    ctx->pc = 0x11f404u;

    // 0x11f404: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x11f404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x11f408: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x11f408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x11f40c: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x11f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
    // 0x11f410: 0xffbf0190  sd          $ra, 0x190($sp)
    ctx->pc = 0x11f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 31));
    // 0x11f414: 0xe7b801b8  swc1        $f24, 0x1B8($sp)
    ctx->pc = 0x11f414u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x11f418: 0xe7b701b0  swc1        $f23, 0x1B0($sp)
    ctx->pc = 0x11f418u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x11f41c: 0xe7b601a8  swc1        $f22, 0x1A8($sp)
    ctx->pc = 0x11f41cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x11f420: 0xe7b40198  swc1        $f20, 0x198($sp)
    ctx->pc = 0x11f420u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x11f424: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x11f424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11f428: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x11f428u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x11f42c: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f42cu;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f430: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f430u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f434: 0x4482c000  mtc1        $v0, $f24
    ctx->pc = 0x11f434u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x11f438: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x11f438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11f43c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f43cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f440: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f440u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f444: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f444u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f448: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x11f448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x11f44c: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x11f44cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x11f450: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x11f450u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x11f454: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f454u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f458: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f458u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f45c: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x11f45cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x11f460: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x11f460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x11f464: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x11f464u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11f468: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x11f468u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x11f46c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x11f46cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x11f470: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x11f470u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x11f474: 0x8c960018  lw          $s6, 0x18($a0)
    ctx->pc = 0x11f474u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x11f478: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x11f478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x11f47c: 0x8c950008  lw          $s5, 0x8($a0)
    ctx->pc = 0x11f47cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11f480: 0x24514a30  addiu       $s1, $v0, 0x4A30
    ctx->pc = 0x11f480u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 18992));
    // 0x11f484: 0x8c940010  lw          $s4, 0x10($a0)
    ctx->pc = 0x11f484u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11f488: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11f488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f48c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x11f48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11f490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f494: 0x0  nop
    ctx->pc = 0x11f494u;
    // NOP
    ctx->pc = 0x11f498u;
}
