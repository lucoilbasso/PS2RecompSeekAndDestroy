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

// Function: entry_0012c6fc
// Address: 0x12c6fc - 0x12c704
void entry_0012c6fc_0x12c6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c6fc_0x12c6fc");
#endif

    ctx->pc = 0x12c6fcu;

    // 0x12c6fc: 0xc04844a  jal         func_121128
    ctx->pc = 0x12C6FCu;
    SET_GPR_U32(ctx, 31, 0x12C704u);
    ctx->pc = 0x121128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121128u, 0x12C6FCu, 0x12C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C704u;
}
