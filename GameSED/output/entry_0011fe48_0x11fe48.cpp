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

// Function: entry_0011fe48
// Address: 0x11fe48 - 0x11fea8
void entry_0011fe48_0x11fe48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fe48_0x11fe48");
#endif

    ctx->pc = 0x11fe48u;

    // 0x11fe48: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x11fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11fe4c: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x11fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x11fe50: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x11fe50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x11fe54: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x11fe54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11fe58: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x11fe58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x11fe5c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x11fe5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x11fe60: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x11fe60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x11fe64: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x11fe64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fe68: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x11fe68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x11fe6c: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x11fe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11fe70: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x11fe70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x11fe74: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x11fe74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x11fe78: 0xc4820078  lwc1        $f2, 0x78($a0)
    ctx->pc = 0x11fe78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11fe7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x11fe7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x11fe80: 0xe4810070  swc1        $f1, 0x70($a0)
    ctx->pc = 0x11fe80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x11fe84: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x11fe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fe88: 0xe4870094  swc1        $f7, 0x94($a0)
    ctx->pc = 0x11fe88u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x11fe8c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x11fe8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x11fe90: 0xe48600a4  swc1        $f6, 0xA4($a0)
    ctx->pc = 0x11fe90u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x11fe94: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x11fe94u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11fe98: 0xe4820078  swc1        $f2, 0x78($a0)
    ctx->pc = 0x11fe98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x11fe9c: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x11fe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11fea0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x11fea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x11fea4: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x11fea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    ctx->pc = 0x11fea8u;
}
