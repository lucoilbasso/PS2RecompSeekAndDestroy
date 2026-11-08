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

// Function: Init__9ApcPtcSpli
// Address: 0x123ca8 - 0x12406c
void Init__9ApcPtcSpli_0x123ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9ApcPtcSpli_0x123ca8");
#endif

    switch (ctx->pc) {
        case 0x123cd8u: goto label_123cd8;
        case 0x123ddcu: goto label_123ddc;
        case 0x123e08u: goto label_123e08;
        case 0x123e20u: goto label_123e20;
        case 0x123ee0u: goto label_123ee0;
        default: break;
    }

    ctx->pc = 0x123ca8u;

    // 0x123ca8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x123ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x123cac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x123cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x123cb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x123cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123cb4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x123cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x123cb8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x123cb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123cbc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x123cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x123cc0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x123cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x123cc4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x123cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x123cc8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x123cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x123ccc: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x123cccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x123cd0: 0xc061258  jal         func_184960
    ctx->pc = 0x123CD0u;
    SET_GPR_U32(ctx, 31, 0x123CD8u);
    ctx->pc = 0x123CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CD0u;
    // 0x123cd4: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x123CD0u, 0x123CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CD8u;
label_123cd8:
    // 0x123cd8: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x123cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x123cdc: 0x240302f6  addiu       $v1, $zero, 0x2F6
    ctx->pc = 0x123cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 758));
    // 0x123ce0: 0x2404e000  addiu       $a0, $zero, -0x2000
    ctx->pc = 0x123ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
    // 0x123ce4: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x123ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x123ce8: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x123ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x123cec: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x123cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x123cf0: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x123cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x123cf4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x123cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x123cf8: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x123cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x123cfc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x123cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x123d00: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x123d00u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x123d04: 0x26420040  addiu       $v0, $s2, 0x40
    ctx->pc = 0x123d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x123d08: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x123d08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123d0c: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x123d0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123d10: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x123d10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123d14: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x123d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x123d18: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x123d18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123d1c: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x123d1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x123d20: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x123d20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x123d24: 0x26420060  addiu       $v0, $s2, 0x60
    ctx->pc = 0x123d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x123d28: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x123d28u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x123d2c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x123d2cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123d30: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x123d30u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x123d34: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x123d34u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x123d38: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x123d38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123d3c: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x123d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123d40: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x123d40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123d44: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x123d44u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x123d48: 0x264300a0  addiu       $v1, $s2, 0xA0
    ctx->pc = 0x123d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x123d4c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x123d4cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x123d50: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x123d50u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123d54: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x123d54u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x123d58: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x123d58u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x123d5c: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x123d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123d60: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x123d60u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123d64: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x123d64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123d68: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x123d68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x123d6c: 0x264200e0  addiu       $v0, $s2, 0xE0
    ctx->pc = 0x123d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x123d70: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x123d70u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x123d74: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x123d74u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123d78: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x123d78u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x123d7c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x123d7cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x123d80: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x123d80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123d84: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x123d84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123d88: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x123d88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123d8c: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x123d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x123d90: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x123d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x123d94: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x123d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x123d98: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x123d98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x123d9c: 0x132a40  sll         $a1, $s3, 9
    ctx->pc = 0x123d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
    // 0x123da0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x123da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x123da4: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x123da4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x123da8: 0xae430010  sw          $v1, 0x10($s2)
    ctx->pc = 0x123da8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 3));
    // 0x123dac: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x123dacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x123db0: 0xae400120  sw          $zero, 0x120($s2)
    ctx->pc = 0x123db0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 0));
    // 0x123db4: 0xae400124  sw          $zero, 0x124($s2)
    ctx->pc = 0x123db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 0));
    // 0x123db8: 0xae400128  sw          $zero, 0x128($s2)
    ctx->pc = 0x123db8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 0));
    // 0x123dbc: 0xae40012c  sw          $zero, 0x12C($s2)
    ctx->pc = 0x123dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 0));
    // 0x123dc0: 0xae400130  sw          $zero, 0x130($s2)
    ctx->pc = 0x123dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 0));
    // 0x123dc4: 0xae400134  sw          $zero, 0x134($s2)
    ctx->pc = 0x123dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 308), GPR_U32(ctx, 0));
    // 0x123dc8: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x123dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
    // 0x123dcc: 0xae400144  sw          $zero, 0x144($s2)
    ctx->pc = 0x123dccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 324), GPR_U32(ctx, 0));
    // 0x123dd0: 0xae400148  sw          $zero, 0x148($s2)
    ctx->pc = 0x123dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 328), GPR_U32(ctx, 0));
    // 0x123dd4: 0xc068086  jal         func_1A0218
    ctx->pc = 0x123DD4u;
    SET_GPR_U32(ctx, 31, 0x123DDCu);
    ctx->pc = 0x123DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123DD4u;
    // 0x123dd8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x123DD4u, 0x123DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123DDCu;
label_123ddc:
    // 0x123ddc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x123ddcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123de0: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x123DE0u;
    {
        const bool branch_taken_0x123de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x123DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DE0u;
        // 0x123de4: 0xae430158  sw          $v1, 0x158($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123de0) {
            ctx->pc = 0x124044u;
            goto label_124044;
        }
    }
    ctx->pc = 0x123DE8u;
    // 0x123de8: 0xae530150  sw          $s3, 0x150($s2)
    ctx->pc = 0x123de8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 336), GPR_U32(ctx, 19));
    // 0x123dec: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x123decu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x123df0: 0x131240  sll         $v0, $s3, 9
    ctx->pc = 0x123df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
    // 0x123df4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x123df4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x123df8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x123df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x123dfc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x123dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x123e00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x123e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x123e04: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x123e04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123e08:
    // 0x123e08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x123e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123e0c: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x123e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x123e10: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x123e10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x123e14: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x123e14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x123e18: 0xc048424  jal         func_121090
    ctx->pc = 0x123E18u;
    SET_GPR_U32(ctx, 31, 0x123E20u);
    ctx->pc = 0x123E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123E18u;
    // 0x123e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121090u, 0x123E18u, 0x123E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123E20u;
label_123e20:
    // 0x123e20: 0xae1100b4  sw          $s1, 0xB4($s0)
    ctx->pc = 0x123e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
    // 0x123e24: 0x26230120  addiu       $v1, $s1, 0x120
    ctx->pc = 0x123e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x123e28: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x123e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x123e2c: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x123e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x123e30: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x123e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    // 0x123e34: 0xe63400dc  swc1        $f20, 0xDC($s1)
    ctx->pc = 0x123e34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 220), bits); }
    // 0x123e38: 0xe63500e0  swc1        $f21, 0xE0($s1)
    ctx->pc = 0x123e38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 224), bits); }
    // 0x123e3c: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x123e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
    // 0x123e40: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x123e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x123e44: 0xe63400ec  swc1        $f20, 0xEC($s1)
    ctx->pc = 0x123e44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 236), bits); }
    // 0x123e48: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x123e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x123e4c: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x123e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
    // 0x123e50: 0xae2000fc  sw          $zero, 0xFC($s1)
    ctx->pc = 0x123e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
    // 0x123e54: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x123e54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x123e58: 0xe6340104  swc1        $f20, 0x104($s1)
    ctx->pc = 0x123e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    // 0x123e5c: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x123e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x123e60: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x123e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x123e64: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x123e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
    // 0x123e68: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x123e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
    // 0x123e6c: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x123e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
    // 0x123e70: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x123e70u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x123e74: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x123e74u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123e78: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x123e78u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x123e7c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x123e7cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x123e80: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x123e80u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123e84: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x123e84u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123e88: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x123e88u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123e8c: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x123e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x123e90: 0x26220160  addiu       $v0, $s1, 0x160
    ctx->pc = 0x123e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x123e94: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x123e94u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x123e98: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x123e98u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x123e9c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x123e9cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x123ea0: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x123ea0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x123ea4: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x123ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x123ea8: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x123ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x123eac: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x123eacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x123eb0: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x123eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x123eb4: 0xae340004  sw          $s4, 0x4($s1)
    ctx->pc = 0x123eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
    // 0x123eb8: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x123eb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123ebc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x123ebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x123ec0: 0xae2001a4  sw          $zero, 0x1A4($s1)
    ctx->pc = 0x123ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 0));
    // 0x123ec4: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x123ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x123ec8: 0x131240  sll         $v0, $s3, 9
    ctx->pc = 0x123ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 9));
    // 0x123ecc: 0xae2001a0  sw          $zero, 0x1A0($s1)
    ctx->pc = 0x123eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
    // 0x123ed0: 0x660002d  bltz        $s3, . + 4 + (0x2D << 2)
    ctx->pc = 0x123ED0u;
    {
        const bool branch_taken_0x123ed0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x123ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123ED0u;
        // 0x123ed4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ed0) {
            ctx->pc = 0x123F88u;
            goto label_123f88;
        }
    }
    ctx->pc = 0x123ED8u;
    // 0x123ed8: 0x1000ffcb  b           . + 4 + (-0x35 << 2)
    ctx->pc = 0x123ED8u;
    {
        const bool branch_taken_0x123ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123ED8u;
        // 0x123edc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123ed8) {
            ctx->pc = 0x123E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123e08;
        }
    }
    ctx->pc = 0x123EE0u;
label_123ee0:
    // 0x123ee0: 0x55200045  bnel        $t1, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x123EE0u;
    {
        const bool branch_taken_0x123ee0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x123ee0) {
            ctx->pc = 0x123EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123EE0u;
            // 0x123ee4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123FF8u;
            goto label_123ff8;
        }
    }
    ctx->pc = 0x123EE8u;
    // 0x123ee8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x123ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x123eec: 0x3c060026  lui         $a2, 0x26
    ctx->pc = 0x123eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)38 << 16));
    // 0x123ef0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x123ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123ef4: 0x24c60e00  addiu       $a2, $a2, 0xE00
    ctx->pc = 0x123ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3584));
    // 0x123ef8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x123ef8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x123efc: 0x72940  sll         $a1, $a3, 5
    ctx->pc = 0x123efcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x123f00: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x123f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x123f04: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x123f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x123f08: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x123f08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x123f0c: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x123f0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x123f10: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x123f10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x123f14: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x123f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x123f18: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x123f18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x123f1c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x123f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x123f20: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x123f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x123f24: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x123f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x123f28: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x123f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x123f2c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x123f2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x123f30: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x123f30u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x123f34: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x123f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x123f38: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x123f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x123f3c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x123f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x123f40: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x123f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x123f44: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x123f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123f48: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x123f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x123f4c: 0x460b4200  add.s       $f8, $f8, $f11
    ctx->pc = 0x123f4cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[11]);
    // 0x123f50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x123F50u;
    {
        const bool branch_taken_0x123f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F50u;
        // 0x123f54: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f50) {
            ctx->pc = 0x123F60u;
            goto label_123f60;
        }
    }
    ctx->pc = 0x123F58u;
    // 0x123f58: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x123F58u;
    {
        const bool branch_taken_0x123f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F58u;
        // 0x123f5c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f58) {
            ctx->pc = 0x123FFCu;
            goto label_123ffc;
        }
    }
    ctx->pc = 0x123F60u;
label_123f60:
    // 0x123f60: 0x15400027  bnez        $t2, . + 4 + (0x27 << 2)
    ctx->pc = 0x123F60u;
    {
        const bool branch_taken_0x123f60 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x123F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F60u;
        // 0x123f64: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f60) {
            ctx->pc = 0x124000u;
            goto label_124000;
        }
    }
    ctx->pc = 0x123F68u;
    // 0x123f68: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x123f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x123f6c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x123f6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x123f70: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x123f70u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x123f74: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x123f74u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x123f78: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x123f78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x123f7c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x123F7Cu;
    {
        const bool branch_taken_0x123f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123F7Cu;
        // 0x123f80: 0x46003182  mul.s       $f6, $f6, $f0 (Delay Slot)
        ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x123f7c) {
            ctx->pc = 0x124000u;
            goto label_124000;
        }
    }
    ctx->pc = 0x123F84u;
    // 0x123f84: 0x0  nop
    ctx->pc = 0x123f84u;
    // NOP
label_123f88:
    // 0x123f88: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x123f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x123f8c: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x123f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x123f90: 0x24425cc0  addiu       $v0, $v0, 0x5CC0
    ctx->pc = 0x123f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23744));
    // 0x123f94: 0xc78b80b4  lwc1        $f11, -0x7F4C($gp)
    ctx->pc = 0x123f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x123f98: 0x8e430158  lw          $v1, 0x158($s2)
    ctx->pc = 0x123f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x123f9c: 0x4600a286  mov.s       $f10, $f20
    ctx->pc = 0x123f9cu;
    ctx->f[10] = FPU_MOV_S(ctx->f[20]);
    // 0x123fa0: 0xc78480b8  lwc1        $f4, -0x7F48($gp)
    ctx->pc = 0x123fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x123fa4: 0x46005246  mov.s       $f9, $f10
    ctx->pc = 0x123fa4u;
    ctx->f[9] = FPU_MOV_S(ctx->f[10]);
    // 0x123fa8: 0xae43015c  sw          $v1, 0x15C($s2)
    ctx->pc = 0x123fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 3));
    // 0x123fac: 0x46005206  mov.s       $f8, $f10
    ctx->pc = 0x123facu;
    ctx->f[8] = FPU_MOV_S(ctx->f[10]);
    // 0x123fb0: 0xc78c80bc  lwc1        $f12, -0x7F44($gp)
    ctx->pc = 0x123fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x123fb4: 0x460021c6  mov.s       $f7, $f4
    ctx->pc = 0x123fb4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[4]);
    // 0x123fb8: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x123fb8u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x255CD8u));
    // 0x123fbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x123fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fc0: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x123fc0u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x255CC0u));
    // 0x123fc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x123fc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fc8: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x123fc8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x255CC8u));
    // 0x123fcc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x123fccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fd0: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x123fd0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x255CD0u));
    // 0x123fd4: 0x46005986  mov.s       $f6, $f11
    ctx->pc = 0x123fd4u;
    ctx->f[6] = FPU_MOV_S(ctx->f[11]);
    // 0x123fd8: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x123fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x123fdc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x123fdcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123fe0: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x123fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x123fe4: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x123fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x123fe8: 0xc78580c0  lwc1        $f5, -0x7F40($gp)
    ctx->pc = 0x123fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x123fec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x123FECu;
    {
        const bool branch_taken_0x123fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123FECu;
        // 0x123ff0: 0xffa60018  sd          $a2, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123fec) {
            ctx->pc = 0x124038u;
            goto label_124038;
        }
    }
    ctx->pc = 0x123FF4u;
    // 0x123ff4: 0x0  nop
    ctx->pc = 0x123ff4u;
    // NOP
label_123ff8:
    // 0x123ff8: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x123ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_123ffc:
    // 0x123ffc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x123ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_124000:
    // 0x124000: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->pc = 0x124000u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x124004: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x124004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x124008: 0x460c5280  add.s       $f10, $f10, $f12
    ctx->pc = 0x124008u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[12]);
    // 0x12400c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x12400cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x124010: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x124010u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x124014: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x124014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124018: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x124018u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x12401c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x12401cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x124020: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x124020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x124024: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x124024u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x124028: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x124028u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12402c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x12402cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x124030: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x124030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x124034: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x124034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_124038:
    // 0x124038: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x124038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x12403c: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x12403Cu;
    {
        const bool branch_taken_0x12403c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12403Cu;
        // 0x124040: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12403c) {
            ctx->pc = 0x123EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123ee0;
        }
    }
    ctx->pc = 0x124044u;
label_124044:
    // 0x124044: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x124044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124048: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x124048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12404c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x12404cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124050: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x124050u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x124054: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x124054u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x124058: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x124058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12405c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x12405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x124060: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x124060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x124064: 0x3e00008  jr          $ra
    ctx->pc = 0x124064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124064u;
        // 0x124068: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12406Cu;
}
