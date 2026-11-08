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

// Function: entry_0016fa8c
// Address: 0x16fa8c - 0x16fa94
void entry_0016fa8c_0x16fa8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016fa8c_0x16fa8c");
#endif

    ctx->pc = 0x16fa8cu;

    // 0x16fa8c: 0xc063b56  jal         func_18ED58
    ctx->pc = 0x16FA8Cu;
    SET_GPR_U32(ctx, 31, 0x16FA94u);
    ctx->pc = 0x18ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18ED58u, 0x16FA8Cu, 0x16FA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FA94u;
}
