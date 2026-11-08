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

// Function: entry_00163048
// Address: 0x163048 - 0x1630e8
void entry_00163048_0x163048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163048_0x163048");
#endif

    switch (ctx->pc) {
        case 0x163084u: goto label_163084;
        default: break;
    }

    ctx->pc = 0x163048u;

    // 0x163048: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x163048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x16304c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x16304cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x163050: 0xae360008  sw          $s6, 0x8($s1)
    ctx->pc = 0x163050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 22));
    // 0x163054: 0x2450a430  addiu       $s0, $v0, -0x5BD0
    ctx->pc = 0x163054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    // 0x163058: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x163058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16305c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x16305cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x163060: 0x8e8201b0  lw          $v0, 0x1B0($s4)
    ctx->pc = 0x163060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 432)));
    // 0x163064: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x163064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x163068: 0x8e031400  lw          $v1, 0x1400($s0)
    ctx->pc = 0x163068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1FB830u));
    // 0x16306c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x16306cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x163070: 0xac640044  sw          $a0, 0x44($v1)
    ctx->pc = 0x163070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 4));
    // 0x163074: 0x10a6001c  beq         $a1, $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x163074u;
    {
        const bool branch_taken_0x163074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x163078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163074u;
        // 0x163078: 0xae9101b0  sw          $s1, 0x1B0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 432), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163074) {
            ctx->pc = 0x1630E8u;
            return;
        }
    }
    ctx->pc = 0x16307Cu;
    // 0x16307c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x16307Cu;
    SET_GPR_U32(ctx, 31, 0x163084u);
    ctx->pc = 0x163080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16307Cu;
    // 0x163080: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x16307Cu, 0x163084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163084u;
label_163084:
    // 0x163084: 0x8e041400  lw          $a0, 0x1400($s0)
    ctx->pc = 0x163084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5120)));
    // 0x163088: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x163088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x16308c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x163090: 0x24420610  addiu       $v0, $v0, 0x610
    ctx->pc = 0x163090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1552));
    // 0x163094: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x163094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x163098: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x163098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x16309c: 0xd8480000  lqc2        $vf8, 0x0($v0)
    ctx->pc = 0x16309cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1630a0: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x1630a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1630a4: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x1630a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1630a8: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x1630a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1630ac: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x1630acu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1630b0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1630b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1630b4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1630b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1630b8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1630b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1630bc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1630bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1630c0: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x1630c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1630c4: 0x8e041400  lw          $a0, 0x1400($s0)
    ctx->pc = 0x1630c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5120)));
    // 0x1630c8: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1630c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1630cc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1630ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1630d0: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1630d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1630d4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1630d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1630d8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1630d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1630dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1630dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1630e0: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x1630E0u;
    SET_GPR_U32(ctx, 31, 0x1630E8u);
    ctx->pc = 0x1630E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1630E0u;
    // 0x1630e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x1630E0u, 0x1630E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1630E8u;
}
