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

// Function: entry_00111424
// Address: 0x111424 - 0x111478
void entry_00111424_0x111424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111424_0x111424");
#endif

    switch (ctx->pc) {
        case 0x111430u: goto label_111430;
        default: break;
    }

    ctx->pc = 0x111424u;

    // 0x111424: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x111424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111428: 0xc0592d6  jal         func_164B58
    ctx->pc = 0x111428u;
    SET_GPR_U32(ctx, 31, 0x111430u);
    ctx->pc = 0x11142Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111428u;
    // 0x11142c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164B58u, 0x111428u, 0x111430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111430u;
label_111430:
    // 0x111430: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x111430u;
    {
        const bool branch_taken_0x111430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x111430) {
            ctx->pc = 0x111478u;
            return;
        }
    }
    ctx->pc = 0x111438u;
    // 0x111438: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x111438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x11143c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x11143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x111440: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x111440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x111444: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x111444u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x111448: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x111448u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11144c: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x11144cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x111450: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x111450u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x111454: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x111454u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x111458: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x111458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x11145c: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x11145cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x111460: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x111460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x111464: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x111464u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x111468: 0xfa4c0000  sqc2        $vf12, 0x0($s2)
    ctx->pc = 0x111468u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x11146c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x11146Cu;
    {
        const bool branch_taken_0x11146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11146Cu;
        // 0x111470: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11146c) {
            ctx->pc = 0x11150Cu;
            return;
        }
    }
    ctx->pc = 0x111474u;
    // 0x111474: 0x0  nop
    ctx->pc = 0x111474u;
    // NOP
    ctx->pc = 0x111478u;
}
