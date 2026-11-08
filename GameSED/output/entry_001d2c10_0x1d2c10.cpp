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

// Function: entry_001d2c10
// Address: 0x1d2c10 - 0x1d2c18
void entry_001d2c10_0x1d2c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2c10_0x1d2c10");
#endif

    ctx->pc = 0x1d2c10u;

    // 0x1d2c10: 0xc074494  jal         func_1D1250
    ctx->pc = 0x1D2C10u;
    SET_GPR_U32(ctx, 31, 0x1D2C18u);
    ctx->pc = 0x1D2C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C10u;
    // 0x1d2c14: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1250u, 0x1D2C10u, 0x1D2C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C18u;
}
