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

// Function: ApTankAimingTargetOffset__FP7ApcTankP9FVector32
// Address: 0x14f7b8 - 0x14f9b8
void ApTankAimingTargetOffset__FP7ApcTankP9FVector32_0x14f7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApTankAimingTargetOffset__FP7ApcTankP9FVector32_0x14f7b8");
#endif

    switch (ctx->pc) {
        case 0x14f834u: goto label_14f834;
        case 0x14f83cu: goto label_14f83c;
        case 0x14f90cu: goto label_14f90c;
        case 0x14f914u: goto label_14f914;
        default: break;
    }

    ctx->pc = 0x14f7b8u;

    // 0x14f7b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14f7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14f7bc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x14f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x14f7c0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x14f7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x14f7c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14f7c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f7c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14f7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f7cc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14f7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14f7d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14f7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14f7d4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x14f7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x14f7d8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x14f7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x14f7dc: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x14f7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x14f7e0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x14f7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x14f7e4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x14f7e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x14f7e8: 0x8e620184  lw          $v0, 0x184($s3)
    ctx->pc = 0x14f7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
    // 0x14f7ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x14f7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x14f7f0: 0x54400066  bnel        $v0, $zero, . + 4 + (0x66 << 2)
    ctx->pc = 0x14F7F0u;
    {
        const bool branch_taken_0x14f7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f7f0) {
            ctx->pc = 0x14F7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F7F0u;
            // 0x14f7f4: 0x26620800  addiu       $v0, $s3, 0x800 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2048));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F98Cu;
            goto label_14f98c;
        }
    }
    ctx->pc = 0x14F7F8u;
    // 0x14f7f8: 0x54a0005d  bnel        $a1, $zero, . + 4 + (0x5D << 2)
    ctx->pc = 0x14F7F8u;
    {
        const bool branch_taken_0x14f7f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f7f8) {
            ctx->pc = 0x14F7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F7F8u;
            // 0x14f7fc: 0x26630800  addiu       $v1, $s3, 0x800 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2048));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F970u;
            goto label_14f970;
        }
    }
    ctx->pc = 0x14F800u;
    // 0x14f800: 0x8e720074  lw          $s2, 0x74($s3)
    ctx->pc = 0x14f800u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x14f804: 0x1240005c  beqz        $s2, . + 4 + (0x5C << 2)
    ctx->pc = 0x14F804u;
    {
        const bool branch_taken_0x14f804 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F804u;
        // 0x14f808: 0x3416e000  ori         $s6, $zero, 0xE000 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f804) {
            ctx->pc = 0x14F978u;
            goto label_14f978;
        }
    }
    ctx->pc = 0x14F80Cu;
    // 0x14f80c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x14f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x14f810: 0x26710800  addiu       $s1, $s3, 0x800
    ctx->pc = 0x14f810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 2048));
    // 0x14f814: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14f814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f818: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x14f818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x14f81c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x14f81cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x14f820: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x14f820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x14f824: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14F824u;
    {
        const bool branch_taken_0x14f824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F824u;
        // 0x14f828: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f824) {
            ctx->pc = 0x14F834u;
            goto label_14f834;
        }
    }
    ctx->pc = 0x14F82Cu;
    // 0x14f82c: 0xc061920  jal         func_186480
    ctx->pc = 0x14F82Cu;
    SET_GPR_U32(ctx, 31, 0x14F834u);
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x14F82Cu, 0x14F834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F834u;
label_14f834:
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
            goto label_14f97c;
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
            goto label_14f97c;
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
            goto label_14f90c;
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
label_14f90c:
    // 0x14f90c: 0xc061422  jal         func_185088
    ctx->pc = 0x14F90Cu;
    SET_GPR_U32(ctx, 31, 0x14F914u);
    ctx->pc = 0x14F910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F90Cu;
    // 0x14f910: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x14F90Cu, 0x14F914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F914u;
label_14f914:
    // 0x14f914: 0x260300e0  addiu       $v1, $s0, 0xE0
    ctx->pc = 0x14f914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x14f918: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x14f918u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14f91c: 0x7ea20000  sq          $v0, 0x0($s5)
    ctx->pc = 0x14f91cu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), GPR_VEC(ctx, 2));
    // 0x14f920: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14f920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14f924: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14f924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f928: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x14f928u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f92c: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x14F92Cu;
    {
        const bool branch_taken_0x14f92c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14f92c) {
            ctx->pc = 0x14F930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F92Cu;
            // 0x14f930: 0x8e4203b0  lw          $v0, 0x3B0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F94Cu;
            goto label_14f94c;
        }
    }
    ctx->pc = 0x14F934u;
    // 0x14f934: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x14f934u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f938: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x14f938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14f93c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x14f93cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x14f940: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x14f940u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x14f944: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x14f944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14f948: 0x8e4203b0  lw          $v0, 0x3B0($s2)
    ctx->pc = 0x14f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 944)));
label_14f94c:
    // 0x14f94c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x14f94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x14f950: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x14F950u;
    {
        const bool branch_taken_0x14f950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14f950) {
            ctx->pc = 0x14F954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F950u;
            // 0x14f954: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F958u;
            goto label_14f958;
        }
    }
    ctx->pc = 0x14F958u;
label_14f958:
    // 0x14f958: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x14f958u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f95c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x14f95cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14f960: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x14f960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x14f964: 0xfa220000  sqc2        $vf2, 0x0($s1)
    ctx->pc = 0x14f964u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14f968: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F968u;
    {
        const bool branch_taken_0x14f968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F968u;
        // 0x14f96c: 0x8e620184  lw          $v0, 0x184($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f968) {
            ctx->pc = 0x14F97Cu;
            goto label_14f97c;
        }
    }
    ctx->pc = 0x14F970u;
label_14f970:
    // 0x14f970: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x14f970u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14f974: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x14f974u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_14f978:
    // 0x14f978: 0x8e620184  lw          $v0, 0x184($s3)
    ctx->pc = 0x14f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
label_14f97c:
    // 0x14f97c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x14f97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x14f980: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14f980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x14f984: 0xae620184  sw          $v0, 0x184($s3)
    ctx->pc = 0x14f984u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 388), GPR_U32(ctx, 2));
    // 0x14f988: 0x26620800  addiu       $v0, $s3, 0x800
    ctx->pc = 0x14f988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 2048));
label_14f98c:
    // 0x14f98c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14f98cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f990: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14f990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f994: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14f994u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f998: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x14f998u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14f99c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x14f99cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14f9a0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x14f9a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14f9a4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x14f9a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14f9a8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x14f9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14f9ac: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x14f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14f9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x14F9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F9B0u;
        // 0x14f9b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F9B8u;
}
