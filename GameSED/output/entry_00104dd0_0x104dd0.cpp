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

// Function: entry_00104dd0
// Address: 0x104dd0 - 0x104ddc
void entry_00104dd0_0x104dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104dd0_0x104dd0");
#endif

    switch (ctx->pc) {
        case 0x104dd8u: goto label_104dd8;
        default: break;
    }

    ctx->pc = 0x104dd0u;

    // 0x104dd0: 0xc06a3da  jal         func_1A8F68
    ctx->pc = 0x104DD0u;
    SET_GPR_U32(ctx, 31, 0x104DD8u);
    ctx->pc = 0x1A8F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8F68u, 0x104DD0u, 0x104DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104DD8u;
label_104dd8:
    // 0x104dd8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x104dd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x104ddcu;
}
