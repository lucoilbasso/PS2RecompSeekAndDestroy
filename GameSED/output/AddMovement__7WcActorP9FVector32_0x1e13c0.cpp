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

// Function: AddMovement__7WcActorP9FVector32
// Address: 0x1e13c0 - 0x1e13dc
void AddMovement__7WcActorP9FVector32_0x1e13c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AddMovement__7WcActorP9FVector32_0x1e13c0");
#endif

    ctx->pc = 0x1e13c0u;

    // 0x1e13c0: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x1e13c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x1e13c4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e13c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e13c8: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x1e13c8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e13cc: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1e13ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e13d0: 0xf8820000  sqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e13d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e13d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E13D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E13D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E13DCu;
}
