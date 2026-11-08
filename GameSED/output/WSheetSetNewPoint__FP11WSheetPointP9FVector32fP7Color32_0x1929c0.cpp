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

// Function: WSheetSetNewPoint__FP11WSheetPointP9FVector32fP7Color32
// Address: 0x1929c0 - 0x1929e4
void WSheetSetNewPoint__FP11WSheetPointP9FVector32fP7Color32_0x1929c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WSheetSetNewPoint__FP11WSheetPointP9FVector32fP7Color32_0x1929c0");
#endif

    ctx->pc = 0x1929c0u;

    // 0x1929c0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1929c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1929c4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1929c4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x1929c8: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1929c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1929cc: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1929CCu;
    {
        const bool branch_taken_0x1929cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1929D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1929CCu;
        // 0x1929d0: 0xe48c0014  swc1        $f12, 0x14($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1929cc) {
            ctx->pc = 0x1929DCu;
            goto label_1929dc;
        }
    }
    ctx->pc = 0x1929D4u;
    // 0x1929d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1929d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1929d8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1929d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1929dc:
    // 0x1929dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1929DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1929DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1929E4u;
}
