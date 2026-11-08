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

// Function: entry_0013c89c
// Address: 0x13c89c - 0x13c8ac
void entry_0013c89c_0x13c89c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c89c_0x13c89c");
#endif

    ctx->pc = 0x13c89cu;

    // 0x13c89c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C89Cu;
    {
        const bool branch_taken_0x13c89c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c89c) {
            ctx->pc = 0x13C8ACu;
            return;
        }
    }
    ctx->pc = 0x13C8A4u;
    // 0x13c8a4: 0xc04fb74  jal         func_13EDD0
    ctx->pc = 0x13C8A4u;
    SET_GPR_U32(ctx, 31, 0x13C8ACu);
    ctx->pc = 0x13EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EDD0u, 0x13C8A4u, 0x13C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8ACu;
}
