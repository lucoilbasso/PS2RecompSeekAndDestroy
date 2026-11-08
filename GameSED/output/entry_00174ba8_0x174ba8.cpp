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

// Function: entry_00174ba8
// Address: 0x174ba8 - 0x174bb0
void entry_00174ba8_0x174ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174ba8_0x174ba8");
#endif

    ctx->pc = 0x174ba8u;

    // 0x174ba8: 0xc05cfae  jal         func_173EB8
    ctx->pc = 0x174BA8u;
    SET_GPR_U32(ctx, 31, 0x174BB0u);
    ctx->pc = 0x173EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173EB8u, 0x174BA8u, 0x174BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BB0u;
}
