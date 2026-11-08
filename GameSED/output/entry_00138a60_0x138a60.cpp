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

// Function: entry_00138a60
// Address: 0x138a60 - 0x138a7c
void entry_00138a60_0x138a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138a60_0x138a60");
#endif

    ctx->pc = 0x138a60u;

    // 0x138a60: 0x0  nop
    ctx->pc = 0x138a60u;
    // NOP
    // 0x138a64: 0x0  nop
    ctx->pc = 0x138a64u;
    // NOP
    // 0x138a68: 0x0  nop
    ctx->pc = 0x138a68u;
    // NOP
    // 0x138a6c: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x138A6Cu;
    {
        const bool branch_taken_0x138a6c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x138A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138A6Cu;
        // 0x138a70: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138a6c) {
            ctx->pc = 0x138A58u;
            return;
        }
    }
    ctx->pc = 0x138A74u;
    // 0x138a74: 0x3e00008  jr          $ra
    ctx->pc = 0x138A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138A7Cu;
}
