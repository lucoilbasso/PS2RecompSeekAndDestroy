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

// Function: entry_00177a14
// Address: 0x177a14 - 0x177a1c
void entry_00177a14_0x177a14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00177a14_0x177a14");
#endif

    ctx->pc = 0x177a14u;

    // 0x177a14: 0xc05df9a  jal         func_177E68
    ctx->pc = 0x177A14u;
    SET_GPR_U32(ctx, 31, 0x177A1Cu);
    ctx->pc = 0x177E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E68u, 0x177A14u, 0x177A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177A1Cu;
}
