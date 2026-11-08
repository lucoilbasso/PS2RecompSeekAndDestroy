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

// Function: ApCRefResetTraceWork__FP10ApCRefWork
// Address: 0x1429d8 - 0x1429f0
void ApCRefResetTraceWork__FP10ApCRefWork_0x1429d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCRefResetTraceWork__FP10ApCRefWork_0x1429d8");
#endif

    ctx->pc = 0x1429d8u;

    // 0x1429d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1429d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1429dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1429dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1429e0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x1429e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x1429e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1429e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1429e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1429E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1429ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1429E8u;
        // 0x1429ec: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1429E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1429F0u;
}
