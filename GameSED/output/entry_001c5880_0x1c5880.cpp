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

// Function: entry_001c5880
// Address: 0x1c5880 - 0x1c5888
void entry_001c5880_0x1c5880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5880_0x1c5880");
#endif

    ctx->pc = 0x1c5880u;

    // 0x1c5880: 0xc0715f4  jal         func_1C57D0
    ctx->pc = 0x1C5880u;
    SET_GPR_U32(ctx, 31, 0x1C5888u);
    ctx->pc = 0x1C5884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5880u;
    // 0x1c5884: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C57D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C57D0u, 0x1C5880u, 0x1C5888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5888u;
}
