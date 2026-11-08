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

// Function: Init__9ApcPtcSpri
// Address: 0x122168 - 0x122330
void Init__9ApcPtcSpri_0x122168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Init__9ApcPtcSpri_0x122168");
#endif

    switch (ctx->pc) {
        case 0x122190u: goto label_122190;
        case 0x12229cu: goto label_12229c;
        case 0x1222d0u: goto label_1222d0;
        case 0x1222ecu: goto label_1222ec;
        default: break;
    }

    ctx->pc = 0x122168u;

    // 0x122168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x122168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12216c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12216cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x122170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x122170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122174: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x122174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x122178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12217c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12217cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x122180: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x122180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x122184: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x122184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x122188: 0xc061258  jal         func_184960
    ctx->pc = 0x122188u;
    SET_GPR_U32(ctx, 31, 0x122190u);
    ctx->pc = 0x12218Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122188u;
    // 0x12218c: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184960u, 0x122188u, 0x122190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122190u;
label_122190:
    // 0x122190: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x122190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x122194: 0x240301f6  addiu       $v1, $zero, 0x1F6
    ctx->pc = 0x122194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 502));
    // 0x122198: 0x2404e000  addiu       $a0, $zero, -0x2000
    ctx->pc = 0x122198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
    // 0x12219c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x12219cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1221a0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1221a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1221a4: 0x26250030  addiu       $a1, $s1, 0x30
    ctx->pc = 0x1221a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1221a8: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x1221a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x1221ac: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1221acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1221b0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1221b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1221b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1221b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1221b8: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x1221b8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x1221bc: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x1221bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1221c0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1221c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1221c4: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x1221c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1221c8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1221c8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1221cc: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x1221ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x1221d0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1221d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1221d4: 0x4be00843  vaddw.xyzw  $vf1, $vf1, $vf0w
    ctx->pc = 0x1221d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1221d8: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1221d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1221dc: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x1221dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1221e0: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x1221e0u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1221e4: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x1221e4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1221e8: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x1221e8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1221ec: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x1221ecu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1221f0: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x1221f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1221f4: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x1221f4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1221f8: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x1221f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1221fc: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x1221fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x122200: 0x262300a0  addiu       $v1, $s1, 0xA0
    ctx->pc = 0x122200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x122204: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x122204u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x122208: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x122208u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x12220c: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x12220cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x122210: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x122210u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x122214: 0xf8640030  sqc2        $vf4, 0x30($v1)
    ctx->pc = 0x122214u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x122218: 0xf8650020  sqc2        $vf5, 0x20($v1)
    ctx->pc = 0x122218u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x12221c: 0xf8660010  sqc2        $vf6, 0x10($v1)
    ctx->pc = 0x12221cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x122220: 0xf8670000  sqc2        $vf7, 0x0($v1)
    ctx->pc = 0x122220u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x122224: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x122224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x122228: 0x4be4033c  vmove.xyzw  $vf4, $vf0
    ctx->pc = 0x122228u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x12222c: 0x4be5233d  vmr32.xyzw  $vf5, $vf4
    ctx->pc = 0x12222cu;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x122230: 0x4be62b3d  vmr32.xyzw  $vf6, $vf5
    ctx->pc = 0x122230u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x122234: 0x4be7333d  vmr32.xyzw  $vf7, $vf6
    ctx->pc = 0x122234u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x122238: 0xf8440030  sqc2        $vf4, 0x30($v0)
    ctx->pc = 0x122238u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12223c: 0xf8450020  sqc2        $vf5, 0x20($v0)
    ctx->pc = 0x12223cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x122240: 0xf8460010  sqc2        $vf6, 0x10($v0)
    ctx->pc = 0x122240u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x122244: 0xf8470000  sqc2        $vf7, 0x0($v0)
    ctx->pc = 0x122244u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x122248: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x122248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12224c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x12224cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x122250: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x122250u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x122254: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x122254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x122258: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x122258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12225c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x12225cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x122260: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x122260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x122264: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x122264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x122268: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x122268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x12226c: 0x529c0  sll         $a1, $a1, 7
    ctx->pc = 0x12226cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x122270: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x122270u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x122274: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x122274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
    // 0x122278: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x122278u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
    // 0x12227c: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x12227cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
    // 0x122280: 0xae20012c  sw          $zero, 0x12C($s1)
    ctx->pc = 0x122280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
    // 0x122284: 0xae200130  sw          $zero, 0x130($s1)
    ctx->pc = 0x122284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 0));
    // 0x122288: 0xae200134  sw          $zero, 0x134($s1)
    ctx->pc = 0x122288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 0));
    // 0x12228c: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x12228cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
    // 0x122290: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x122290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
    // 0x122294: 0xc068086  jal         func_1A0218
    ctx->pc = 0x122294u;
    SET_GPR_U32(ctx, 31, 0x12229Cu);
    ctx->pc = 0x122298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122294u;
    // 0x122298: 0xae200148  sw          $zero, 0x148($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0218u, 0x122294u, 0x12229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12229Cu;
label_12229c:
    // 0x12229c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12229cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222a0: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1222A0u;
    {
        const bool branch_taken_0x1222a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1222A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222A0u;
        // 0x1222a4: 0xae240154  sw          $a0, 0x154($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1222a0) {
            ctx->pc = 0x122310u;
            goto label_122310;
        }
    }
    ctx->pc = 0x1222A8u;
    // 0x1222a8: 0xae340150  sw          $s4, 0x150($s1)
    ctx->pc = 0x1222a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 20));
    // 0x1222ac: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1222acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1222b0: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1222b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1222b4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1222b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222b8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1222b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1222bc: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1222bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1222c0: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1222c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1222c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1222C4u;
    {
        const bool branch_taken_0x1222c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1222C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222C4u;
        // 0x1222c8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1222c4) {
            ctx->pc = 0x1222D4u;
            goto label_1222d4;
        }
    }
    ctx->pc = 0x1222CCu;
    // 0x1222cc: 0x0  nop
    ctx->pc = 0x1222ccu;
    // NOP
label_1222d0:
    // 0x1222d0: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1222d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_1222d4:
    // 0x1222d4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1222d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1222d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1222d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222dc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1222dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1222e0: 0x2652fe80  addiu       $s2, $s2, -0x180
    ctx->pc = 0x1222e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966912));
    // 0x1222e4: 0xc0485a8  jal         func_1216A0
    ctx->pc = 0x1222E4u;
    SET_GPR_U32(ctx, 31, 0x1222ECu);
    ctx->pc = 0x1222E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1222E4u;
    // 0x1222e8: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1216A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1216A0u, 0x1222E4u, 0x1222ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1222ECu;
label_1222ec:
    // 0x1222ec: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x1222ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x1222f0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1222f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222f4: 0x8e220154  lw          $v0, 0x154($s1)
    ctx->pc = 0x1222f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x1222f8: 0x681fff5  bgez        $s4, . + 4 + (-0xB << 2)
    ctx->pc = 0x1222F8u;
    {
        const bool branch_taken_0x1222f8 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x1222FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1222F8u;
        // 0x1222fc: 0x528021  addu        $s0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1222f8) {
            ctx->pc = 0x1222D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1222d0;
        }
    }
    ctx->pc = 0x122300u;
    // 0x122300: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x122300u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x122304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x122304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122308: 0x8e230154  lw          $v1, 0x154($s1)
    ctx->pc = 0x122308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 340)));
    // 0x12230c: 0xae230158  sw          $v1, 0x158($s1)
    ctx->pc = 0x12230cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 3));
label_122310:
    // 0x122310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122314: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122314u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122318: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x122318u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12231c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12231cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x122320: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x122320u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122324: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x122324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x122328: 0x3e00008  jr          $ra
    ctx->pc = 0x122328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122328u;
        // 0x12232c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122330u;
}
