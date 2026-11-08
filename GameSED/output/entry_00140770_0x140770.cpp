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

// Function: entry_00140770
// Address: 0x140770 - 0x1408b0
void entry_00140770_0x140770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00140770_0x140770");
#endif

    switch (ctx->pc) {
        case 0x140778u: goto label_140778;
        case 0x140814u: goto label_140814;
        case 0x140860u: goto label_140860;
        default: break;
    }

    ctx->pc = 0x140770u;

label_140770:
    // 0x140770: 0xc061422  jal         func_185088
label_140774:
    if (ctx->pc == 0x140774u) {
        ctx->pc = 0x140774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140770u;
        // 0x140774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140778u;
        goto label_140778;
    }
    ctx->pc = 0x140770u;
    SET_GPR_U32(ctx, 31, 0x140778u);
    ctx->pc = 0x140774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140770u;
    // 0x140774: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x140770u, 0x140778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140778u;
label_140778:
    // 0x140778: 0x268300e0  addiu       $v1, $s4, 0xE0
    ctx->pc = 0x140778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
label_14077c:
    // 0x14077c: 0x26c200a0  addiu       $v0, $s6, 0xA0
    ctx->pc = 0x14077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
label_140780:
    // 0x140780: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x140780u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_140784:
    // 0x140784: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x140784u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_140788:
    // 0x140788: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x140788u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
label_14078c:
    // 0x14078c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x14078cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
label_140790:
    // 0x140790: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x140790u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
label_140794:
    // 0x140794: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x140794u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_140798:
    // 0x140798: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x140798u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_14079c:
    // 0x14079c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x14079cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
label_1407a0:
    // 0x1407a0: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1407a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
label_1407a4:
    // 0x1407a4: 0xfa4c0000  sqc2        $vf12, 0x0($s2)
    ctx->pc = 0x1407a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[12]));
label_1407a8:
    // 0x1407a8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x1407a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1407ac:
    // 0x1407ac: 0xda030000  lqc2        $vf3, 0x0($s0)
    ctx->pc = 0x1407acu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1407b0:
    // 0x1407b0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1407b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1407b4:
    // 0x1407b4: 0xfaa20000  sqc2        $vf2, 0x0($s5)
    ctx->pc = 0x1407b4u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1407b8:
    // 0x1407b8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1407b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1407bc:
    // 0x1407bc: 0x4bc200ac  vsub.xyz    $vf2, $vf0, $vf2
    ctx->pc = 0x1407bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1407c0:
    // 0x1407c0: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1407c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1407c4:
    // 0x1407c4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1407c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_1407c8:
    // 0x1407c8: 0x24422640  addiu       $v0, $v0, 0x2640
    ctx->pc = 0x1407c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9792));
label_1407cc:
    // 0x1407cc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1407ccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1407d0:
    // 0x1407d0: 0x4bc4216a  vmul.xyz    $vf5, $vf4, $vf4
    ctx->pc = 0x1407d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1407d4:
    // 0x1407d4: 0x4b052941  vaddy.x     $vf5, $vf5, $vf5y
    ctx->pc = 0x1407d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1407d8:
    // 0x1407d8: 0x4b052942  vaddz.x     $vf5, $vf5, $vf5z
    ctx->pc = 0x1407d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_1407dc:
    // 0x1407dc: 0x4a6503be  vrsqrt      $Q, $vf0w, $vf5x
    ctx->pc = 0x1407dcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1407e0:
    // 0x1407e0: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x1407e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1407e4:
    // 0x1407e4: 0x4be43183  vaddw.xyzw  $vf6, $vf6, $vf4w
    ctx->pc = 0x1407e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1407e8:
    // 0x1407e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1407e8u;
    // VWAITQ (Q already resolved in this runtime)
label_1407ec:
    // 0x1407ec: 0x4bc0219c  vmulq.xyz   $vf6, $vf4, $Q
    ctx->pc = 0x1407ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
label_1407f0:
    // 0x1407f0: 0xf8460000  sqc2        $vf6, 0x0($v0)
    ctx->pc = 0x1407f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[6]));
label_1407f4:
    // 0x1407f4: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1407f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1407f8:
    // 0x1407f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1407f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1407fc:
    // 0x1407fc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1407fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_140800:
    // 0x140800: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x140800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_140804:
    // 0x140804: 0x8c6201d0  lw          $v0, 0x1D0($v1)
    ctx->pc = 0x140804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 464)));
label_140808:
    // 0x140808: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x140808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14080c:
    // 0x14080c: 0xc05be74  jal         func_16F9D0
label_140810:
    if (ctx->pc == 0x140810u) {
        ctx->pc = 0x140810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14080Cu;
        // 0x140810: 0x8c5101e4  lw          $s1, 0x1E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140814u;
        goto label_140814;
    }
    ctx->pc = 0x14080Cu;
    SET_GPR_U32(ctx, 31, 0x140814u);
    ctx->pc = 0x140810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14080Cu;
    // 0x140810: 0x8c5101e4  lw          $s1, 0x1E4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F9D0u, 0x14080Cu, 0x140814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140814u;
label_140814:
    // 0x140814: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x140814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_140818:
    // 0x140818: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x140818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14081c:
    // 0x14081c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x14081cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_140820:
    // 0x140820: 0x38420118  xori        $v0, $v0, 0x118
    ctx->pc = 0x140820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)280);
label_140824:
    // 0x140824: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x140824u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_140828:
    // 0x140828: 0x1200004b  beqz        $s0, . + 4 + (0x4B << 2)
label_14082c:
    if (ctx->pc == 0x14082Cu) {
        ctx->pc = 0x14082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140828u;
        // 0x14082c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140830u;
        goto label_140830;
    }
    ctx->pc = 0x140828u;
    {
        const bool branch_taken_0x140828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140828u;
        // 0x14082c: 0x3c050026  lui         $a1, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140828) {
            ctx->pc = 0x140958u;
            return;
        }
    }
    ctx->pc = 0x140830u;
label_140830:
    // 0x140830: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x140830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_140834:
    // 0x140834: 0xc7808154  lwc1        $f0, -0x7EAC($gp)
    ctx->pc = 0x140834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934868)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_140838:
    // 0x140838: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x140838u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
label_14083c:
    // 0x14083c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x14083cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_140840:
    // 0x140840: 0x24a52620  addiu       $a1, $a1, 0x2620
    ctx->pc = 0x140840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9760));
label_140844:
    // 0x140844: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x140844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_140848:
    // 0x140848: 0x24e72630  addiu       $a3, $a3, 0x2630
    ctx->pc = 0x140848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9776));
label_14084c:
    // 0x14084c: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x14084cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_140850:
    // 0x140850: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x140850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140854:
    // 0x140854: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x140854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_140858:
    // 0x140858: 0x40f809  jalr        $v0
label_14085c:
    if (ctx->pc == 0x14085Cu) {
        ctx->pc = 0x14085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140858u;
        // 0x14085c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140860u;
        goto label_140860;
    }
    ctx->pc = 0x140858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x140860u);
        ctx->pc = 0x14085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140858u;
        // 0x14085c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140858u, 0x140860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x140860u;
label_140860:
    // 0x140860: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_140864:
    if (ctx->pc == 0x140864u) {
        ctx->pc = 0x140868u;
        goto label_140868;
    }
    ctx->pc = 0x140860u;
    {
        const bool branch_taken_0x140860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140860) {
            ctx->pc = 0x140958u;
            return;
        }
    }
    ctx->pc = 0x140868u;
label_140868:
    // 0x140868: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x140868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_14086c:
    // 0x14086c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_140870:
    if (ctx->pc == 0x140870u) {
        ctx->pc = 0x140870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14086Cu;
        // 0x140870: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140874u;
        goto label_140874;
    }
    ctx->pc = 0x14086Cu;
    {
        const bool branch_taken_0x14086c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x140870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14086Cu;
        // 0x140870: 0x8e040160  lw          $a0, 0x160($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14086c) {
            ctx->pc = 0x140958u;
            return;
        }
    }
    ctx->pc = 0x140874u;
label_140874:
    // 0x140874: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x140874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_140878:
    // 0x140878: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_14087c:
    if (ctx->pc == 0x14087Cu) {
        ctx->pc = 0x14087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140878u;
        // 0x14087c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140880u;
        goto label_140880;
    }
    ctx->pc = 0x140878u;
    {
        const bool branch_taken_0x140878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140878u;
        // 0x14087c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140878) {
            ctx->pc = 0x1408B0u;
            return;
        }
    }
    ctx->pc = 0x140880u;
label_140880:
    // 0x140880: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x140880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_140884:
    // 0x140884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x140884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_140888:
    // 0x140888: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x140888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14088c:
    // 0x14088c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14088cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_140890:
    // 0x140890: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x140890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_140894:
    // 0x140894: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_140898:
    if (ctx->pc == 0x140898u) {
        ctx->pc = 0x14089Cu;
        goto label_14089c;
    }
    ctx->pc = 0x140894u;
    {
        const bool branch_taken_0x140894 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x140894) {
            ctx->pc = 0x140958u;
            return;
        }
    }
    ctx->pc = 0x14089Cu;
label_14089c:
    // 0x14089c: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x14089cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_1408a0:
    // 0x1408a0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1408a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1408a4:
    // 0x1408a4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1408a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_1408a8:
    // 0x1408a8: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1408ac:
    if (ctx->pc == 0x1408ACu) {
        ctx->pc = 0x1408ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408A8u;
        // 0x1408ac: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1408B0u;
        goto label_fallthrough_0x1408a8;
    }
    ctx->pc = 0x1408A8u;
    {
        const bool branch_taken_0x1408a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1408ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1408A8u;
        // 0x1408ac: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1408a8) {
            ctx->pc = 0x140954u;
            return;
        }
    }
label_fallthrough_0x1408a8:
    ctx->pc = 0x1408B0u;
}
