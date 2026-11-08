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

// Function: entry_001908c8
// Address: 0x1908c8 - 0x190a48
void entry_001908c8_0x1908c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001908c8_0x1908c8");
#endif

    ctx->pc = 0x1908c8u;

    // 0x1908c8: 0xc601017c  lwc1        $f1, 0x17C($s0)
    ctx->pc = 0x1908c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1908cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1908ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1908d0: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x1908d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1908d4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1908d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1908d8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1908d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1908dc: 0x4bee033d  vmr32.xyzw  $vf14, $vf0
    ctx->pc = 0x1908dcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1908e0: 0xd90b0030  lqc2        $vf11, 0x30($t0)
    ctx->pc = 0x1908e0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1908e4: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x1908e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1908e8: 0xd9250010  lqc2        $vf5, 0x10($t1)
    ctx->pc = 0x1908e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1908ec: 0xd9260020  lqc2        $vf6, 0x20($t1)
    ctx->pc = 0x1908ecu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x1908f0: 0xd9270030  lqc2        $vf7, 0x30($t1)
    ctx->pc = 0x1908f0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x1908f4: 0xd89f0000  lqc2        $vf31, 0x0($a0)
    ctx->pc = 0x1908f4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1908f8: 0xd8de0000  lqc2        $vf30, 0x0($a2)
    ctx->pc = 0x1908f8u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1908fc: 0x4bed733d  vmr32.xyzw  $vf13, $vf14
    ctx->pc = 0x1908fcu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x190900: 0x4beb21bc  vmulax.xyzw $ACC, $vf4, $vf11x
    ctx->pc = 0x190900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190904: 0x4beb28bd  vmadday.xyzw $ACC, $vf5, $vf11y
    ctx->pc = 0x190904u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190908: 0x4beb30be  vmaddaz.xyzw $ACC, $vf6, $vf11z
    ctx->pc = 0x190908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19090c: 0x4beb3bcb  vmaddw.xyzw $vf15, $vf7, $vf11w
    ctx->pc = 0x19090cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x190910: 0x4bec6b3d  vmr32.xyzw  $vf12, $vf13
    ctx->pc = 0x190910u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190914: 0xd9640000  lqc2        $vf4, 0x0($t3)
    ctx->pc = 0x190914u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x190918: 0xd9650010  lqc2        $vf5, 0x10($t3)
    ctx->pc = 0x190918u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x19091c: 0xd9660020  lqc2        $vf6, 0x20($t3)
    ctx->pc = 0x19091cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 32)));
    // 0x190920: 0xd9670030  lqc2        $vf7, 0x30($t3)
    ctx->pc = 0x190920u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x190924: 0x4bec21bc  vmulax.xyzw $ACC, $vf4, $vf12x
    ctx->pc = 0x190924u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190928: 0x4bec28bd  vmadday.xyzw $ACC, $vf5, $vf12y
    ctx->pc = 0x190928u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19092c: 0x4bec30be  vmaddaz.xyzw $ACC, $vf6, $vf12z
    ctx->pc = 0x19092cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190930: 0x4bec3a0b  vmaddw.xyzw $vf8, $vf7, $vf12w
    ctx->pc = 0x190930u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x190934: 0x4bed21bc  vmulax.xyzw $ACC, $vf4, $vf13x
    ctx->pc = 0x190934u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190938: 0x4bed28bd  vmadday.xyzw $ACC, $vf5, $vf13y
    ctx->pc = 0x190938u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19093c: 0x4bed30be  vmaddaz.xyzw $ACC, $vf6, $vf13z
    ctx->pc = 0x19093cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190940: 0x4bed3a4b  vmaddw.xyzw $vf9, $vf7, $vf13w
    ctx->pc = 0x190940u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x190944: 0x4bee21bc  vmulax.xyzw $ACC, $vf4, $vf14x
    ctx->pc = 0x190944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190948: 0x4bee28bd  vmadday.xyzw $ACC, $vf5, $vf14y
    ctx->pc = 0x190948u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19094c: 0x4bee30be  vmaddaz.xyzw $ACC, $vf6, $vf14z
    ctx->pc = 0x19094cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190950: 0x4bee3a8b  vmaddw.xyzw $vf10, $vf7, $vf14w
    ctx->pc = 0x190950u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x190954: 0x4bef21bc  vmulax.xyzw $ACC, $vf4, $vf15x
    ctx->pc = 0x190954u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190958: 0x4bef28bd  vmadday.xyzw $ACC, $vf5, $vf15y
    ctx->pc = 0x190958u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19095c: 0x4bef30be  vmaddaz.xyzw $ACC, $vf6, $vf15z
    ctx->pc = 0x19095cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190960: 0x4bef3acb  vmaddw.xyzw $vf11, $vf7, $vf15w
    ctx->pc = 0x190960u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x190964: 0x4be041bc  vmulax.xyzw $ACC, $vf8, $vf0x
    ctx->pc = 0x190964u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190968: 0x4be048bd  vmadday.xyzw $ACC, $vf9, $vf0y
    ctx->pc = 0x190968u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19096c: 0x4be050be  vmaddaz.xyzw $ACC, $vf10, $vf0z
    ctx->pc = 0x19096cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190970: 0x4be05b0b  vmaddw.xyzw $vf12, $vf11, $vf0w
    ctx->pc = 0x190970u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x190974: 0xd8e50000  lqc2        $vf5, 0x0($a3)
    ctx->pc = 0x190974u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x190978: 0x4be5016c  vsub.xyzw   $vf5, $vf0, $vf5
    ctx->pc = 0x190978u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x19097c: 0x4a3f63d9  vmuly.w     $vf15, $vf12, $vf31y
    ctx->pc = 0x19097cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x190980: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x190980u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x190984: 0xd8c60000  lqc2        $vf6, 0x0($a2)
    ctx->pc = 0x190984u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x190988: 0x4be629a8  vadd.xyzw   $vf6, $vf5, $vf6
    ctx->pc = 0x190988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x19098c: 0x4a2ffbec  vsub.w      $vf15, $vf31, $vf15
    ctx->pc = 0x19098cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[31], ctx->vu0_vf[15]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x190990: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x190990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190994: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x190994u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x190998: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x190998u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19099c: 0x4be55b4b  vmaddw.xyzw $vf13, $vf11, $vf5w
    ctx->pc = 0x19099cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1909a0: 0x4a207bd0  vmaxx.w     $vf15, $vf15, $vf0x
    ctx->pc = 0x1909a0u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[15], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x1909a4: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x1909a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1909a8: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x1909a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1909ac: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x1909acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1909b0: 0x4be65b8b  vmaddw.xyzw $vf14, $vf11, $vf6w
    ctx->pc = 0x1909b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1909b4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1909b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1909b8: 0x48c2a800  ctc2.ni     $v0, $vi21
    ctx->pc = 0x1909b8u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x1909bc: 0x4a207a1e  vmuli.w     $vf8, $vf15, $I
    ctx->pc = 0x1909bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[15], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1909c0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1909c0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1909c4: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x1909c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1909c8: 0x4bc06b5c  vmulq.xyz   $vf13, $vf13, $Q
    ctx->pc = 0x1909c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1909cc: 0x4bc0739c  vmulq.xyz   $vf14, $vf14, $Q
    ctx->pc = 0x1909ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1909d0: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x1909d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x1909d4: 0x48c2a800  ctc2.ni     $v0, $vi21
    ctx->pc = 0x1909d4u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x1909d8: 0x4a207b1f  vminii.w    $vf12, $vf15, $I
    ctx->pc = 0x1909d8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[15], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1909dc: 0x4a207b5f  vminii.w    $vf13, $vf15, $I
    ctx->pc = 0x1909dcu;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[15], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1909e0: 0x4a207b9f  vminii.w    $vf14, $vf15, $I
    ctx->pc = 0x1909e0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[15], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1909e4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1909e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x1909e8: 0x48c2a800  ctc2.ni     $v0, $vi21
    ctx->pc = 0x1909e8u;
    { uint32_t tmp = GPR_U32(ctx, 2); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x1909ec: 0x4b000062  vaddi.x     $vf1, $vf0, $I
    ctx->pc = 0x1909ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1909f0: 0x4b080a17  vminiw.x    $vf8, $vf1, $vf8w
    ctx->pc = 0x1909f0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1909f4: 0x4bec617d  vftoi4.xyzw $vf12, $vf12
    ctx->pc = 0x1909f4u;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1909f8: 0x4bed697d  vftoi4.xyzw $vf13, $vf13
    ctx->pc = 0x1909f8u;
    { __m128 src = ctx->vu0_vf[13]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1909fc: 0x4bee717d  vftoi4.xyzw $vf14, $vf14
    ctx->pc = 0x1909fcu;
    { __m128 src = ctx->vu0_vf[14]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x190a00: 0x48224000  qmfc2.ni    $v0, $vf8
    ctx->pc = 0x190a00u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x190a04: 0xf94c0000  sqc2        $vf12, 0x0($t2)
    ctx->pc = 0x190a04u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x190a08: 0xf94d0010  sqc2        $vf13, 0x10($t2)
    ctx->pc = 0x190a08u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 16), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x190a0c: 0xf94e0020  sqc2        $vf14, 0x20($t2)
    ctx->pc = 0x190a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 32), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x190a10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x190a10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190a14: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x190a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x190a18: 0x2472d650  addiu       $s2, $v1, -0x29B0
    ctx->pc = 0x190a18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956624));
    // 0x190a1c: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x190a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x21D6E4u));
    // 0x190a20: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x190A20u;
    {
        const bool branch_taken_0x190a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A20u;
        // 0x190a24: 0x260a02d  daddu       $s4, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a20) {
            ctx->pc = 0x190A48u;
            return;
        }
    }
    ctx->pc = 0x190A28u;
    // 0x190a28: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x190a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x190a2c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x190a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x190a30: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x190a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x190a34: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x190a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x190a38: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x190a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x190a3c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x190A3Cu;
    {
        const bool branch_taken_0x190a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x190A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190A3Cu;
        // 0x190a40: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190a3c) {
            ctx->pc = 0x190A7Cu;
            return;
        }
    }
    ctx->pc = 0x190A44u;
    // 0x190a44: 0x0  nop
    ctx->pc = 0x190a44u;
    // NOP
    ctx->pc = 0x190a48u;
}
