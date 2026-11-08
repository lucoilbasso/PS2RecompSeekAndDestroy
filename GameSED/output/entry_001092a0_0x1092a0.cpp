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

// Function: entry_001092a0
// Address: 0x1092a0 - 0x1092b0
void entry_001092a0_0x1092a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001092a0_0x1092a0");
#endif

    switch (ctx->pc) {
        case 0x1092a8u: goto label_1092a8;
        default: break;
    }

    ctx->pc = 0x1092a0u;

    // 0x1092a0: 0xc061a46  jal         func_186918
    ctx->pc = 0x1092A0u;
    SET_GPR_U32(ctx, 31, 0x1092A8u);
    ctx->pc = 0x1092A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1092A0u;
    // 0x1092a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186918u, 0x1092A0u, 0x1092A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1092A8u;
label_1092a8:
    // 0x1092a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1092a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1092ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1092acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1092b0u;
}
