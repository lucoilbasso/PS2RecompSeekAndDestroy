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

// Function: entry_0015611c
// Address: 0x15611c - 0x15612c
void entry_0015611c_0x15611c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015611c_0x15611c");
#endif

    ctx->pc = 0x15611cu;

    // 0x15611c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x15611cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x156120: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x156120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x156124: 0xc068186  jal         func_1A0618
    ctx->pc = 0x156124u;
    SET_GPR_U32(ctx, 31, 0x15612Cu);
    ctx->pc = 0x156128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156124u;
    // 0x156128: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x156124u, 0x15612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15612Cu;
}
