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

// Function: entry_00171cdc
// Address: 0x171cdc - 0x171ce4
void entry_00171cdc_0x171cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171cdc_0x171cdc");
#endif

    ctx->pc = 0x171cdcu;

    // 0x171cdc: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x171CDCu;
    SET_GPR_U32(ctx, 31, 0x171CE4u);
    ctx->pc = 0x171CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171CDCu;
    // 0x171ce0: 0x248413b0  addiu       $a0, $a0, 0x13B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175740u, 0x171CDCu, 0x171CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171CE4u;
}
