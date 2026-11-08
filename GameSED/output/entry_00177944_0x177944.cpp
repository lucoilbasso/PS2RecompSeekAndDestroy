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

// Function: entry_00177944
// Address: 0x177944 - 0x17794c
void entry_00177944_0x177944(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177944_0x177944");
#endif

    ctx->pc = 0x177944u;

    // 0x177944: 0xc05e4d8  jal         func_179360
    ctx->pc = 0x177944u;
    SET_GPR_U32(ctx, 31, 0x17794Cu);
    ctx->pc = 0x179360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179360u, 0x177944u, 0x17794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17794Cu;
}
