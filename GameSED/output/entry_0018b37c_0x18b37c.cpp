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

// Function: entry_0018b37c
// Address: 0x18b37c - 0x18b384
void entry_0018b37c_0x18b37c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b37c_0x18b37c");
#endif

    ctx->pc = 0x18b37cu;

    // 0x18b37c: 0xc06287e  jal         func_18A1F8
    ctx->pc = 0x18B37Cu;
    SET_GPR_U32(ctx, 31, 0x18B384u);
    ctx->pc = 0x18A1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A1F8u, 0x18B37Cu, 0x18B384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B384u;
}
