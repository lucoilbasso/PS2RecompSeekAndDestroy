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

// Function: entry_001506cc
// Address: 0x1506cc - 0x150730
void entry_001506cc_0x1506cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001506cc_0x1506cc");
#endif

    ctx->pc = 0x1506ccu;

    // 0x1506cc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1506ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1506d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1506d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1506d4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1506d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1506d8: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x1506d8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    // 0x1506dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1506dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1506e0: 0x24430028  addiu       $v1, $v0, 0x28
    ctx->pc = 0x1506e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1506e4: 0x46170068  max.s       $f1, $f0, $f23
    ctx->pc = 0x1506e4u;
    ctx->f[1] = std::max(ctx->f[0], ctx->f[23]);
    // 0x1506e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1506e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1506ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1506ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1506f0: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x1506F0u;
    {
        const bool branch_taken_0x1506f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1506f0) {
            ctx->pc = 0x1506F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1506F0u;
            // 0x1506f4: 0x92430576  lbu         $v1, 0x576($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1398)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150730u;
            return;
        }
    }
    ctx->pc = 0x1506F8u;
    // 0x1506f8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1506f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1506fc: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1506fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x150700: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x150700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x150704: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x150704u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x150708: 0x4402b000  mfc1        $v0, $f22
    ctx->pc = 0x150708u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x15070c: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x15070cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x150710: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x150710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x150714: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x150714u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x150718: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x150718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x15071c: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x15071cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x150720: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x150720u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x150724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x150724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150728: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x150728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x15072c: 0x92430576  lbu         $v1, 0x576($s2)
    ctx->pc = 0x15072cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1398)));
    ctx->pc = 0x150730u;
}
