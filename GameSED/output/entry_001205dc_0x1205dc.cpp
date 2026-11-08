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

// Function: entry_001205dc
// Address: 0x1205dc - 0x120610
void entry_001205dc_0x1205dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001205dc_0x1205dc");
#endif

    ctx->pc = 0x1205dcu;

    // 0x1205dc: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x1205dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1205e0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1205E0u;
    {
        const bool branch_taken_0x1205e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1205e0) {
            ctx->pc = 0x120610u;
            return;
        }
    }
    ctx->pc = 0x1205E8u;
    // 0x1205e8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x1205e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1205ec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1205ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1205f0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1205f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1205f4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1205f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1205f8: 0xf9210000  sqc2        $vf1, 0x0($t1)
    ctx->pc = 0x1205f8u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1205fc: 0x25030070  addiu       $v1, $t0, 0x70
    ctx->pc = 0x1205fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 112));
    // 0x120600: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x120600u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x120604: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x120604u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x120608: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x120608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x12060c: 0xf8620000  sqc2        $vf2, 0x0($v1)
    ctx->pc = 0x12060cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    ctx->pc = 0x120610u;
}
