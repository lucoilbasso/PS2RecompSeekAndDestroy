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

// Function: entry_0012a814
// Address: 0x12a814 - 0x12a858
void entry_0012a814_0x12a814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a814_0x12a814");
#endif

    ctx->pc = 0x12a814u;

    // 0x12a814: 0xa62201b8  sh          $v0, 0x1B8($s1)
    ctx->pc = 0x12a814u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 440), (uint16_t)GPR_U32(ctx, 2));
    // 0x12a818: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x12a818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12a81c: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x12a81cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12a820: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x12a820u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12a824: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x12a824u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12a828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12a828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a82c: 0xe62001f8  swc1        $f0, 0x1F8($s1)
    ctx->pc = 0x12a82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 504), bits); }
    // 0x12a830: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x12a830u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a834: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x12a834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
    // 0x12a838: 0x24640170  addiu       $a0, $v1, 0x170
    ctx->pc = 0x12a838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 368));
    // 0x12a83c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x12a83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x12a840: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12a840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a844: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x12a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12a848: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12a848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a84c: 0x246305f0  addiu       $v1, $v1, 0x5F0
    ctx->pc = 0x12a84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1520));
    // 0x12a850: 0xae2201a4  sw          $v0, 0x1A4($s1)
    ctx->pc = 0x12a850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 2));
    // 0x12a854: 0x0  nop
    ctx->pc = 0x12a854u;
    // NOP
    ctx->pc = 0x12a858u;
}
