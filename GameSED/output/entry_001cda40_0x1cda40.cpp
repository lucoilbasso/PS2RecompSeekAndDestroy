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

// Function: entry_001cda40
// Address: 0x1cda40 - 0x1cda48
void entry_001cda40_0x1cda40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cda40_0x1cda40");
#endif

    ctx->pc = 0x1cda40u;

    // 0x1cda40: 0xc073468  jal         func_1CD1A0
    ctx->pc = 0x1CDA40u;
    SET_GPR_U32(ctx, 31, 0x1CDA48u);
    ctx->pc = 0x1CD1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD1A0u, 0x1CDA40u, 0x1CDA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CDA48u;
}
