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

// Function: sceDevVu0GetTpc
// Address: 0x1acaa8 - 0x1acab4
void sceDevVu0GetTpc_0x1acaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceDevVu0GetTpc_0x1acaa8");
#endif

    ctx->pc = 0x1acaa8u;

    // 0x1acaa8: 0x4842d000  cfc2.ni     $v0, $vi26
    ctx->pc = 0x1acaa8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_tpc >> 3);
    // 0x1acaac: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAACu;
        // 0x1acab0: 0x3042ffff  andi        $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ACAB4u;
}
