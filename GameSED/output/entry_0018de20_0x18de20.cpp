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

// Function: entry_0018de20
// Address: 0x18de20 - 0x18de28
void entry_0018de20_0x18de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018de20_0x18de20");
#endif

    ctx->pc = 0x18de20u;

    // 0x18de20: 0xc06343e  jal         func_18D0F8
    ctx->pc = 0x18DE20u;
    SET_GPR_U32(ctx, 31, 0x18DE28u);
    ctx->pc = 0x18DE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DE20u;
    // 0x18de24: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D0F8u, 0x18DE20u, 0x18DE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DE28u;
}
