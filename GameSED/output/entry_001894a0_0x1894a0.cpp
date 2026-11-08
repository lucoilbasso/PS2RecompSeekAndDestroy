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

// Function: entry_001894a0
// Address: 0x1894a0 - 0x189580
void entry_001894a0_0x1894a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001894a0_0x1894a0");
#endif

    switch (ctx->pc) {
        case 0x1894a8u: goto label_1894a8;
        default: break;
    }

    ctx->pc = 0x1894a0u;

    // 0x1894a0: 0xc061422  jal         func_185088
    ctx->pc = 0x1894A0u;
    SET_GPR_U32(ctx, 31, 0x1894A8u);
    ctx->pc = 0x1894A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1894A0u;
    // 0x1894a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1894A0u, 0x1894A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1894A8u;
label_1894a8:
    // 0x1894a8: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x1894a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x1894ac: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1894acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1894b0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1894b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1894b4: 0x2463ebb0  addiu       $v1, $v1, -0x1450
    ctx->pc = 0x1894b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962096));
    // 0x1894b8: 0x2442ec70  addiu       $v0, $v0, -0x1390
    ctx->pc = 0x1894b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962288));
    // 0x1894bc: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x1894bcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1894c0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1894c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x1894c4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1894c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x1894c8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1894c8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x1894cc: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1894ccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x1894d0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1894d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1894d4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1894d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1894d8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1894d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1894dc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1894dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1894e0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1894e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1894e4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1894e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1894e8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1894e8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1894ec: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x1894ecu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1894f0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1894f0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1894f4: 0x48c09000  ctc2.ni     $zero, $vi18
    ctx->pc = 0x1894f4u;
    ctx->vu0_clip_flags = GPR_U32(ctx, 0) & 0x00FFFFFFu;
    // 0x1894f8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1894f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1894fc: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1894fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189500: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x189500u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x189504: 0x4be83b4b  vmaddw.xyzw $vf13, $vf7, $vf8w
    ctx->pc = 0x189504u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x189508: 0x4a0003bf  vwaitq
    ctx->pc = 0x189508u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18950c: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x18950cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x189510: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x189510u;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x189514: 0x4a0002ff  vnop
    ctx->pc = 0x189514u;
    // NOP operation, no action needed for VU0
    // 0x189518: 0x4a0002ff  vnop
    ctx->pc = 0x189518u;
    // NOP operation, no action needed for VU0
    // 0x18951c: 0x4a0002ff  vnop
    ctx->pc = 0x18951cu;
    // NOP operation, no action needed for VU0
    // 0x189520: 0x4a0002ff  vnop
    ctx->pc = 0x189520u;
    // NOP operation, no action needed for VU0
    // 0x189524: 0xfa6c0000  sqc2        $vf12, 0x0($s3)
    ctx->pc = 0x189524u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x189528: 0x48439000  cfc2.ni     $v1, $vi18
    ctx->pc = 0x189528u;
    SET_GPR_U32(ctx, 3, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x18952c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x18952Cu;
    {
        const bool branch_taken_0x18952c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x189530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18952Cu;
        // 0x189530: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18952c) {
            ctx->pc = 0x1895A0u;
            return;
        }
    }
    ctx->pc = 0x189534u;
    // 0x189534: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x189534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189538: 0xc4c00178  lwc1        $f0, 0x178($a2)
    ctx->pc = 0x189538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18953c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18953cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x189540: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x189540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x189544: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x189544u;
    {
        const bool branch_taken_0x189544 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x189548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189544u;
        // 0x189548: 0x240402d  daddu       $t0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189544) {
            ctx->pc = 0x189580u;
            return;
        }
    }
    ctx->pc = 0x18954Cu;
    // 0x18954c: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x18954cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x189550: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x189550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189554: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x189554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x189558: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x189558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x18955c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18955cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x189560: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x189560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x189564: 0x671807  srav        $v1, $a3, $v1
    ctx->pc = 0x189564u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 3) & 0x1F));
    // 0x189568: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x189568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x18956c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x18956cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x189570: 0x704510c8  pmaxw       $v0, $v0, $a1
    ctx->pc = 0x189570u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x189574: 0x21000  sll         $v0, $v0, 0
    ctx->pc = 0x189574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x189578: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x189578u;
    {
        const bool branch_taken_0x189578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189578u;
        // 0x18957c: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189578) {
            ctx->pc = 0x189588u;
            return;
        }
    }
    ctx->pc = 0x189580u;
}
