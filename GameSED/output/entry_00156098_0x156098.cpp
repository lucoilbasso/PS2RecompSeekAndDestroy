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

// Function: entry_00156098
// Address: 0x156098 - 0x1560a0
void entry_00156098_0x156098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00156098_0x156098");
#endif

    ctx->pc = 0x156098u;

    // 0x156098: 0xc054e3a  jal         func_1538E8
    ctx->pc = 0x156098u;
    SET_GPR_U32(ctx, 31, 0x1560A0u);
    ctx->pc = 0x1538E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1538E8u, 0x156098u, 0x1560A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1560A0u;
}
