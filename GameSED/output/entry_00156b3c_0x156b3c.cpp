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

// Function: entry_00156b3c
// Address: 0x156b3c - 0x156b44
void entry_00156b3c_0x156b3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156b3c_0x156b3c");
#endif

    ctx->pc = 0x156b3cu;

    // 0x156b3c: 0xc068186  jal         func_1A0618
    ctx->pc = 0x156B3Cu;
    SET_GPR_U32(ctx, 31, 0x156B44u);
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x156B3Cu, 0x156B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B44u;
}
