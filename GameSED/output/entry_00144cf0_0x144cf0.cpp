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

// Function: entry_00144cf0
// Address: 0x144cf0 - 0x144d68
void entry_00144cf0_0x144cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144cf0_0x144cf0");
#endif

    ctx->pc = 0x144cf0u;

    // 0x144cf0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x144cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144cf4: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x144cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144cf8: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x144cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x144cfc: 0x8e650328  lw          $a1, 0x328($s3)
    ctx->pc = 0x144cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 808)));
    // 0x144d00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x144d00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x144d04: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x144d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x144d08: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x144d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x144d0c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x144d0cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144d10: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x144d10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x144d14: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x144d14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x144d18: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x144d18u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x144d1c: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x144d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x144d20: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x144d20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x144d24: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x144d24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x144d28: 0xfba80000  sqc2        $vf8, 0x0($sp)
    ctx->pc = 0x144d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x144d2c: 0x8cc40020  lw          $a0, 0x20($a2)
    ctx->pc = 0x144d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x144d30: 0x24a34030  addiu       $v1, $a1, 0x4030
    ctx->pc = 0x144d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16432));
    // 0x144d34: 0x24071000  addiu       $a3, $zero, 0x1000
    ctx->pc = 0x144d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x144d38: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x144d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x144d3c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x144d3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x144d40: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x144d40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x144d44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x144d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x144d48: 0x8ca24020  lw          $v0, 0x4020($a1)
    ctx->pc = 0x144d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16416)));
    // 0x144d4c: 0xaca4402c  sw          $a0, 0x402C($a1)
    ctx->pc = 0x144d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16428), GPR_U32(ctx, 4));
    // 0x144d50: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x144d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x144d54: 0xaca84024  sw          $t0, 0x4024($a1)
    ctx->pc = 0x144d54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16420), GPR_U32(ctx, 8));
    // 0x144d58: 0x8cc30090  lw          $v1, 0x90($a2)
    ctx->pc = 0x144d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 144)));
    // 0x144d5c: 0xaca24020  sw          $v0, 0x4020($a1)
    ctx->pc = 0x144d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16416), GPR_U32(ctx, 2));
    // 0x144d60: 0xaca34028  sw          $v1, 0x4028($a1)
    ctx->pc = 0x144d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16424), GPR_U32(ctx, 3));
    // 0x144d64: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x144d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x144d68u;
}
