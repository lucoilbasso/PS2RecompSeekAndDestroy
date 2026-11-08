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

// Function: entry_0015fa5c
// Address: 0x15fa5c - 0x15fa68
void entry_0015fa5c_0x15fa5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fa5c_0x15fa5c");
#endif

    switch (ctx->pc) {
        case 0x15fa64u: goto label_15fa64;
        default: break;
    }

    ctx->pc = 0x15fa5cu;

    // 0x15fa5c: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x15FA5Cu;
    SET_GPR_U32(ctx, 31, 0x15FA64u);
    ctx->pc = 0x15FA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FA5Cu;
    // 0x15fa60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x15FA5Cu, 0x15FA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FA64u;
label_15fa64:
    // 0x15fa64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15fa64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x15fa68u;
}
