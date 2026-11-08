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

// Function: entry_001d07ec
// Address: 0x1d07ec - 0x1d07f4
void entry_001d07ec_0x1d07ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d07ec_0x1d07ec");
#endif

    ctx->pc = 0x1d07ecu;

    // 0x1d07ec: 0xc074494  jal         func_1D1250
    ctx->pc = 0x1D07ECu;
    SET_GPR_U32(ctx, 31, 0x1D07F4u);
    ctx->pc = 0x1D07F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D07ECu;
    // 0x1d07f0: 0xafac0000  sw          $t4, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1250u, 0x1D07ECu, 0x1D07F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D07F4u;
}
