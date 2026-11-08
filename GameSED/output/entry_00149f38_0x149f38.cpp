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

// Function: entry_00149f38
// Address: 0x149f38 - 0x149f40
void entry_00149f38_0x149f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00149f38_0x149f38");
#endif

    ctx->pc = 0x149f38u;

    // 0x149f38: 0xc052886  jal         func_14A218
    ctx->pc = 0x149F38u;
    SET_GPR_U32(ctx, 31, 0x149F40u);
    ctx->pc = 0x14A218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A218u, 0x149F38u, 0x149F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149F40u;
}
