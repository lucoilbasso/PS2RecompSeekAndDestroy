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

// Function: entry_001ac7f8
// Address: 0x1ac7f8 - 0x1ac804
void entry_001ac7f8_0x1ac7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac7f8_0x1ac7f8");
#endif

    switch (ctx->pc) {
        case 0x1ac800u: goto label_1ac800;
        default: break;
    }

    ctx->pc = 0x1ac7f8u;

    // 0x1ac7f8: 0xc06b02c  jal         func_1AC0B0
    ctx->pc = 0x1AC7F8u;
    SET_GPR_U32(ctx, 31, 0x1AC800u);
    ctx->pc = 0x1AC0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC0B0u, 0x1AC7F8u, 0x1AC800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC800u;
label_1ac800:
    // 0x1ac800: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ac800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ac804u;
}
