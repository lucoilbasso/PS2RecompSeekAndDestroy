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

// Function: CalcFieldBlockViewInfoPreset__16ApFieldBlockCtrl
// Address: 0x145bc0 - 0x145bf8
void CalcFieldBlockViewInfoPreset__16ApFieldBlockCtrl_0x145bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcFieldBlockViewInfoPreset__16ApFieldBlockCtrl_0x145bc0");
#endif

    ctx->pc = 0x145bc0u;

    // 0x145bc0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x145bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x145bc4: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x145bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x145bc8: 0x2463eb70  addiu       $v1, $v1, -0x1490
    ctx->pc = 0x145bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962032));
    // 0x145bcc: 0x2442ebb0  addiu       $v0, $v0, -0x1450
    ctx->pc = 0x145bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962096));
    // 0x145bd0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x145bd0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x21EBB0u));
    // 0x145bd4: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x145bd4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(FAST_READ128(0x21EBC0u));
    // 0x145bd8: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x145bd8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(FAST_READ128(0x21EBD0u));
    // 0x145bdc: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x145bdcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(FAST_READ128(0x21EBE0u));
    // 0x145be0: 0xd8740000  lqc2        $vf20, 0x0($v1)
    ctx->pc = 0x145be0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(FAST_READ128(0x21EB70u));
    // 0x145be4: 0xd8750010  lqc2        $vf21, 0x10($v1)
    ctx->pc = 0x145be4u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(FAST_READ128(0x21EB80u));
    // 0x145be8: 0xd8760020  lqc2        $vf22, 0x20($v1)
    ctx->pc = 0x145be8u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(FAST_READ128(0x21EB90u));
    // 0x145bec: 0xd8770030  lqc2        $vf23, 0x30($v1)
    ctx->pc = 0x145becu;
    ctx->vu0_vf[23] = _mm_castsi128_ps(FAST_READ128(0x21EBA0u));
    // 0x145bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x145BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145BF8u;
}
