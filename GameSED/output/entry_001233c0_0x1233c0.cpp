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

// Function: entry_001233c0
// Address: 0x1233c0 - 0x123478
void entry_001233c0_0x1233c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001233c0_0x1233c0");
#endif

    ctx->pc = 0x1233c0u;

label_1233c0:
    // 0x1233c0: 0xd94a0000  lqc2        $vf10, 0x0($t2)
    ctx->pc = 0x1233c0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1233c4: 0x4beae1bc  vmulax.xyzw $ACC, $vf28, $vf10x
    ctx->pc = 0x1233c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1233c8: 0x4beae8bd  vmadday.xyzw $ACC, $vf29, $vf10y
    ctx->pc = 0x1233c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1233cc: 0x4beaf0be  vmaddaz.xyzw $ACC, $vf30, $vf10z
    ctx->pc = 0x1233ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1233d0: 0x4beafb4b  vmaddw.xyzw $vf13, $vf31, $vf10w
    ctx->pc = 0x1233d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1233d4: 0x4bed03bc  vdiv        $Q, $vf0w, $vf13w
    ctx->pc = 0x1233d4u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,3))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x1233d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1233d8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1233dc: 0x4bc06b5c  vmulq.xyz   $vf13, $vf13, $Q
    ctx->pc = 0x1233dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1233e0: 0x4bee697d  vftoi4.xyzw $vf14, $vf13
    ctx->pc = 0x1233e0u;
    { __m128 src = ctx->vu0_vf[13]; src = _mm_mul_ps(src, _mm_set1_ps(16.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[14] = _mm_blendv_ps(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x1233e4: 0xf96e0000  sqc2        $vf14, 0x0($t3)
    ctx->pc = 0x1233e4u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x1233e8: 0x214a0010  addi        $t2, $t2, 0x10
    ctx->pc = 0x1233e8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 10), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 10, (int32_t)tmp); }
    // 0x1233ec: 0x216b0010  addi        $t3, $t3, 0x10
    ctx->pc = 0x1233ecu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)16, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 11, (int32_t)tmp); }
    // 0x1233f0: 0x218cffff  addi        $t4, $t4, -0x1
    ctx->pc = 0x1233f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 12), (int32_t)4294967295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x1233f4: 0x1580fff2  bnez        $t4, . + 4 + (-0xE << 2)
    ctx->pc = 0x1233F4u;
    {
        const bool branch_taken_0x1233f4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x1233f4) {
            ctx->pc = 0x1233C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1233c0;
        }
    }
    ctx->pc = 0x1233FCu;
    // 0x1233fc: 0x0  nop
    ctx->pc = 0x1233fcu;
    // NOP
    // 0x123400: 0x8cca000c  lw          $t2, 0xC($a2)
    ctx->pc = 0x123400u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x123404: 0xa5903  sra         $t3, $t2, 4
    ctx->pc = 0x123404u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 10), 4));
    // 0x123408: 0x448b4000  mtc1        $t3, $f8
    ctx->pc = 0x123408u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x12340c: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x12340cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x123410: 0x460d4202  mul.s       $f8, $f8, $f13
    ctx->pc = 0x123410u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[13]);
    // 0x123414: 0x46086241  sub.s       $f9, $f12, $f8
    ctx->pc = 0x123414u;
    ctx->f[9] = FPU_SUB_S(ctx->f[12], ctx->f[8]);
    // 0x123418: 0x46004a24  .word       0x46004A24                   # cvt.w.s     $f8, $f9 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x123418u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[9]); std::memcpy(&ctx->f[8], &tmp, sizeof(tmp)); }
    // 0x12341c: 0x440b4000  mfc1        $t3, $f8
    ctx->pc = 0x12341cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x123420: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x123420u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x123424: 0x716c58e8  pminw       $t3, $t3, $t4
    ctx->pc = 0x123424u;
    SET_GPR_VEC(ctx, 11, PS2_PMINW(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x123428: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x123428u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x12342c: 0x1a0102d  daddu       $v0, $t5, $zero
    ctx->pc = 0x12342cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123430: 0x5620011  bltzl       $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x123430u;
    {
        const bool branch_taken_0x123430 = (GPR_S32(ctx, 11) < 0);
        if (branch_taken_0x123430) {
            ctx->pc = 0x123478u;
            return;
        }
    }
    ctx->pc = 0x123438u;
    // 0x123438: 0x0  nop
    ctx->pc = 0x123438u;
    // NOP
    // 0x12343c: 0x240f0000  addiu       $t7, $zero, 0x0
    ctx->pc = 0x12343cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x123440: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x123440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123444: 0xb5100  sll         $t2, $t3, 4
    ctx->pc = 0x123444u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x123448: 0xacca000c  sw          $t2, 0xC($a2)
    ctx->pc = 0x123448u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 10));
    // 0x12344c: 0xacca001c  sw          $t2, 0x1C($a2)
    ctx->pc = 0x12344cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 10));
    // 0x123450: 0xacca002c  sw          $t2, 0x2C($a2)
    ctx->pc = 0x123450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 10));
    // 0x123454: 0xacca003c  sw          $t2, 0x3C($a2)
    ctx->pc = 0x123454u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 60), GPR_U32(ctx, 10));
    // 0x123458: 0x240c0003  addiu       $t4, $zero, 0x3
    ctx->pc = 0x123458u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12345c: 0x16c6818  mult        $t5, $t3, $t4
    ctx->pc = 0x12345cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x123460: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x123460u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x123464: 0x71ae68e8  pminw       $t5, $t5, $t6
    ctx->pc = 0x123464u;
    SET_GPR_VEC(ctx, 13, PS2_PMINW(GPR_VEC(ctx, 13), GPR_VEC(ctx, 14)));
    // 0x123468: 0x908a0043  lbu         $t2, 0x43($a0)
    ctx->pc = 0x123468u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 67)));
    // 0x12346c: 0x1aa6818  mult        $t5, $t5, $t2
    ctx->pc = 0x12346cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x123470: 0xd69c3  sra         $t5, $t5, 7
    ctx->pc = 0x123470u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 13), 7));
    // 0x123474: 0xa08d0043  sb          $t5, 0x43($a0)
    ctx->pc = 0x123474u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 67), (uint8_t)GPR_U32(ctx, 13));
    ctx->pc = 0x123478u;
}
