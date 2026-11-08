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

// Function: entry_00193a1c
// Address: 0x193a1c - 0x193a20
void entry_00193a1c_0x193a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193a1c_0x193a1c");
#endif

    ctx->pc = 0x193a1cu;

    // 0x193a1c: 0xc06545e  jal         func_195178
    ctx->pc = 0x193A1Cu;
    SET_GPR_U32(ctx, 31, 0x193A24u);
    ctx->pc = 0x195178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195178u, 0x193A1Cu, 0x193A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A24u;
}
