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

// Function: entry_0012c1b4
// Address: 0x12c1b4 - 0x12c1bc
void entry_0012c1b4_0x12c1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c1b4_0x12c1b4");
#endif

    ctx->pc = 0x12c1b4u;

    // 0x12c1b4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x12C1B4u;
    SET_GPR_U32(ctx, 31, 0x12C1BCu);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x12C1B4u, 0x12C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C1BCu;
}
