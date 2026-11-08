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

// Function: entry_001189ac
// Address: 0x1189ac - 0x1189b4
void entry_001189ac_0x1189ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001189ac_0x1189ac");
#endif

    ctx->pc = 0x1189acu;

    // 0x1189ac: 0xc045360  jal         func_114D80
    ctx->pc = 0x1189ACu;
    SET_GPR_U32(ctx, 31, 0x1189B4u);
    ctx->pc = 0x1189B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1189ACu;
    // 0x1189b0: 0x2118021  addu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D80u, 0x1189ACu, 0x1189B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1189B4u;
}
