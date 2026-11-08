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

// Function: entry_0012c184
// Address: 0x12c184 - 0x12c18c
void entry_0012c184_0x12c184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c184_0x12c184");
#endif

    ctx->pc = 0x12c184u;

    // 0x12c184: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x12C184u;
    SET_GPR_U32(ctx, 31, 0x12C18Cu);
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x12C184u, 0x12C18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C18Cu;
}
