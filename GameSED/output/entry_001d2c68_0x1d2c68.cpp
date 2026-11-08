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

// Function: entry_001d2c68
// Address: 0x1d2c68 - 0x1d2c70
void entry_001d2c68_0x1d2c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2c68_0x1d2c68");
#endif

    ctx->pc = 0x1d2c68u;

    // 0x1d2c68: 0xc074494  jal         func_1D1250
    ctx->pc = 0x1D2C68u;
    SET_GPR_U32(ctx, 31, 0x1D2C70u);
    ctx->pc = 0x1D2C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2C68u;
    // 0x1d2c6c: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1250u, 0x1D2C68u, 0x1D2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2C70u;
}
