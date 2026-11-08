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

// Function: entry_001cf478
// Address: 0x1cf478 - 0x1cf480
void entry_001cf478_0x1cf478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf478_0x1cf478");
#endif

    ctx->pc = 0x1cf478u;

    // 0x1cf478: 0xc040072  jal         func_1001C8
    ctx->pc = 0x1CF478u;
    SET_GPR_U32(ctx, 31, 0x1CF480u);
    ctx->pc = 0x1CF47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF478u;
    // 0x1cf47c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001C8u, 0x1CF478u, 0x1CF480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF480u;
}
