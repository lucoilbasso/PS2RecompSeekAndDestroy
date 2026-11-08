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

// Function: ApMotionLookActorProc__FP11BMotionCtrlP11BMotionWorki
// Address: 0x13a0b0 - 0x13a2f0
void ApMotionLookActorProc__FP11BMotionCtrlP11BMotionWorki_0x13a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApMotionLookActorProc__FP11BMotionCtrlP11BMotionWorki_0x13a0b0");
#endif

    switch (ctx->pc) {
        case 0x13a12cu: goto label_13a12c;
        case 0x13a134u: goto label_13a134;
        case 0x13a2c4u: goto label_13a2c4;
        default: break;
    }

    ctx->pc = 0x13a0b0u;

    // 0x13a0b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13a0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13a0b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x13a0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x13a0b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13a0b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a0bc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x13a0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x13a0c0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x13a0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x13a0c4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x13a0c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a0c8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x13a0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x13a0cc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x13a0ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a0d0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x13a0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x13a0d4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x13a0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x13a0d8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x13a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x13a0dc: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x13a0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x13a0e0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13a0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13a0e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x13a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13a0e8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13a0e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a0ec: 0x8e740074  lw          $s4, 0x74($s3)
    ctx->pc = 0x13a0ecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x13a0f0: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x13A0F0u;
    {
        const bool branch_taken_0x13a0f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A0F0u;
        // 0x13a0f4: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a0f0) {
            ctx->pc = 0x13A108u;
            goto label_13a108;
        }
    }
    ctx->pc = 0x13A0F8u;
    // 0x13a0f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x13a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13a0fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a0fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a100: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x13A100u;
    {
        const bool branch_taken_0x13a100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A100u;
        // 0x13a104: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a100) {
            ctx->pc = 0x13A2C4u;
            goto label_13a2c4;
        }
    }
    ctx->pc = 0x13A108u;
label_13a108:
    // 0x13a108: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x13a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13a10c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x13a10cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a110: 0x26320020  addiu       $s2, $s1, 0x20
    ctx->pc = 0x13a110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x13a114: 0x96420002  lhu         $v0, 0x2($s2)
    ctx->pc = 0x13a114u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x13a118: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x13a118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
    // 0x13a11c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A11Cu;
    {
        const bool branch_taken_0x13a11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A11Cu;
        // 0x13a120: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a11c) {
            ctx->pc = 0x13A12Cu;
            goto label_13a12c;
        }
    }
    ctx->pc = 0x13A124u;
    // 0x13a124: 0xc061920  jal         func_186480
    ctx->pc = 0x13A124u;
    SET_GPR_U32(ctx, 31, 0x13A12Cu);
    ctx->pc = 0x13A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A124u;
    // 0x13a128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x13A124u, 0x13A12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A12Cu;
label_13a12c:
    // 0x13a12c: 0xc061422  jal         func_185088
    ctx->pc = 0x13A12Cu;
    SET_GPR_U32(ctx, 31, 0x13A134u);
    ctx->pc = 0x13A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A12Cu;
    // 0x13a130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x13A12Cu, 0x13A134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A134u;
label_13a134:
    // 0x13a134: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x13a134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x13a138: 0x268300a0  addiu       $v1, $s4, 0xA0
    ctx->pc = 0x13a138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
    // 0x13a13c: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x13a13cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a140: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13a140u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a144: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x13a144u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13a148: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x13a148u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13a14c: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x13a14cu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13a150: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x13a150u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13a154: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x13a154u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13a158: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x13a158u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x13a15c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x13a15cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x13a160: 0xfa0c0000  sqc2        $vf12, 0x0($s0)
    ctx->pc = 0x13a160u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x13a164: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x13a164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x13a168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a16c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A16Cu;
    {
        const bool branch_taken_0x13a16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13A170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A16Cu;
        // 0x13a170: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a16c) {
            ctx->pc = 0x13A190u;
            goto label_13a190;
        }
    }
    ctx->pc = 0x13A174u;
    // 0x13a174: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x13a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13a178: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x13a178u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a17c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x13a17cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a180: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x13a180u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a184: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x13a184u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13a188: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x13A188u;
    {
        const bool branch_taken_0x13a188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A188u;
        // 0x13a18c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a188) {
            ctx->pc = 0x13A2B8u;
            goto label_13a2b8;
        }
    }
    ctx->pc = 0x13A190u;
label_13a190:
    // 0x13a190: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13A190u;
    {
        const bool branch_taken_0x13a190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A190u;
        // 0x13a194: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a190) {
            ctx->pc = 0x13A1E0u;
            goto label_13a1e0;
        }
    }
    ctx->pc = 0x13A198u;
    // 0x13a198: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x13a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13a19c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x13a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x13a1a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a1a4: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x13a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x13a1a8: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x13a1a8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13a1ac: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x13a1acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a1b0: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x13a1b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13a1b4: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x13a1b4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13a1b8: 0x4bc821bc  vmulax.xyz  $ACC, $vf4, $vf8x
    ctx->pc = 0x13a1b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x13a1bc: 0x4bc828bd  vmadday.xyz $ACC, $vf5, $vf8y
    ctx->pc = 0x13a1bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x13a1c0: 0x4bc8320a  vmaddz.xyz  $vf8, $vf6, $vf8z
    ctx->pc = 0x13a1c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x13a1c4: 0xfba80000  sqc2        $vf8, 0x0($sp)
    ctx->pc = 0x13a1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x13a1c8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x13a1c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a1cc: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x13a1ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a1d0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x13a1d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a1d4: 0xfa020000  sqc2        $vf2, 0x0($s0)
    ctx->pc = 0x13a1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13a1d8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x13A1D8u;
    {
        const bool branch_taken_0x13a1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1D8u;
        // 0x13a1dc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a1d8) {
            ctx->pc = 0x13A2B8u;
            goto label_13a2b8;
        }
    }
    ctx->pc = 0x13A1E0u;
label_13a1e0:
    // 0x13a1e0: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x13A1E0u;
    {
        const bool branch_taken_0x13a1e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A1E0u;
        // 0x13a1e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a1e0) {
            ctx->pc = 0x13A2B8u;
            goto label_13a2b8;
        }
    }
    ctx->pc = 0x13A1E8u;
    // 0x13a1e8: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x13a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x13a1ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a1f0: 0x246300d0  addiu       $v1, $v1, 0xD0
    ctx->pc = 0x13a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x13a1f4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x13a1f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13a1f8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x13a1f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a1fc: 0x4bc521ac  vsub.xyz    $vf6, $vf4, $vf5
    ctx->pc = 0x13a1fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13a200: 0x4bc631ea  vmul.xyz    $vf7, $vf6, $vf6
    ctx->pc = 0x13a200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13a204: 0x4a8739c2  vaddz.y     $vf7, $vf7, $vf7z
    ctx->pc = 0x13a204u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13a208: 0x4b0739c1  vaddy.x     $vf7, $vf7, $vf7y
    ctx->pc = 0x13a208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13a20c: 0x4a2703bd  .word       0x4A2703BD                   # vsqrt       $Q, $vf7x # 00200000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x13a20cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x13a210: 0x4a0003bf  vwaitq
    ctx->pc = 0x13a210u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13a214: 0x4b0001e0  vaddq.x     $vf7, $vf0, $Q
    ctx->pc = 0x13a214u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x13a218: 0x48223800  qmfc2.ni    $v0, $vf7
    ctx->pc = 0x13a218u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13a21c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13a21cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13a220: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x13a220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x13a224: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13a224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a228: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x13a228u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a22c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x13A22Cu;
    {
        const bool branch_taken_0x13a22c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A22Cu;
        // 0x13a230: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a22c) {
            ctx->pc = 0x13A2B8u;
            goto label_13a2b8;
        }
    }
    ctx->pc = 0x13A234u;
    // 0x13a234: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x13a234u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a238: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x13a238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x13a23c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x13a23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x13a240: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13a240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13a244: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x13A244u;
    {
        const bool branch_taken_0x13a244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a244) {
            ctx->pc = 0x13A248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13A244u;
            // 0x13a248: 0xc4600090  lwc1        $f0, 0x90($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13A284u;
            goto label_13a284;
        }
    }
    ctx->pc = 0x13A24Cu;
    // 0x13a24c: 0xc4610088  lwc1        $f1, 0x88($v1)
    ctx->pc = 0x13a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13a250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13a250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a254: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x13a254u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a258: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x13A258u;
    {
        const bool branch_taken_0x13a258 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A258u;
        // 0x13a25c: 0x8c620084  lw          $v0, 0x84($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a258) {
            ctx->pc = 0x13A274u;
            goto label_13a274;
        }
    }
    ctx->pc = 0x13A260u;
    // 0x13a260: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13a260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13a264: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13a264u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a268: 0x0  nop
    ctx->pc = 0x13a268u;
    // NOP
    // 0x13a26c: 0x0  nop
    ctx->pc = 0x13a26cu;
    // NOP
    // 0x13a270: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x13a270u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_13a274:
    // 0x13a274: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x13a274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x13a278: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x13a278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x13a27c: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x13a27cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x13a280: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x13a280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13a284:
    // 0x13a284: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x13a284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13a288: 0x26840150  addiu       $a0, $s4, 0x150
    ctx->pc = 0x13a288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    // 0x13a28c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x13a28cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x13a290: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x13a290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13a294: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x13a294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x13a298: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x13a298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x13a29c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x13a29cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a2a0: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13a2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a2a4: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x13a2a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x13a2a8: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x13a2a8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a2ac: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x13a2acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a2b0: 0xfaa20000  sqc2        $vf2, 0x0($s5)
    ctx->pc = 0x13a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13a2b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x13a2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_13a2b8:
    // 0x13a2b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13a2b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a2bc: 0xc04e734  jal         func_139CD0
    ctx->pc = 0x13A2BCu;
    SET_GPR_U32(ctx, 31, 0x13A2C4u);
    ctx->pc = 0x13A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13A2BCu;
    // 0x13a2c0: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139CD0u, 0x13A2BCu, 0x13A2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A2C4u;
label_13a2c4:
    // 0x13a2c4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x13a2c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a2c8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x13a2c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13a2cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x13a2ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a2d0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x13a2d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13a2d4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x13a2d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a2d8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x13a2d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x13a2dc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x13a2dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a2e0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x13a2e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x13a2e4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13a2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13a2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x13A2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A2E8u;
        // 0x13a2ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A2F0u;
}
