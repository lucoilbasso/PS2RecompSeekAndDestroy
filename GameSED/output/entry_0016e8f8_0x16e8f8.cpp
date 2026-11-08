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

// Function: entry_0016e8f8
// Address: 0x16e8f8 - 0x16e934
void entry_0016e8f8_0x16e8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e8f8_0x16e8f8");
#endif

    ctx->pc = 0x16e8f8u;

    // 0x16e8f8: 0xc78084f8  lwc1        $f0, -0x7B08($gp)
    ctx->pc = 0x16e8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16e8fc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x16e8fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e900: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16e900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16e904: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x16e904u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16e908: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x16e908u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16e90c: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x16e90cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16e910: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x16e910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16e914: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x16e914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16e918: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16E918u;
    {
        const bool branch_taken_0x16e918 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e918) {
            ctx->pc = 0x16E934u;
            return;
        }
    }
    ctx->pc = 0x16E920u;
    // 0x16e920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16e920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16e924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16e924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16e928: 0x46000828  max.s       $f0, $f1, $f0
    ctx->pc = 0x16e928u;
    ctx->f[0] = std::max(ctx->f[1], ctx->f[0]);
    // 0x16e92c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x16e92cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x16e930: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x16e930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x16e934u;
}
