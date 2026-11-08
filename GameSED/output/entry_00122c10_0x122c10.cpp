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

// Function: entry_00122c10
// Address: 0x122c10 - 0x122cc8
void entry_00122c10_0x122c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122c10_0x122c10");
#endif

    ctx->pc = 0x122c10u;

label_122c10:
    // 0x122c10: 0xd94a0000  lqc2        $vf10, 0x0($t2)
    ctx->pc = 0x122c10u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x122c14: 0x4beae1bc  vmulax.xyzw $ACC, $vf28, $vf10x
    ctx->pc = 0x122c14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122c18: 0x4beae8bd  vmadday.xyzw $ACC, $vf29, $vf10y
    ctx->pc = 0x122c18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122c1c: 0x4beaf0be  vmaddaz.xyzw $ACC, $vf30, $vf10z
    ctx->pc = 0x122c1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x122c20: 0x4beafb4b  vmaddw.xyzw $vf13, $vf31, $vf10w
    ctx->pc = 0x122c20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x122c24: 0x4bed03bc  vdiv        $Q, $vf0w, $vf13w
    ctx->pc = 0x122c24u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x122c28: 0x4a0003bf  vwaitq
    ctx->pc = 0x122c28u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x122c2c: 0x4bc06b5c  vmulq.xyz   $vf13, $vf13, $Q
    ctx->pc = 0x122c2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x122c30: 0x4bee697d  vftoi4.xyzw $vf14, $vf13
    ctx->pc = 0x122c30u;
    { __m128 src = ctx->vu0_vf[13]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x122c34: 0xf96e0000  sqc2        $vf14, 0x0($t3)
    ctx->pc = 0x122c34u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x122c38: 0x214a0010  addi        $t2, $t2, 0x10
    ctx->pc = 0x122c38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x122c3c: 0x216b0010  addi        $t3, $t3, 0x10
    ctx->pc = 0x122c3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
    // 0x122c40: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x122c40u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x122c44: 0x1580fff2  bnez        $t4, . + 4 + (-0xE << 2)
    ctx->pc = 0x122C44u;
    {
        const bool branch_taken_0x122c44 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x122c44) {
            ctx->pc = 0x122C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122c10;
        }
    }
    ctx->pc = 0x122C4Cu;
    // 0x122c4c: 0x0  nop
    ctx->pc = 0x122c4cu;
    // NOP
    // 0x122c50: 0x8faa000c  lw          $t2, 0xC($sp)
    ctx->pc = 0x122c50u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x122c54: 0xa5903  sra         $t3, $t2, 4
    ctx->pc = 0x122c54u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 10), 4));
    // 0x122c58: 0x448b4000  mtc1        $t3, $f8
    ctx->pc = 0x122c58u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x122c5c: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x122c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x122c60: 0x46164202  mul.s       $f8, $f8, $f22
    ctx->pc = 0x122c60u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[22]);
    // 0x122c64: 0x4608aa41  sub.s       $f9, $f21, $f8
    ctx->pc = 0x122c64u;
    ctx->f[9] = FPU_SUB_S(ctx->f[21], ctx->f[8]);
    // 0x122c68: 0x46004a24  .word       0x46004A24                   # cvt.w.s     $f8, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x122c68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[8], &tmp, sizeof(tmp)); }
    // 0x122c6c: 0x440b4000  mfc1        $t3, $f8
    ctx->pc = 0x122c6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x122c70: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x122c70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x122c74: 0x716c58e8  pminw       $t3, $t3, $t4
    ctx->pc = 0x122c74u;
    SET_GPR_VEC(ctx, 11, PS2_PMINW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x122c78: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x122c78u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x122c7c: 0x1a0182d  daddu       $v1, $t5, $zero
    ctx->pc = 0x122c7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c80: 0x5620011  bltzl       $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x122C80u;
    {
        const bool branch_taken_0x122c80 = (GPR_S32(ctx, 11) < 0);
        if (branch_taken_0x122c80) {
            ctx->pc = 0x122CC8u;
            return;
        }
    }
    ctx->pc = 0x122C88u;
    // 0x122c88: 0x0  nop
    ctx->pc = 0x122c88u;
    // NOP
    // 0x122c8c: 0x240f0000  addiu       $t7, $zero, 0x0
    ctx->pc = 0x122c8cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x122c90: 0x1e0182d  daddu       $v1, $t7, $zero
    ctx->pc = 0x122c90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122c94: 0xb5100  sll         $t2, $t3, 4
    ctx->pc = 0x122c94u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x122c98: 0xafaa000c  sw          $t2, 0xC($sp)
    ctx->pc = 0x122c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 10));
    // 0x122c9c: 0xafaa001c  sw          $t2, 0x1C($sp)
    ctx->pc = 0x122c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 10));
    // 0x122ca0: 0xafaa002c  sw          $t2, 0x2C($sp)
    ctx->pc = 0x122ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 10));
    // 0x122ca4: 0xafaa003c  sw          $t2, 0x3C($sp)
    ctx->pc = 0x122ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 10));
    // 0x122ca8: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x122ca8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x122cac: 0x16c6818  mult        $t5, $t3, $t4
    ctx->pc = 0x122cacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x122cb0: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x122cb0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x122cb4: 0x71ae68e8  pminw       $t5, $t5, $t6
    ctx->pc = 0x122cb4u;
    SET_GPR_VEC(ctx, 13, PS2_PMINW(GPR_VEC(ctx, 13), GPR_VEC(ctx, 14)));
    // 0x122cb8: 0x926a0043  lbu         $t2, 0x43($s3)
    ctx->pc = 0x122cb8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 67)));
    // 0x122cbc: 0x1aa6818  mult        $t5, $t5, $t2
    ctx->pc = 0x122cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x122cc0: 0xd69c3  sra         $t5, $t5, 7
    ctx->pc = 0x122cc0u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 7));
    // 0x122cc4: 0xa26d0043  sb          $t5, 0x43($s3)
    ctx->pc = 0x122cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 67), (uint8_t)GPR_U32(ctx, 13));
    ctx->pc = 0x122cc8u;
}
