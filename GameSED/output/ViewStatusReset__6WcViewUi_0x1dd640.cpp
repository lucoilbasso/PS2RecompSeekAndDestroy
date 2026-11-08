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

// Function: ViewStatusReset__6WcViewUi
// Address: 0x1dd640 - 0x1dd654
void ViewStatusReset__6WcViewUi_0x1dd640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ViewStatusReset__6WcViewUi_0x1dd640");
#endif

    ctx->pc = 0x1dd640u;

    // 0x1dd640: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x1dd640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1dd644: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x1dd644u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x1dd648: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1dd648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1dd64c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD64Cu;
        // 0x1dd650: 0xac820150  sw          $v0, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD654u;
}
