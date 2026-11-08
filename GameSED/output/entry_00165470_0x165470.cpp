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

// Function: entry_00165470
// Address: 0x165470 - 0x1654dc
void entry_00165470_0x165470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165470_0x165470");
#endif

    switch (ctx->pc) {
        case 0x165478u: goto label_165478;
        default: break;
    }

    ctx->pc = 0x165470u;

    // 0x165470: 0xc061422  jal         func_185088
    ctx->pc = 0x165470u;
    SET_GPR_U32(ctx, 31, 0x165478u);
    ctx->pc = 0x165474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165470u;
    // 0x165474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x165470u, 0x165478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165478u;
label_165478:
    // 0x165478: 0x8e430690  lw          $v1, 0x690($s2)
    ctx->pc = 0x165478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1680)));
    // 0x16547c: 0x8c6219f0  lw          $v0, 0x19F0($v1)
    ctx->pc = 0x16547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6640)));
    // 0x165480: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x165480u;
    {
        const bool branch_taken_0x165480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165480u;
        // 0x165484: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165480) {
            ctx->pc = 0x1654DCu;
            return;
        }
    }
    ctx->pc = 0x165488u;
    // 0x165488: 0x8c6419f4  lw          $a0, 0x19F4($v1)
    ctx->pc = 0x165488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6644)));
    // 0x16548c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x16548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x165490: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x165490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x165494: 0xd8880000  lqc2        $vf8, 0x0($a0)
    ctx->pc = 0x165494u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x165498: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x165498u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16549c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x16549cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1654a0: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1654a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1654a4: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1654a4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1654a8: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1654a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1654ac: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1654acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1654b0: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1654b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1654b4: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1654b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1654b8: 0xfbac0000  sqc2        $vf12, 0x0($sp)
    ctx->pc = 0x1654b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1654bc: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1654bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1654c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1654c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1654c4: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1654c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1654c8: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1654c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1654cc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1654ccu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1654d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1654d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1654d4: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x1654D4u;
    SET_GPR_U32(ctx, 31, 0x1654DCu);
    ctx->pc = 0x1654D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1654D4u;
    // 0x1654d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x1654D4u, 0x1654DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1654DCu;
}
