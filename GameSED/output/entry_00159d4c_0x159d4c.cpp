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

// Function: entry_00159d4c
// Address: 0x159d4c - 0x159d8c
void entry_00159d4c_0x159d4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159d4c_0x159d4c");
#endif

    ctx->pc = 0x159d4cu;

    // 0x159d4c: 0x24c30070  addiu       $v1, $a2, 0x70
    ctx->pc = 0x159d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x159d50: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x159d50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x159d54: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x159d54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x159d58: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x159d58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x159d5c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x159d5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x159d60: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x159d60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x159d64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x159d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159d68: 0xc4c00084  lwc1        $f0, 0x84($a2)
    ctx->pc = 0x159d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x159d6c: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x159d6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x159d70: 0xacc80094  sw          $t0, 0x94($a2)
    ctx->pc = 0x159d70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 148), GPR_U32(ctx, 8));
    // 0x159d74: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x159d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159d78: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x159d78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x159d7c: 0xacc5009c  sw          $a1, 0x9C($a2)
    ctx->pc = 0x159d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 156), GPR_U32(ctx, 5));
    // 0x159d80: 0xe4c30098  swc1        $f3, 0x98($a2)
    ctx->pc = 0x159d80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 152), bits); }
    // 0x159d84: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x159d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x159d88: 0xe4c00084  swc1        $f0, 0x84($a2)
    ctx->pc = 0x159d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 132), bits); }
    ctx->pc = 0x159d8cu;
}
