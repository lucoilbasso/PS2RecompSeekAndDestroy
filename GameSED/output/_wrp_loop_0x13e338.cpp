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

// Function: _wrp_loop
// Address: 0x13e338 - 0x13e430
void _wrp_loop_0x13e338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_wrp_loop_0x13e338");
#endif

    switch (ctx->pc) {
        case 0x13e424u: goto label_13e424;
        default: break;
    }

    ctx->pc = 0x13e338u;

label_13e338:
    // 0x13e338: 0xd9a80000  lqc2        $vf8, 0x0($t5)
    ctx->pc = 0x13e338u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x13e33c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x13e33cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e340: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x13e340u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e344: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x13e344u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e348: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x13e348u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13e34c: 0x4bec03bc  vdiv        $Q, $vf0w, $vf12w
    ctx->pc = 0x13e34cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x13e350: 0x4a20032c  vsub.w      $vf12, $vf0, $vf0
    ctx->pc = 0x13e350u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[12] = PS2_VBLEND(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13e354: 0x4be8a1bc  vmulax.xyzw $ACC, $vf20, $vf8x
    ctx->pc = 0x13e354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e358: 0x4be8a8bd  vmadday.xyzw $ACC, $vf21, $vf8y
    ctx->pc = 0x13e358u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e35c: 0x4be8b0be  vmaddaz.xyzw $ACC, $vf22, $vf8z
    ctx->pc = 0x13e35cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13e360: 0x4be8bb4b  vmaddw.xyzw $vf13, $vf23, $vf8w
    ctx->pc = 0x13e360u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x13e364: 0x4a0003bf  vwaitq
    ctx->pc = 0x13e364u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13e368: 0x4bc0631c  vmulq.xyz   $vf12, $vf12, $Q
    ctx->pc = 0x13e368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[12], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13e36c: 0x4bcd69ff  .word       0x4BCD69FF                   # vclipw.xyz  $vf13, $vf13w # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13e36cu;
    { __m128 fs = ctx->vu0_vf[13]; __m128 ft = _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3)); __m128 neg_ft = _mm_xor_ps(ft, _mm_castsi128_ps(_mm_set1_epi32(0x80000000))); __m128 gt = _mm_cmpgt_ps(fs, ft); __m128 lt = _mm_cmplt_ps(fs, neg_ft); uint32_t gt_mask = (uint32_t)_mm_movemask_ps(gt); uint32_t lt_mask = (uint32_t)_mm_movemask_ps(lt); uint32_t flags = ((lt_mask & 0x1) << 0) | ((gt_mask & 0x1) << 1) | ((lt_mask & 0x2) << 1) | ((gt_mask & 0x2) << 2) | ((lt_mask & 0x4) << 2) | ((gt_mask & 0x4) << 3); ctx->vu0_clip_flags = ((ctx->vu0_clip_flags << 6) | (flags & 0x3F)) & 0xFFFFFF; }
    // 0x13e370: 0x4bec617d  vftoi4.xyzw $vf12, $vf12
    ctx->pc = 0x13e370u;
    { __m128 src = ctx->vu0_vf[12]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13e374: 0xf98c0000  sqc2        $vf12, 0x0($t4)
    ctx->pc = 0x13e374u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x13e378: 0x218c0010  addi        $t4, $t4, 0x10
    ctx->pc = 0x13e378u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x13e37c: 0x21ad0010  addi        $t5, $t5, 0x10
    ctx->pc = 0x13e37cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 13), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x13e380: 0x2042ffff  addi        $v0, $v0, -0x1
    ctx->pc = 0x13e380u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x13e384: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13E384u;
    {
        const bool branch_taken_0x13e384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e384) {
            ctx->pc = 0x13E338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13e338;
        }
    }
    ctx->pc = 0x13E38Cu;
    // 0x13e38c: 0x0  nop
    ctx->pc = 0x13e38cu;
    // NOP
    // 0x13e390: 0x48449000  cfc2.ni     $a0, $vi18
    ctx->pc = 0x13e390u;
    SET_GPR_U32(ctx, 4, ctx->vu0_clip_flags & 0x00FFFFFFu);
    // 0x13e394: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x13e394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x13e398: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x13e398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x13e39c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x13e39cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13e3a0: 0x14800085  bnez        $a0, . + 4 + (0x85 << 2)
    ctx->pc = 0x13E3A0u;
    {
        const bool branch_taken_0x13e3a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3A0u;
        // 0x13e3a4: 0x8fa500e8  lw          $a1, 0xE8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3a0) {
            ctx->pc = 0x13E5B8u;
            return;
        }
    }
    ctx->pc = 0x13E3A8u;
    // 0x13e3a8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x13e3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e3ac: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x13e3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3b0: 0x8fb600e4  lw          $s6, 0xE4($sp)
    ctx->pc = 0x13e3b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x13e3b4: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x13e3b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x13e3b8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x13e3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13e3bc: 0x1271823  subu        $v1, $t1, $a3
    ctx->pc = 0x13e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x13e3c0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x13e3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x13e3c4: 0x24640006  addiu       $a0, $v1, 0x6
    ctx->pc = 0x13e3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x13e3c8: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x13e3c8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13e3cc: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x13e3ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x13e3d0: 0x10800057  beqz        $a0, . + 4 + (0x57 << 2)
    ctx->pc = 0x13E3D0u;
    {
        const bool branch_taken_0x13e3d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E3D0u;
        // 0x13e3d4: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e3d0) {
            ctx->pc = 0x13E530u;
            return;
        }
    }
    ctx->pc = 0x13E3D8u;
    // 0x13e3d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13e3d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3dc: 0x3c051100  lui         $a1, 0x1100
    ctx->pc = 0x13e3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4352 << 16));
    // 0x13e3e0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x13e3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x13e3e4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x13e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x13e3e8: 0x8f848c60  lw          $a0, -0x73A0($gp)
    ctx->pc = 0x13e3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
    // 0x13e3ec: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x13e3ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x13e3f0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x13e3f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13e3f4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x13e3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x13e3f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13e3f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e3fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x13e3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x13e400: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x13e400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x13e404: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13e404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13e408: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x13e408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x13e40c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x13e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13e410: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13e410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13e414: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x13e414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x13e418: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x13e418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x13e41c: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x13E41Cu;
    SET_GPR_U32(ctx, 31, 0x13E424u);
    ctx->pc = 0x13E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E41Cu;
    // 0x13e420: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x13E41Cu, 0x13E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E424u;
label_13e424:
    // 0x13e424: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x13e424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x13e428: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x13e428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x13e42c: 0x0  nop
    ctx->pc = 0x13e42cu;
    // NOP
    ctx->pc = 0x13e430u;
}
