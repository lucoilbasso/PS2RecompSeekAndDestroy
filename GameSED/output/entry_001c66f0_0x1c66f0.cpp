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

// Function: entry_001c66f0
// Address: 0x1c66f0 - 0x1c6710
void entry_001c66f0_0x1c66f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c66f0_0x1c66f0");
#endif

    switch (ctx->pc) {
        case 0x1c6700u: goto label_1c6700;
        default: break;
    }

    ctx->pc = 0x1c66f0u;

    // 0x1c66f0: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x1c66f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c66f4: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x1c66f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c66f8: 0xc071b36  jal         func_1C6CD8
    ctx->pc = 0x1C66F8u;
    SET_GPR_U32(ctx, 31, 0x1C6700u);
    ctx->pc = 0x1C6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6CD8u, 0x1C66F8u, 0x1C6700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6700u;
label_1c6700:
    // 0x1c6700: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c6700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6704: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6708: 0xc0727f6  jal         func_1C9FD8
    ctx->pc = 0x1C6708u;
    SET_GPR_U32(ctx, 31, 0x1C6710u);
    ctx->pc = 0x1C9FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9FD8u, 0x1C6708u, 0x1C6710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6710u;
}
