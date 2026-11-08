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

// Function: entry_00152884
// Address: 0x152884 - 0x1528e8
void entry_00152884_0x152884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152884_0x152884");
#endif

    switch (ctx->pc) {
        case 0x1528e4u: goto label_1528e4;
        default: break;
    }

    ctx->pc = 0x152884u;

    // 0x152884: 0x8c6219f0  lw          $v0, 0x19F0($v1)
    ctx->pc = 0x152884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6640)));
    // 0x152888: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x152888u;
    {
        const bool branch_taken_0x152888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152888u;
        // 0x15288c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152888) {
            ctx->pc = 0x1528E8u;
            return;
        }
    }
    ctx->pc = 0x152890u;
    // 0x152890: 0x8c7019f4  lw          $s0, 0x19F4($v1)
    ctx->pc = 0x152890u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6644)));
    // 0x152894: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x152894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x152898: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x152898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x15289c: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x15289cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1528a0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1528a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1528a4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x1528a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1528a8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x1528a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1528ac: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x1528acu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1528b0: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x1528b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1528b4: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x1528b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1528b8: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x1528b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1528bc: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x1528bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1528c0: 0xfa2c0000  sqc2        $vf12, 0x0($s1)
    ctx->pc = 0x1528c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1528c4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1528c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1528c8: 0x246300e0  addiu       $v1, $v1, 0xE0
    ctx->pc = 0x1528c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x1528cc: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1528ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1528d0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1528d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1528d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1528d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1528d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1528dc: 0xc0674a2  jal         func_19D288
    ctx->pc = 0x1528DCu;
    SET_GPR_U32(ctx, 31, 0x1528E4u);
    ctx->pc = 0x1528E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1528DCu;
    // 0x1528e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D288u, 0x1528DCu, 0x1528E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528E4u;
label_1528e4:
    // 0x1528e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1528e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1528e8u;
}
