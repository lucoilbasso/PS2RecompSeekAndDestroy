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

// Function: entry_001955bc
// Address: 0x1955bc - 0x1955c4
void entry_001955bc_0x1955bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001955bc_0x1955bc");
#endif

    ctx->pc = 0x1955bcu;

    // 0x1955bc: 0xc064ffa  jal         func_193FE8
    ctx->pc = 0x1955BCu;
    SET_GPR_U32(ctx, 31, 0x1955C4u);
    ctx->pc = 0x193FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193FE8u, 0x1955BCu, 0x1955C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1955C4u;
}
