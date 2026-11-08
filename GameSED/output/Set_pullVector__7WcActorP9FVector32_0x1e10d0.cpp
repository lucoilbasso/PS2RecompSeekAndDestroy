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

// Function: Set_pullVector__7WcActorP9FVector32
// Address: 0x1e10d0 - 0x1e10e8
void Set_pullVector__7WcActorP9FVector32_0x1e10d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_pullVector__7WcActorP9FVector32_0x1e10d0");
#endif

    ctx->pc = 0x1e10d0u;

    // 0x1e10d0: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x1e10d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x1e10d4: 0x2463ef50  addiu       $v1, $v1, -0x10B0
    ctx->pc = 0x1e10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963024));
    // 0x1e10d8: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1e10d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e10dc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1e10dcu;
    do { __m128i _value = (GPR_VEC(ctx, 2)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x21EF50u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x21EF50u, _value); } while (0);
    // 0x1e10e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E10E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E10E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E10E8u;
}
