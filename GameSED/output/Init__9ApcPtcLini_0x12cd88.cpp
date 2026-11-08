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

// Function: Init__9ApcPtcLini
// Address: 0x12cd88 - 0x12cfd8
void Init__9ApcPtcLini_0x12cd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9ApcPtcLini_0x12cd88");
#endif

    switch (ctx->pc) {
        case 0x12cdb8u: goto label_12cdb8;
        case 0x12cec4u: goto label_12cec4;
        case 0x12cf00u: goto label_12cf00;
        case 0x12cf64u: goto label_12cf64;
        default: break;
    }

    ctx->pc = 0x12cd88u;

    // 0x12cd88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12cd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12cd8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12cd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12cd90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12cd90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12cd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12cd98: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12cd98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12cd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12cda0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12cda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x12cda4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12cda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x12cda8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x12cda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x12cdac: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x12cdacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x12cdb0: 0xc061258  jal         func_184960
    ctx->pc = 0x12CDB0u;
    SET_GPR_U32(ctx, 31, 0x12CDB8u);
    ctx->pc = 0x12CDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CDB0u;
    // 0x12cdb4: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x12CDB0u, 0x12CDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CDB8u;
label_12cdb8:
    // 0x12cdb8: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x12cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x12cdbc: 0x240303f6  addiu       $v1, $zero, 0x3F6
    ctx->pc = 0x12cdbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1014));
    // 0x12cdc0: 0x2404e000  addiu       $a0, $zero, -0x2000
    ctx->pc = 0x12cdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
    // 0x12cdc4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x12cdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x12cdc8: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x12cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x12cdcc: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x12cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x12cdd0: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x12cdd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x12cdd4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12cdd8: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x12cdd8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x12cddc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12cddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12cde0: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x12cde0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x12cde4: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x12cde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x12cde8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x12cde8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12cdec: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x12cdecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12cdf0: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x12cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12cdf4: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x12cdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x12cdf8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x12cdf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12cdfc: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x12cdfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12ce00: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x12ce00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12ce04: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x12ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x12ce08: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x12ce08u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12ce0c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12ce0cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12ce10: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12ce10u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12ce14: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12ce14u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12ce18: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x12ce18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ce1c: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x12ce1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12ce20: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x12ce20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12ce24: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x12ce24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12ce28: 0x262300a0  addiu       $v1, $s1, 0xA0
    ctx->pc = 0x12ce28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x12ce2c: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x12ce2cu;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12ce30: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12ce30u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12ce34: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12ce34u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12ce38: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12ce38u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12ce3c: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x12ce3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ce40: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x12ce40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12ce44: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x12ce44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12ce48: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x12ce48u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12ce4c: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x12ce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x12ce50: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x12ce50u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12ce54: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12ce54u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12ce58: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12ce58u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x12ce5c: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x12ce5cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x12ce60: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x12ce60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ce64: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x12ce64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12ce68: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x12ce68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x12ce6c: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x12ce6cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x12ce70: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12ce70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12ce74: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x12ce74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x12ce78: 0x122880  sll         $a1, $s2, 2
    ctx->pc = 0x12ce78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x12ce7c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x12ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x12ce80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12ce80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12ce84: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x12ce84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x12ce88: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x12ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x12ce8c: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x12ce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x12ce90: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x12ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x12ce94: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x12ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x12ce98: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x12ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
    // 0x12ce9c: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x12ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
    // 0x12cea0: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x12cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
    // 0x12cea4: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x12cea4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
    // 0x12cea8: 0xae200130  sw          $zero, 0x130($s1)
    ctx->pc = 0x12cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 0));
    // 0x12ceac: 0xae200134  sw          $zero, 0x134($s1)
    ctx->pc = 0x12ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 0));
    // 0x12ceb0: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x12ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
    // 0x12ceb4: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x12ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
    // 0x12ceb8: 0xae200148  sw          $zero, 0x148($s1)
    ctx->pc = 0x12ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 0));
    // 0x12cebc: 0xc068086  jal         func_1A0218
    ctx->pc = 0x12CEBCu;
    SET_GPR_U32(ctx, 31, 0x12CEC4u);
    ctx->pc = 0x12CEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CEBCu;
    // 0x12cec0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x12CEBCu, 0x12CEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CEC4u;
label_12cec4:
    // 0x12cec4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12cec4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cec8: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x12CEC8u;
    {
        const bool branch_taken_0x12cec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CEC8u;
        // 0x12cecc: 0xae230154  sw          $v1, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cec8) {
            ctx->pc = 0x12CFB0u;
            goto label_12cfb0;
        }
    }
    ctx->pc = 0x12CED0u;
    // 0x12ced0: 0xae320150  sw          $s2, 0x150($s1)
    ctx->pc = 0x12ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 18));
    // 0x12ced4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x12ced4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x12ced8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x12ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x12cedc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x12cedcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12cee0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x12cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x12cee4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12cee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12cee8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12cee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x12ceec: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x12ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x12cef0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x12cef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cef4: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x12cef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12cef8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12cef8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cefc: 0x0  nop
    ctx->pc = 0x12cefcu;
    // NOP
label_12cf00:
    // 0x12cf00: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x12cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x12cf04: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x12cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x12cf08: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x12cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x12cf0c: 0xe4540028  swc1        $f20, 0x28($v0)
    ctx->pc = 0x12cf0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x12cf10: 0xe4550030  swc1        $f21, 0x30($v0)
    ctx->pc = 0x12cf10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x12cf14: 0xe454002c  swc1        $f20, 0x2C($v0)
    ctx->pc = 0x12cf14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x12cf18: 0xe4550034  swc1        $f21, 0x34($v0)
    ctx->pc = 0x12cf18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x12cf1c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x12cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x12cf20: 0xa0400023  sb          $zero, 0x23($v0)
    ctx->pc = 0x12cf20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 35), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cf24: 0xa0400022  sb          $zero, 0x22($v0)
    ctx->pc = 0x12cf24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 34), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cf28: 0xa0400021  sb          $zero, 0x21($v0)
    ctx->pc = 0x12cf28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cf2c: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x12cf2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x12cf30: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12cf30u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12cf34: 0x260300f0  addiu       $v1, $s0, 0xF0
    ctx->pc = 0x12cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x12cf38: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x12cf38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12cf3c: 0xe4540038  swc1        $f20, 0x38($v0)
    ctx->pc = 0x12cf3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x12cf40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12cf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf44: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x12cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x12cf48: 0x2673fec0  addiu       $s3, $s3, -0x140
    ctx->pc = 0x12cf48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294966976));
    // 0x12cf4c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x12cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x12cf50: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x12cf50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x12cf54: 0xae0000cc  sw          $zero, 0xCC($s0)
    ctx->pc = 0x12cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 0));
    // 0x12cf58: 0xe61400d4  swc1        $f20, 0xD4($s0)
    ctx->pc = 0x12cf58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 212), bits); }
    // 0x12cf5c: 0xc048424  jal         func_121090
    ctx->pc = 0x12CF5Cu;
    SET_GPR_U32(ctx, 31, 0x12CF64u);
    ctx->pc = 0x12CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CF5Cu;
    // 0x12cf60: 0xe61500d8  swc1        $f21, 0xD8($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x121090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121090u, 0x12CF5Cu, 0x12CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CF64u;
label_12cf64:
    // 0x12cf64: 0xae1000b4  sw          $s0, 0xB4($s0)
    ctx->pc = 0x12cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 16));
    // 0x12cf68: 0xae1400c4  sw          $s4, 0xC4($s0)
    ctx->pc = 0x12cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 20));
    // 0x12cf6c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x12cf6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf70: 0xe6140124  swc1        $f20, 0x124($s0)
    ctx->pc = 0x12cf70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x12cf74: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x12cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x12cf78: 0xe6140128  swc1        $f20, 0x128($s0)
    ctx->pc = 0x12cf78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x12cf7c: 0xe614012c  swc1        $f20, 0x12C($s0)
    ctx->pc = 0x12cf7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x12cf80: 0xe6140130  swc1        $f20, 0x130($s0)
    ctx->pc = 0x12cf80u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x12cf84: 0xe6140134  swc1        $f20, 0x134($s0)
    ctx->pc = 0x12cf84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 308), bits); }
    // 0x12cf88: 0xe6140138  swc1        $f20, 0x138($s0)
    ctx->pc = 0x12cf88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
    // 0x12cf8c: 0x6400004  bltz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12CF8Cu;
    {
        const bool branch_taken_0x12cf8c = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x12CF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF8Cu;
        // 0x12cf90: 0x538021  addu        $s0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf8c) {
            ctx->pc = 0x12CFA0u;
            goto label_12cfa0;
        }
    }
    ctx->pc = 0x12CF94u;
    // 0x12cf94: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x12CF94u;
    {
        const bool branch_taken_0x12cf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CF94u;
        // 0x12cf98: 0xae9000c0  sw          $s0, 0xC0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf94) {
            ctx->pc = 0x12CF00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12cf00;
        }
    }
    ctx->pc = 0x12CF9Cu;
    // 0x12cf9c: 0x0  nop
    ctx->pc = 0x12cf9cu;
    // NOP
label_12cfa0:
    // 0x12cfa0: 0xae8000c0  sw          $zero, 0xC0($s4)
    ctx->pc = 0x12cfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 192), GPR_U32(ctx, 0));
    // 0x12cfa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12cfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cfa8: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x12cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x12cfac: 0xae230158  sw          $v1, 0x158($s1)
    ctx->pc = 0x12cfacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 3));
label_12cfb0:
    // 0x12cfb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12cfb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cfb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12cfb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12cfb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12cfb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cfbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12cfbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12cfc0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12cfc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cfc4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x12cfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12cfc8: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x12cfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12cfcc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x12cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12cfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x12CFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CFD0u;
        // 0x12cfd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CFD8u;
}
