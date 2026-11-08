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

// Function: entry_00150260
// Address: 0x150260 - 0x150268
void entry_00150260_0x150260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150260_0x150260");
#endif

    ctx->pc = 0x150260u;

    // 0x150260: 0xc05967c  jal         func_1659F0
    ctx->pc = 0x150260u;
    SET_GPR_U32(ctx, 31, 0x150268u);
    ctx->pc = 0x150264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150260u;
    // 0x150264: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659F0u, 0x150260u, 0x150268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150268u;
}
