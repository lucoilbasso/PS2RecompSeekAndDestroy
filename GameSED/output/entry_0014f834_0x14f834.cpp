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

// Function: entry_0014f834
// Address: 0x14f834 - 0x14f90c
void entry_0014f834_0x14f834(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f834_0x14f834");
#endif

    switch (ctx->pc) {
        case 0x14f83cu: goto label_14f83c;
        default: break;
    }

    ctx->pc = 0x14f834u;

    // 0x14f834: 0xc061422  jal         func_185088
    ctx->pc = 0x14F834u;
    SET_GPR_U32(ctx, 31, 0x14F83Cu);
    ctx->pc = 0x14F838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F834u;
    // 0x14f838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x14F834u, 0x14F83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F83Cu;
label_14f83c:
    // 0x14f83c: 0x268400e0  addiu       $a0, $s4, 0xE0
    ctx->pc = 0x14f83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x14f840: 0x264200a0  addiu       $v0, $s2, 0xA0
    ctx->pc = 0x14f840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x14f844: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x14f844u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f848: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x14f848u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14f84c: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x14f84cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14f850: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x14f850u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x14f854: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x14f854u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x14f858: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x14f858u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14f85c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x14f85cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14f860: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x14f860u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x14f864: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x14f864u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x14f868: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x14f868u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x14f86c: 0x8e630180  lw          $v1, 0x180($s3)
    ctx->pc = 0x14f86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 384)));
    // 0x14f870: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x14f870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x14f874: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x14f874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14f878: 0x50600040  beql        $v1, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x14F878u;
    {
        const bool branch_taken_0x14f878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f878) {
            ctx->pc = 0x14F87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F878u;
            // 0x14f87c: 0x8e620184  lw          $v0, 0x184($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F97Cu;
            return;
        }
    }
    ctx->pc = 0x14F880u;
    // 0x14f880: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x14f880u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14f884: 0x24021118  addiu       $v0, $zero, 0x1118
    ctx->pc = 0x14f884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4376));
    // 0x14f888: 0x5462003c  bnel        $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x14F888u;
    {
        const bool branch_taken_0x14f888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f888) {
            ctx->pc = 0x14F88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F888u;
            // 0x14f88c: 0x8e620184  lw          $v0, 0x184($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F97Cu;
            return;
        }
    }
    ctx->pc = 0x14F890u;
    // 0x14f890: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x14f890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x14f894: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x14f894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x14f898: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14f898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f89c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f8a0: 0xc6420088  lwc1        $f2, 0x88($s2)
    ctx->pc = 0x14f8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14f8a4: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x14f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x14f8a8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x14f8a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14f8ac: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x14f8acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f8b0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x14f8b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14f8b4: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x14f8b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x14f8b8: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x14f8b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x14f8bc: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x14f8bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x14f8c0: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x14f8c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x14f8c4: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x14f8c4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x14f8c8: 0x4a0003bf  vwaitq
    ctx->pc = 0x14f8c8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x14f8cc: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x14f8ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x14f8d0: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x14f8d0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x14f8d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14f8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f8d8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x14f8d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x14f8dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14f8dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f8e0: 0x46000869  min.s       $f1, $f1, $f0
    ctx->pc = 0x14f8e0u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[0]);
    // 0x14f8e4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x14f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x14f8e8: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x14f8e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x14f8ec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x14f8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f8f0: 0x26140020  addiu       $s4, $s0, 0x20
    ctx->pc = 0x14f8f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x14f8f4: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x14f8f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x14f8f8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x14f8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x14f8fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F8FCu;
    {
        const bool branch_taken_0x14f8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F8FCu;
        // 0x14f900: 0x3a0a82d  daddu       $s5, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f8fc) {
            ctx->pc = 0x14F90Cu;
            return;
        }
    }
    ctx->pc = 0x14F904u;
    // 0x14f904: 0xc061920  jal         func_186480
    ctx->pc = 0x14F904u;
    SET_GPR_U32(ctx, 31, 0x14F90Cu);
    ctx->pc = 0x14F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F904u;
    // 0x14f908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x14F904u, 0x14F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F90Cu;
}
