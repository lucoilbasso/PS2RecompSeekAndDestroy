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

// Function: entry_00190884
// Address: 0x190884 - 0x1908c8
void entry_00190884_0x190884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190884_0x190884");
#endif

    ctx->pc = 0x190884u;

    // 0x190884: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x190884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x190888: 0x2484de00  addiu       $a0, $a0, -0x2200
    ctx->pc = 0x190888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958592));
    // 0x19088c: 0x46000507  neg.s       $f20, $f0
    ctx->pc = 0x19088cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[0]);
    // 0x190890: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x190890u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190894: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x190894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x190898: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x190898u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19089c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19089cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1908a0: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1908a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1908a4: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x1908a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
    // 0x1908a8: 0x2463de10  addiu       $v1, $v1, -0x21F0
    ctx->pc = 0x1908a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958608));
    // 0x1908ac: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1908acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1908b0: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1908b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1908b4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1908b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1908b8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1908b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1908bc: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1908bcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1908c0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1908c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1908c4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1908c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1908c8u;
}
