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

// Function: DrawSort__9WcSettingP8WcEntity
// Address: 0x1956a8 - 0x1958b8
void DrawSort__9WcSettingP8WcEntity_0x1956a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__9WcSettingP8WcEntity_0x1956a8");
#endif

    switch (ctx->pc) {
        case 0x195718u: goto label_195718;
        case 0x195720u: goto label_195720;
        default: break;
    }

    ctx->pc = 0x1956a8u;

    // 0x1956a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1956a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1956ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1956acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1956b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1956b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1956b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1956b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1956b8: 0x26120150  addiu       $s2, $s0, 0x150
    ctx->pc = 0x1956b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1956bc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1956bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1956c0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1956c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1956c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1956c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1956c8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x1956c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1956cc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1956ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1956d0: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1956D0u;
    {
        const bool branch_taken_0x1956d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1956D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1956D0u;
        // 0x1956d4: 0x8cb3015c  lw          $s3, 0x15C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1956d0) {
            ctx->pc = 0x19589Cu;
            goto label_19589c;
        }
    }
    ctx->pc = 0x1956D8u;
    // 0x1956d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1956d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1956dc: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1956dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1956e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1956e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1956e4: 0x5440006e  bnel        $v0, $zero, . + 4 + (0x6E << 2)
    ctx->pc = 0x1956E4u;
    {
        const bool branch_taken_0x1956e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1956e4) {
            ctx->pc = 0x1956E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1956E4u;
            // 0x1956e8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1958A0u;
            goto label_1958a0;
        }
    }
    ctx->pc = 0x1956ECu;
    // 0x1956ec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1956ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1956f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1956f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1956f4: 0x5440006a  bnel        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x1956F4u;
    {
        const bool branch_taken_0x1956f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1956f4) {
            ctx->pc = 0x1956F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1956F4u;
            // 0x1956f8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1958A0u;
            goto label_1958a0;
        }
    }
    ctx->pc = 0x1956FCu;
    // 0x1956fc: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x1956fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x195700: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x195700u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x195704: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x195704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x195708: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195708u;
    {
        const bool branch_taken_0x195708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195708) {
            ctx->pc = 0x195718u;
            goto label_195718;
        }
    }
    ctx->pc = 0x195710u;
    // 0x195710: 0xc061920  jal         func_186480
    ctx->pc = 0x195710u;
    SET_GPR_U32(ctx, 31, 0x195718u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x195710u, 0x195718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195718u;
label_195718:
    // 0x195718: 0xc061422  jal         func_185088
    ctx->pc = 0x195718u;
    SET_GPR_U32(ctx, 31, 0x195720u);
    ctx->pc = 0x19571Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195718u;
    // 0x19571c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x195718u, 0x195720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195720u;
label_195720:
    // 0x195720: 0x26060110  addiu       $a2, $s0, 0x110
    ctx->pc = 0x195720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x195724: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x195724u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x195728: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x195728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x19572c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19572Cu;
    {
        const bool branch_taken_0x19572c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19572Cu;
        // 0x195730: 0xc6010190  lwc1        $f1, 0x190($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19572c) {
            ctx->pc = 0x195738u;
            goto label_195738;
        }
    }
    ctx->pc = 0x195734u;
    // 0x195734: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x195734u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_195738:
    // 0x195738: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x195738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x19573c: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x19573cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x195740: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x195740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x195744: 0x24a5eb70  addiu       $a1, $a1, -0x1490
    ctx->pc = 0x195744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962032));
    // 0x195748: 0x2484ebf0  addiu       $a0, $a0, -0x1410
    ctx->pc = 0x195748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962160));
    // 0x19574c: 0x2463ec30  addiu       $v1, $v1, -0x13D0
    ctx->pc = 0x19574cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962224));
    // 0x195750: 0xd8c80000  lqc2        $vf8, 0x0($a2)
    ctx->pc = 0x195750u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x195754: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x195754u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x195758: 0xd8a50010  lqc2        $vf5, 0x10($a1)
    ctx->pc = 0x195758u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x19575c: 0xd8a60020  lqc2        $vf6, 0x20($a1)
    ctx->pc = 0x19575cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x195760: 0xd8a70030  lqc2        $vf7, 0x30($a1)
    ctx->pc = 0x195760u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x195764: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x195764u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x195768: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x195768u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19576c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x19576cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x195770: 0x4be83a0b  vmaddw.xyzw $vf8, $vf7, $vf8w
    ctx->pc = 0x195770u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x195774: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x195774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x195778: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x195778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19577c: 0x4a414240  vaddx.z     $vf9, $vf8, $vf1x
    ctx->pc = 0x19577cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x195780: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x195780u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x195784: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x195784u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x195788: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x195788u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x19578c: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x19578cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x195790: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x195790u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x195794: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x195794u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x195798: 0x4be930be  vmaddaz.xyzw $ACC, $vf6, $vf9z
    ctx->pc = 0x195798u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x19579c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x19579cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1957a0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1957a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1957a4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1957a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1957a8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1957a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1957ac: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x1957acu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1957b0: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1957b0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1957b4: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x1957b4u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x1957b8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1957b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1957bc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1957bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1957c0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1957c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1957c4: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x1957c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1957c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1957c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1957cc: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x1957ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1957d0: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1957d0u;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x1957d4: 0x4a0002ff  vnop
    ctx->pc = 0x1957d4u;
    // NOP operation, no action needed for VU0
    // 0x1957d8: 0x4a0002ff  vnop
    ctx->pc = 0x1957d8u;
    // NOP operation, no action needed for VU0
    // 0x1957dc: 0x4a0002ff  vnop
    ctx->pc = 0x1957dcu;
    // NOP operation, no action needed for VU0
    // 0x1957e0: 0x4a0002ff  vnop
    ctx->pc = 0x1957e0u;
    // NOP operation, no action needed for VU0
    // 0x1957e4: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x1957e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1957e8: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x1957e8u;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x1957ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1957ECu;
    {
        const bool branch_taken_0x1957ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1957F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1957ECu;
        // 0x1957f0: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1957ec) {
            ctx->pc = 0x195830u;
            goto label_195830;
        }
    }
    ctx->pc = 0x1957F4u;
    // 0x1957f4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1957f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1957f8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1957f8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1957fc: 0xc6010190  lwc1        $f1, 0x190($s0)
    ctx->pc = 0x1957fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195800: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x195800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x195804: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x195804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x195808: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x195808u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x19580c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19580cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195810: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
    ctx->pc = 0x195810u;
    {
        const bool branch_taken_0x195810 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x195810) {
            ctx->pc = 0x195814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x195810u;
            // 0x195814: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1958A0u;
            goto label_1958a0;
        }
    }
    ctx->pc = 0x195818u;
    // 0x195818: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x195818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x19581c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19581Cu;
    {
        const bool branch_taken_0x19581c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x195820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19581Cu;
        // 0x195820: 0xc7a00008  lwc1        $f0, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19581c) {
            ctx->pc = 0x195834u;
            goto label_195834;
        }
    }
    ctx->pc = 0x195824u;
    // 0x195824: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x195824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x195828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x195828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19582c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x19582cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_195830:
    // 0x195830: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x195830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_195834:
    // 0x195834: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x195834u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195838: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x195838u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x19583c: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x19583cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x195840: 0x18c0000f  blez        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x195840u;
    {
        const bool branch_taken_0x195840 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x195844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195840u;
        // 0x195844: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195840) {
            ctx->pc = 0x195880u;
            goto label_195880;
        }
    }
    ctx->pc = 0x195848u;
    // 0x195848: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x195848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x19584c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195850: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x195850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x195854: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x195854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x195858: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x195858u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19585c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x19585cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x195860: 0x661807  srav        $v1, $a2, $v1
    ctx->pc = 0x195860u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x195864: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x195864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x195868: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x195868u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19586c: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x19586cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x195870: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x195870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x195874: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x195874u;
    {
        const bool branch_taken_0x195874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x195878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195874u;
        // 0x195878: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195874) {
            ctx->pc = 0x195888u;
            goto label_195888;
        }
    }
    ctx->pc = 0x19587Cu;
    // 0x19587c: 0x0  nop
    ctx->pc = 0x19587cu;
    // NOP
label_195880:
    // 0x195880: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x195880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x195884: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x195884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_195888:
    // 0x195888: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x195888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x19588c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x19588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x195890: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x195890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x195894: 0xad030130  sw          $v1, 0x130($t0)
    ctx->pc = 0x195894u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 304), GPR_U32(ctx, 3));
    // 0x195898: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x195898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_19589c:
    // 0x19589c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x19589cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1958a0:
    // 0x1958a0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1958a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1958a4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1958a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1958a8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1958a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1958ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1958acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1958b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1958B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1958B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1958B0u;
        // 0x1958b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1958B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1958B8u;
}
