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

// Function: entry_0011cad8
// Address: 0x11cad8 - 0x11cae0
void entry_0011cad8_0x11cad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cad8_0x11cad8");
#endif

    ctx->pc = 0x11cad8u;

    // 0x11cad8: 0xc04702e  jal         func_11C0B8
    ctx->pc = 0x11CAD8u;
    SET_GPR_U32(ctx, 31, 0x11CAE0u);
    ctx->pc = 0x11C0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C0B8u, 0x11CAD8u, 0x11CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CAE0u;
}
