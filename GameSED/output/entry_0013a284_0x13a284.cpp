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

// Function: entry_0013a284
// Address: 0x13a284 - 0x13a2b8
void entry_0013a284_0x13a284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a284_0x13a284");
#endif

    ctx->pc = 0x13a284u;

    // 0x13a284: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x13a284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13a288: 0x26840150  addiu       $a0, $s4, 0x150
    ctx->pc = 0x13a288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    // 0x13a28c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13a28cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13a290: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x13a290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13a294: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13a294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13a298: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x13a298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13a29c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x13a29cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a2a0: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13a2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a2a4: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x13a2a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13a2a8: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x13a2a8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a2ac: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x13a2acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a2b0: 0xfaa20000  sqc2        $vf2, 0x0($s5)
    ctx->pc = 0x13a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13a2b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13a2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x13a2b8u;
}
