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

// Function: entry_001b412c
// Address: 0x1b412c - 0x1b4138
void entry_001b412c_0x1b412c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b412c_0x1b412c");
#endif

    switch (ctx->pc) {
        case 0x1b4134u: goto label_1b4134;
        default: break;
    }

    ctx->pc = 0x1b412cu;

    // 0x1b412c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B412Cu;
    SET_GPR_U32(ctx, 31, 0x1B4134u);
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B412Cu, 0x1B4134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4134u;
label_1b4134:
    // 0x1b4134: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1b4134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b4138u;
}
