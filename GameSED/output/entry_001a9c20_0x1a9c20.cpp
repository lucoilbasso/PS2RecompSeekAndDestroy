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

// Function: entry_001a9c20
// Address: 0x1a9c20 - 0x1a9d50
void entry_001a9c20_0x1a9c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9c20_0x1a9c20");
#endif

    ctx->pc = 0x1a9c20u;

    // 0x1a9c20: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a9c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9c24: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x1a9c24u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1a9c28: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x1a9c28u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1a9c2c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x1a9c2cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1a9c30: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x1a9c30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1a9c34: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x1a9c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9c38: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1a9c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1a9c3c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x1a9c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1a9c40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a9c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a9c44: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1a9c44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1a9c48: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x1a9c48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x1a9c4c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x1a9c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9c50: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x1a9c50u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x1a9c54: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x1a9c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9c58: 0xc6030018  lwc1        $f3, 0x18($s0)
    ctx->pc = 0x1a9c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9c5c: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x1a9c5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1a9c60: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9c60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9c64: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a9c64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a9c68: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1a9c68u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1a9c6c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1a9c6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a9c70: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1a9c70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a9c74: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a9c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a9c78: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1a9c78u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1a9c7c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1a9c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a9c80: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1a9c80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a9c84: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a9c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a9c88: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1a9c88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1a9c8c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9c90: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a9c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a9c94: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9c98: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a9c98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a9c9c: 0xe62000f0  swc1        $f0, 0xF0($s1)
    ctx->pc = 0x1a9c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
    // 0x1a9ca0: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x1a9ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9ca4: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x1a9ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9ca8: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x1a9ca8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x1a9cac: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1a9cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9cb0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a9cb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a9cb4: 0xc6030028  lwc1        $f3, 0x28($s0)
    ctx->pc = 0x1a9cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9cb8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x1a9cb8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1a9cbc: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1a9cbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1a9cc0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9cc0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9cc4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a9cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a9cc8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1a9cc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a9ccc: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1a9cccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1a9cd0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1a9cd0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a9cd4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a9cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a9cd8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1a9cd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a9cdc: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1a9cdcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1a9ce0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1a9ce0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a9ce4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9ce4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9ce8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a9ce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a9cec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9cecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9cf0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a9cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a9cf4: 0xe62000f4  swc1        $f0, 0xF4($s1)
    ctx->pc = 0x1a9cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 244), bits); }
    // 0x1a9cf8: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x1a9cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a9cfc: 0xc600002c  lwc1        $f0, 0x2C($s0)
    ctx->pc = 0x1a9cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a9d00: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x1a9d00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x1a9d04: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1a9d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a9d08: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a9d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a9d0c: 0xc6030038  lwc1        $f3, 0x38($s0)
    ctx->pc = 0x1a9d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a9d10: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x1a9d10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x1a9d14: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1a9d14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1a9d18: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1a9d18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1a9d1c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a9d1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a9d20: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1a9d20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a9d24: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1a9d24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1a9d28: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1a9d28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a9d2c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1a9d2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1a9d30: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1a9d30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1a9d34: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x1a9d34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x1a9d38: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1a9d38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1a9d3c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1a9d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1a9d40: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a9d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a9d44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a9d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a9d48: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1a9d48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1a9d4c: 0xe62000f8  swc1        $f0, 0xF8($s1)
    ctx->pc = 0x1a9d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 248), bits); }
    ctx->pc = 0x1a9d50u;
}
