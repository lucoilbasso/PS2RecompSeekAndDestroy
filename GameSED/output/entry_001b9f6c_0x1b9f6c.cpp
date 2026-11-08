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

// Function: entry_001b9f6c
// Address: 0x1b9f6c - 0x1b9f7c
void entry_001b9f6c_0x1b9f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9f6c_0x1b9f6c");
#endif

    switch (ctx->pc) {
        case 0x1b9f78u: goto label_1b9f78;
        default: break;
    }

    ctx->pc = 0x1b9f6cu;

    // 0x1b9f6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b9f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f70: 0xc06bcbc  jal         func_1AF2F0
    ctx->pc = 0x1B9F70u;
    SET_GPR_U32(ctx, 31, 0x1B9F78u);
    ctx->pc = 0x1B9F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9F70u;
    // 0x1b9f74: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF2F0u, 0x1B9F70u, 0x1B9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9F78u;
label_1b9f78:
    // 0x1b9f78: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1b9f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b9f7cu;
}
