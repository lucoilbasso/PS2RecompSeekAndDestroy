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

// Function: entry_001498bc
// Address: 0x1498bc - 0x1498c4
void entry_001498bc_0x1498bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001498bc_0x1498bc");
#endif

    ctx->pc = 0x1498bcu;

    // 0x1498bc: 0xc06a2c0  jal         func_1A8B00
    ctx->pc = 0x1498BCu;
    SET_GPR_U32(ctx, 31, 0x1498C4u);
    ctx->pc = 0x1A8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8B00u, 0x1498BCu, 0x1498C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1498C4u;
}
