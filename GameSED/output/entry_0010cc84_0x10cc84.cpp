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

// Function: entry_0010cc84
// Address: 0x10cc84 - 0x10cc8c
void entry_0010cc84_0x10cc84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010cc84_0x10cc84");
#endif

    ctx->pc = 0x10cc84u;

    // 0x10cc84: 0xc06a396  jal         func_1A8E58
    ctx->pc = 0x10CC84u;
    SET_GPR_U32(ctx, 31, 0x10CC8Cu);
    ctx->pc = 0x1A8E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E58u, 0x10CC84u, 0x10CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC8Cu;
}
