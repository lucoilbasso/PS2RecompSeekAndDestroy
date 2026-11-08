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

// Function: DrawSort__9WcHitDrawP8WcEntity
// Address: 0x1896d8 - 0x18983c
void DrawSort__9WcHitDrawP8WcEntity_0x1896d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawSort__9WcHitDrawP8WcEntity_0x1896d8");
#endif

    switch (ctx->pc) {
        case 0x189720u: goto label_189720;
        case 0x189728u: goto label_189728;
        default: break;
    }

    ctx->pc = 0x1896d8u;

    // 0x1896d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1896d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1896dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1896dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1896e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1896e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1896e4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1896e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1896e8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1896e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1896ec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1896ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1896f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1896f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1896f4: 0x8cb2015c  lw          $s2, 0x15C($a1)
    ctx->pc = 0x1896f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 348)));
    // 0x1896f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1896f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1896fc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1896fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x189700: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x189700u;
    {
        const bool branch_taken_0x189700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x189704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189700u;
        // 0x189704: 0x24710020  addiu       $s1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189700) {
            ctx->pc = 0x189824u;
            goto label_189824;
        }
    }
    ctx->pc = 0x189708u;
    // 0x189708: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x189708u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x18970c: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x18970cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x189710: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x189710u;
    {
        const bool branch_taken_0x189710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x189710) {
            ctx->pc = 0x189720u;
            goto label_189720;
        }
    }
    ctx->pc = 0x189718u;
    // 0x189718: 0xc061920  jal         func_186480
    ctx->pc = 0x189718u;
    SET_GPR_U32(ctx, 31, 0x189720u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x189718u, 0x189720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189720u;
label_189720:
    // 0x189720: 0xc061422  jal         func_185088
    ctx->pc = 0x189720u;
    SET_GPR_U32(ctx, 31, 0x189728u);
    ctx->pc = 0x189724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189720u;
    // 0x189724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x189720u, 0x189728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189728u;
label_189728:
    // 0x189728: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x189728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x18972c: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x18972cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x189730: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x189730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x189734: 0x2463ebb0  addiu       $v1, $v1, -0x1450
    ctx->pc = 0x189734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962096));
    // 0x189738: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x189738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x18973c: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x18973cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x189740: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x189740u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x189744: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x189744u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x189748: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x189748u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x18974c: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x18974cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x189750: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x189750u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189754: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x189754u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189758: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x189758u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18975c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x18975cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x189760: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x189760u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x189764: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x189764u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x189768: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x189768u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x18976c: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x18976cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x189770: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x189770u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x189774: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x189774u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x189778: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x189778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x18977c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x18977cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189780: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x189780u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189784: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x189784u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x189788: 0x4a0003bf  vwaitq
    ctx->pc = 0x189788u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18978c: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x18978cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x189790: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x189790u;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x189794: 0x4a0002ff  vnop
    ctx->pc = 0x189794u;
    // NOP operation, no action needed for VU0
    // 0x189798: 0x4a0002ff  vnop
    ctx->pc = 0x189798u;
    // NOP operation, no action needed for VU0
    // 0x18979c: 0x4a0002ff  vnop
    ctx->pc = 0x18979cu;
    // NOP operation, no action needed for VU0
    // 0x1897a0: 0x4a0002ff  vnop
    ctx->pc = 0x1897a0u;
    // NOP operation, no action needed for VU0
    // 0x1897a4: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x1897a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1897a8: 0x48449000  cfc2.ni     $a0, $vi18
    ctx->pc = 0x1897a8u;
    SET_GPR_U32(ctx, 4, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x1897ac: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1897ACu;
    {
        const bool branch_taken_0x1897ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1897B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897ACu;
        // 0x1897b0: 0x240482d  daddu       $t1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897ac) {
            ctx->pc = 0x189824u;
            goto label_189824;
        }
    }
    ctx->pc = 0x1897B4u;
    // 0x1897b4: 0x8d270004  lw          $a3, 0x4($t1)
    ctx->pc = 0x1897b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x1897b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1897b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1897bc: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x1897bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x1897c0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1897c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1897c4: 0x2448fffe  addiu       $t0, $v0, -0x2
    ctx->pc = 0x1897c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1897c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1897c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1897cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1897ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1897d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1897d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1897d4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1897d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1897d8: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1897D8u;
    {
        const bool branch_taken_0x1897d8 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1897DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897D8u;
        // 0x1897dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897d8) {
            ctx->pc = 0x189808u;
            goto label_189808;
        }
    }
    ctx->pc = 0x1897E0u;
    // 0x1897e0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1897e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1897e4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1897e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1897e8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1897e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1897ec: 0x461007  srav        $v0, $a2, $v0
    ctx->pc = 0x1897ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x1897f0: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x1897f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1897f4: 0x704310c8  pmaxw       $v0, $v0, $v1
    ctx->pc = 0x1897f4u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1897f8: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x1897f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x1897fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1897FCu;
    {
        const bool branch_taken_0x1897fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1897FCu;
        // 0x189800: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1897fc) {
            ctx->pc = 0x189810u;
            goto label_189810;
        }
    }
    ctx->pc = 0x189804u;
    // 0x189804: 0x0  nop
    ctx->pc = 0x189804u;
    // NOP
label_189808:
    // 0x189808: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x189808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18980c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18980cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_189810:
    // 0x189810: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x189810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x189814: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x189814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x189818: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x189818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18981c: 0xac830130  sw          $v1, 0x130($a0)
    ctx->pc = 0x18981cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 304), GPR_U32(ctx, 3));
    // 0x189820: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x189820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_189824:
    // 0x189824: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x189824u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189828: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x189828u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18982c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x18982cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189830: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x189830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x189834: 0x3e00008  jr          $ra
    ctx->pc = 0x189834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189834u;
        // 0x189838: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18983Cu;
}
