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

// Function: eh_threads_initialize
// Address: 0x1cd4c8 - 0x1cd4dc
void eh_threads_initialize_0x1cd4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eh_threads_initialize_0x1cd4c8");
#endif

    ctx->pc = 0x1cd4c8u;

    // 0x1cd4c8: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x1cd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x1cd4cc: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x1cd4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
    // 0x1cd4d0: 0x2442d5b0  addiu       $v0, $v0, -0x2A50
    ctx->pc = 0x1cd4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956464));
    // 0x1cd4d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD4D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD4D4u;
        // 0x1cd4d8: 0xac62de14  sw          $v0, -0x21EC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294958612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD4D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD4DCu;
}
