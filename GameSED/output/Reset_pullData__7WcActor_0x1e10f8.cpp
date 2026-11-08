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

// Function: Reset_pullData__7WcActor
// Address: 0x1e10f8 - 0x1e1110
void Reset_pullData__7WcActor_0x1e10f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Reset_pullData__7WcActor_0x1e10f8");
#endif

    ctx->pc = 0x1e10f8u;

    // 0x1e10f8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x1e10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x1e10fc: 0x2442ef50  addiu       $v0, $v0, -0x10B0
    ctx->pc = 0x1e10fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963024));
    // 0x1e1100: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1e1100u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[0])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x21EF50u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x21EF50u, _value); } while (0);
    // 0x1e1104: 0xaf808d90  sw          $zero, -0x7270($gp)
    ctx->pc = 0x1e1104u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 0));
    // 0x1e1108: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1108u;
        // 0x1e110c: 0xaf808d94  sw          $zero, -0x726C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1110u;
}
