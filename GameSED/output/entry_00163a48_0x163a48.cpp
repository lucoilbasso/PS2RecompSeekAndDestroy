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

// Function: entry_00163a48
// Address: 0x163a48 - 0x163ac0
void entry_00163a48_0x163a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163a48_0x163a48");
#endif

    switch (ctx->pc) {
        case 0x163a50u: goto label_163a50;
        default: break;
    }

    ctx->pc = 0x163a48u;

    // 0x163a48: 0xc061422  jal         func_185088
    ctx->pc = 0x163A48u;
    SET_GPR_U32(ctx, 31, 0x163A50u);
    ctx->pc = 0x163A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A48u;
    // 0x163a4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x163A48u, 0x163A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A50u;
label_163a50:
    // 0x163a50: 0x262300e0  addiu       $v1, $s1, 0xE0
    ctx->pc = 0x163a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x163a54: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x163a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
    // 0x163a58: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x163a58u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163a5c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x163a5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163a60: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x163a60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x163a64: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x163a64u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x163a68: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x163a68u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x163a6c: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x163a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x163a70: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x163a70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x163a74: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x163a74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x163a78: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x163a78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x163a7c: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x163a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x163a80: 0x8e440250  lw          $a0, 0x250($s2)
    ctx->pc = 0x163a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 592)));
    // 0x163a84: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x163a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x163a88: 0x14820042  bne         $a0, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x163A88u;
    {
        const bool branch_taken_0x163a88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x163a88) {
            ctx->pc = 0x163B94u;
            return;
        }
    }
    ctx->pc = 0x163A90u;
    // 0x163a90: 0x8e5001f0  lw          $s0, 0x1F0($s2)
    ctx->pc = 0x163a90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x163a94: 0x8e430254  lw          $v1, 0x254($s2)
    ctx->pc = 0x163a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
    // 0x163a98: 0x26110020  addiu       $s1, $s0, 0x20
    ctx->pc = 0x163a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x163a9c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x163a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x163aa0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x163aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x163aa4: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x163aa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x163aa8: 0xc4600088  lwc1        $f0, 0x88($v1)
    ctx->pc = 0x163aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163aac: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x163aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x163ab0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163AB0u;
    {
        const bool branch_taken_0x163ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AB0u;
        // 0x163ab4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ab0) {
            ctx->pc = 0x163AC0u;
            return;
        }
    }
    ctx->pc = 0x163AB8u;
    // 0x163ab8: 0xc061920  jal         func_186480
    ctx->pc = 0x163AB8u;
    SET_GPR_U32(ctx, 31, 0x163AC0u);
    ctx->pc = 0x163ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AB8u;
    // 0x163abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186480u, 0x163AB8u, 0x163AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AC0u;
}
