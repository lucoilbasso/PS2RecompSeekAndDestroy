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

// Function: entry_0016a320
// Address: 0x16a320 - 0x16a32c
void entry_0016a320_0x16a320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a320_0x16a320");
#endif

    switch (ctx->pc) {
        case 0x16a328u: goto label_16a328;
        default: break;
    }

    ctx->pc = 0x16a320u;

    // 0x16a320: 0xc0415ec  jal         func_1057B0
    ctx->pc = 0x16A320u;
    SET_GPR_U32(ctx, 31, 0x16A328u);
    ctx->pc = 0x1057B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1057B0u, 0x16A320u, 0x16A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A328u;
label_16a328:
    // 0x16a328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16a32cu;
}
