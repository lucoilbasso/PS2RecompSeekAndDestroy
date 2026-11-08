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

// Function: entry_0017794c
// Address: 0x17794c - 0x177954
void entry_0017794c_0x17794c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017794c_0x17794c");
#endif

    ctx->pc = 0x17794cu;

    // 0x17794c: 0xc05deb6  jal         func_177AD8
    ctx->pc = 0x17794Cu;
    SET_GPR_U32(ctx, 31, 0x177954u);
    ctx->pc = 0x177AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177AD8u, 0x17794Cu, 0x177954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177954u;
}
