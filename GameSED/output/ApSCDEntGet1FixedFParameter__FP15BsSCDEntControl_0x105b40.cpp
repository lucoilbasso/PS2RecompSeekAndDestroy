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

// Function: ApSCDEntGet1FixedFParameter__FP15BsSCDEntControl
// Address: 0x105b40 - 0x105b70
void ApSCDEntGet1FixedFParameter__FP15BsSCDEntControl_0x105b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApSCDEntGet1FixedFParameter__FP15BsSCDEntControl_0x105b40");
#endif

    switch (ctx->pc) {
        case 0x105b50u: goto label_105b50;
        default: break;
    }

    ctx->pc = 0x105b40u;

    // 0x105b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x105b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x105b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105b48: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x105B48u;
    SET_GPR_U32(ctx, 31, 0x105B50u);
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x105B48u, 0x105B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B50u;
label_105b50:
    // 0x105b50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x105b50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b54: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x105b54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x105b58: 0x4be5213f  vitof15.xyzw $vf5, $vf4
    ctx->pc = 0x105b58u;
    { __m128i src = _mm_castps_si128(ctx->vu0_vf[4]); __m128 res = _mm_cvtepi32_ps(src); res = _mm_mul_ps(res, _mm_set1_ps(3.05175781e-05f)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x105b5c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x105b5cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x105b60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x105b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x105b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105b68: 0x3e00008  jr          $ra
    ctx->pc = 0x105B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B68u;
        // 0x105b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105B70u;
}
