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

// Function: entry_0016f9ec
// Address: 0x16f9ec - 0x16f9f4
void entry_0016f9ec_0x16f9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f9ec_0x16f9ec");
#endif

    ctx->pc = 0x16f9ecu;

    // 0x16f9ec: 0xc063a9a  jal         func_18EA68
    ctx->pc = 0x16F9ECu;
    SET_GPR_U32(ctx, 31, 0x16F9F4u);
    ctx->pc = 0x18EA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18EA68u, 0x16F9ECu, 0x16F9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F9F4u;
}
