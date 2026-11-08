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

// Function: entry_001772e8
// Address: 0x1772e8 - 0x1772f0
void entry_001772e8_0x1772e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001772e8_0x1772e8");
#endif

    ctx->pc = 0x1772e8u;

    // 0x1772e8: 0xc06bd18  jal         func_1AF460
    ctx->pc = 0x1772E8u;
    SET_GPR_U32(ctx, 31, 0x1772F0u);
    ctx->pc = 0x1772ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1772E8u;
    // 0x1772ec: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF460u, 0x1772E8u, 0x1772F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1772F0u;
}
