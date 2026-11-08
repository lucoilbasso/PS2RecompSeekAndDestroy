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

// Function: entry_001502f8
// Address: 0x1502f8 - 0x150350
void entry_001502f8_0x1502f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001502f8_0x1502f8");
#endif

    switch (ctx->pc) {
        case 0x150300u: goto label_150300;
        default: break;
    }

    ctx->pc = 0x1502f8u;

    // 0x1502f8: 0xc061422  jal         func_185088
    ctx->pc = 0x1502F8u;
    SET_GPR_U32(ctx, 31, 0x150300u);
    ctx->pc = 0x1502FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1502F8u;
    // 0x1502fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1502F8u, 0x150300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150300u;
label_150300:
    // 0x150300: 0x86420266  lh          $v0, 0x266($s2)
    ctx->pc = 0x150300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 614)));
    // 0x150304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x150304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x150308: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x150308u;
    {
        const bool branch_taken_0x150308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150308u;
        // 0x15030c: 0x264302d0  addiu       $v1, $s2, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150308) {
            ctx->pc = 0x150350u;
            return;
        }
    }
    ctx->pc = 0x150310u;
    // 0x150310: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x150310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x150314: 0x264405f0  addiu       $a0, $s2, 0x5F0
    ctx->pc = 0x150314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1520));
    // 0x150318: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x150318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15031c: 0x244200e0  addiu       $v0, $v0, 0xE0
    ctx->pc = 0x15031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x150320: 0xd8680000  lqc2        $vf8, 0x0($v1)
    ctx->pc = 0x150320u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150324: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x150324u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150328: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x150328u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x15032c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x15032cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x150330: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x150330u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x150334: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x150334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x150338: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x150338u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x15033c: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x15033cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x150340: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x150340u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x150344: 0xf88c0000  sqc2        $vf12, 0x0($a0)
    ctx->pc = 0x150344u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x150348: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x150348u;
    {
        const bool branch_taken_0x150348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150348u;
        // 0x15034c: 0x264403b0  addiu       $a0, $s2, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150348) {
            ctx->pc = 0x1503ACu;
            return;
        }
    }
    ctx->pc = 0x150350u;
}
