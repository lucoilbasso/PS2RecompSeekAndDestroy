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

// Function: MoverMotionExec__10ApcHetomov
// Address: 0x16ef28 - 0x16ef88
void MoverMotionExec__10ApcHetomov_0x16ef28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoverMotionExec__10ApcHetomov_0x16ef28");
#endif

    switch (ctx->pc) {
        case 0x16ef70u: goto label_16ef70;
        case 0x16ef78u: goto label_16ef78;
        default: break;
    }

    ctx->pc = 0x16ef28u;

    // 0x16ef28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ef28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ef2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ef30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ef30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ef34: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16ef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16ef38: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x16ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x16ef3c: 0x26050240  addiu       $a1, $s0, 0x240
    ctx->pc = 0x16ef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x16ef40: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16ef40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ef44: 0xd8a50000  lqc2        $vf5, 0x0($a1)
    ctx->pc = 0x16ef44u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ef48: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16ef48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16ef4c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x16ef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16ef50: 0x26030280  addiu       $v1, $s0, 0x280
    ctx->pc = 0x16ef50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x16ef54: 0x260202a0  addiu       $v0, $s0, 0x2A0
    ctx->pc = 0x16ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x16ef58: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16ef58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ef5c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x16ef5cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ef60: 0x4bc5212a  vmul.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x16ef60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x16ef64: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x16ef64u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x16ef68: 0xc05ba8c  jal         func_16EA30
    ctx->pc = 0x16EF68u;
    SET_GPR_U32(ctx, 31, 0x16EF70u);
    ctx->pc = 0x16EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16EA30u, 0x16EF68u, 0x16EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF70u;
label_16ef70:
    // 0x16ef70: 0xc05b978  jal         func_16E5E0
    ctx->pc = 0x16EF70u;
    SET_GPR_U32(ctx, 31, 0x16EF78u);
    ctx->pc = 0x16EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EF70u;
    // 0x16ef74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E5E0u, 0x16EF70u, 0x16EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EF78u;
label_16ef78:
    // 0x16ef78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ef78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ef7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16ef7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ef80: 0x3e00008  jr          $ra
    ctx->pc = 0x16EF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EF80u;
        // 0x16ef84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16EF88u;
}
