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

// Function: entry_0013ddec
// Address: 0x13ddec - 0x13df1c
void entry_0013ddec_0x13ddec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ddec_0x13ddec");
#endif

    ctx->pc = 0x13ddecu;

    // 0x13ddec: 0x96a70004  lhu         $a3, 0x4($s5)
    ctx->pc = 0x13ddecu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x13ddf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13ddf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ddf4: 0x96a60006  lhu         $a2, 0x6($s5)
    ctx->pc = 0x13ddf4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x13ddf8: 0x27a800a0  addiu       $t0, $sp, 0xA0
    ctx->pc = 0x13ddf8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x13ddfc: 0x96a50008  lhu         $a1, 0x8($s5)
    ctx->pc = 0x13ddfcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x13de00: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x13de00u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x13de04: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x13de04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13de08: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x13de08u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x13de0c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x13de0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x13de10: 0x2c73821  addu        $a3, $s6, $a3
    ctx->pc = 0x13de10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x13de14: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x13de14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x13de18: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x13de18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x13de1c: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x13de1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x13de20: 0xd8e80000  lqc2        $vf8, 0x0($a3)
    ctx->pc = 0x13de20u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13de24: 0xd8c90000  lqc2        $vf9, 0x0($a2)
    ctx->pc = 0x13de24u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x13de28: 0xd8aa0000  lqc2        $vf10, 0x0($a1)
    ctx->pc = 0x13de28u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13de2c: 0xd9110000  lqc2        $vf17, 0x0($t0)
    ctx->pc = 0x13de2cu;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x13de30: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x13de30u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x13de34: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x13de34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de38: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x13de38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de3c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x13de3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de40: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x13de40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13de44: 0x4be8a1bc  vmulax.xyzw $ACC, $vf20, $vf8x
    ctx->pc = 0x13de44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de48: 0x4be8a8bd  vmadday.xyzw $ACC, $vf21, $vf8y
    ctx->pc = 0x13de48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de4c: 0x4be8b0be  vmaddaz.xyzw $ACC, $vf22, $vf8z
    ctx->pc = 0x13de4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de50: 0x4be8bbcb  vmaddw.xyzw $vf15, $vf23, $vf8w
    ctx->pc = 0x13de50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x13de54: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x13de54u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13de58: 0x4af19b3c  vmove.yzw   $vf17, $vf19
    ctx->pc = 0x13de58u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], ctx->vu0_vf[19], _mm_castsi128_ps(mask)); }
    // 0x13de5c: 0x4be921bc  vmulax.xyzw $ACC, $vf4, $vf9x
    ctx->pc = 0x13de5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de60: 0x4be928bd  vmadday.xyzw $ACC, $vf5, $vf9y
    ctx->pc = 0x13de60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de64: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x13de64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de68: 0x4be93b4b  vmaddw.xyzw $vf13, $vf7, $vf9w
    ctx->pc = 0x13de68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x13de6c: 0x4bcf79ff  .word       0x4BCF79FF                   # vclipw.xyz  $vf15, $vf15w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13de6cu;
    { __m128 fs = ctx->vu0_vf[15]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x13de70: 0x4a0003bf  vwaitq
    ctx->pc = 0x13de70u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13de74: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x13de74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13de78: 0x4bed03bc  vdiv        $Q, $vf0w, $vf13w
    ctx->pc = 0x13de78u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13de7c: 0xfa510010  sqc2        $vf17, 0x10($s2)
    ctx->pc = 0x13de7cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x13de80: 0xfa520000  sqc2        $vf18, 0x0($s2)
    ctx->pc = 0x13de80u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[18]));
    // 0x13de84: 0x4bec617d  vftoi4.xyzw $vf12, $vf12
    ctx->pc = 0x13de84u;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13de88: 0x4bea21bc  vmulax.xyzw $ACC, $vf4, $vf10x
    ctx->pc = 0x13de88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de8c: 0x4bea28bd  vmadday.xyzw $ACC, $vf5, $vf10y
    ctx->pc = 0x13de8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de90: 0x4bea30be  vmaddaz.xyzw $ACC, $vf6, $vf10z
    ctx->pc = 0x13de90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13de94: 0x4bea3b8b  vmaddw.xyzw $vf14, $vf7, $vf10w
    ctx->pc = 0x13de94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x13de98: 0x4a0003bf  vwaitq
    ctx->pc = 0x13de98u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13de9c: 0x4bc06b5c  vmulq.xyz   $vf13, $vf13, $Q
    ctx->pc = 0x13de9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x13dea0: 0x4bee03bc  vdiv        $Q, $vf0w, $vf14w
    ctx->pc = 0x13dea0u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[14], ctx->vu0_vf[14], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13dea4: 0xfa4c0020  sqc2        $vf12, 0x20($s2)
    ctx->pc = 0x13dea4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x13dea8: 0x4bed697d  vftoi4.xyzw $vf13, $vf13
    ctx->pc = 0x13dea8u;
    { __m128 src = ctx->vu0_vf[13]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x13deac: 0x4be9a1bc  vmulax.xyzw $ACC, $vf20, $vf9x
    ctx->pc = 0x13deacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13deb0: 0x4be9a8bd  vmadday.xyzw $ACC, $vf21, $vf9y
    ctx->pc = 0x13deb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13deb4: 0x4be9b0be  vmaddaz.xyzw $ACC, $vf22, $vf9z
    ctx->pc = 0x13deb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13deb8: 0x4be9bbcb  vmaddw.xyzw $vf15, $vf23, $vf9w
    ctx->pc = 0x13deb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x13debc: 0x4a0003bf  vwaitq
    ctx->pc = 0x13debcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13dec0: 0x4bc0739c  vmulq.xyz   $vf14, $vf14, $Q
    ctx->pc = 0x13dec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[14], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x13dec4: 0x4bcf79ff  .word       0x4BCF79FF                   # vclipw.xyz  $vf15, $vf15w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13dec4u;
    { __m128 fs = ctx->vu0_vf[15]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x13dec8: 0xfa4d0030  sqc2        $vf13, 0x30($s2)
    ctx->pc = 0x13dec8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x13decc: 0x4bee717d  vftoi4.xyzw $vf14, $vf14
    ctx->pc = 0x13deccu;
    { __m128 src = ctx->vu0_vf[14]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x13ded0: 0x4beaa1bc  vmulax.xyzw $ACC, $vf20, $vf10x
    ctx->pc = 0x13ded0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13ded4: 0x4beaa8bd  vmadday.xyzw $ACC, $vf21, $vf10y
    ctx->pc = 0x13ded4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13ded8: 0x4beab0be  vmaddaz.xyzw $ACC, $vf22, $vf10z
    ctx->pc = 0x13ded8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13dedc: 0x4beabbcb  vmaddw.xyzw $vf15, $vf23, $vf10w
    ctx->pc = 0x13dedcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[15] = _mm_blendv_ps(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x13dee0: 0xfa4e0040  sqc2        $vf14, 0x40($s2)
    ctx->pc = 0x13dee0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x13dee4: 0x4bcf79ff  .word       0x4BCF79FF                   # vclipw.xyz  $vf15, $vf15w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13dee4u;
    { __m128 fs = ctx->vu0_vf[15]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x13dee8: 0x4a0002ff  vnop
    ctx->pc = 0x13dee8u;
    // NOP operation, no action needed for VU0
    // 0x13deec: 0x4a0002ff  vnop
    ctx->pc = 0x13deecu;
    // NOP operation, no action needed for VU0
    // 0x13def0: 0x4a0002ff  vnop
    ctx->pc = 0x13def0u;
    // NOP operation, no action needed for VU0
    // 0x13def4: 0x4a0002ff  vnop
    ctx->pc = 0x13def4u;
    // NOP operation, no action needed for VU0
    // 0x13def8: 0x4a0002ff  vnop
    ctx->pc = 0x13def8u;
    // NOP operation, no action needed for VU0
    // 0x13defc: 0x48429000  cfc2.ni     $v0, $vi18
    ctx->pc = 0x13defcu;
    SET_GPR_U32(ctx, 2, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x13df00: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x13df00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x13df04: 0x2063ffff  addi        $v1, $v1, -0x1
    ctx->pc = 0x13df04u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
    // 0x13df08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13df08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13df0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DF0Cu;
    {
        const bool branch_taken_0x13df0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13df0c) {
            ctx->pc = 0x13DF1Cu;
            return;
        }
    }
    ctx->pc = 0x13DF14u;
    // 0x13df14: 0x0  nop
    ctx->pc = 0x13df14u;
    // NOP
    // 0x13df18: 0x22520050  addi        $s2, $s2, 0x50
    ctx->pc = 0x13df18u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 18), (int32_t)80, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
    ctx->pc = 0x13df1cu;
}
