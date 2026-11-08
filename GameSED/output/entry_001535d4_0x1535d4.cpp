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

// Function: entry_001535d4
// Address: 0x1535d4 - 0x1535dc
void entry_001535d4_0x1535d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001535d4_0x1535d4");
#endif

    ctx->pc = 0x1535d4u;

    // 0x1535d4: 0xc0549fa  jal         func_1527E8
    ctx->pc = 0x1535D4u;
    SET_GPR_U32(ctx, 31, 0x1535DCu);
    ctx->pc = 0x1535D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1535D4u;
    // 0x1535d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1527E8u, 0x1535D4u, 0x1535DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1535DCu;
}
