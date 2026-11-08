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

// Function: entry_0017a454
// Address: 0x17a454 - 0x17a45c
void entry_0017a454_0x17a454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a454_0x17a454");
#endif

    ctx->pc = 0x17a454u;

    // 0x17a454: 0xc05db08  jal         func_176C20
    ctx->pc = 0x17A454u;
    SET_GPR_U32(ctx, 31, 0x17A45Cu);
    ctx->pc = 0x176C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C20u, 0x17A454u, 0x17A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A45Cu;
}
