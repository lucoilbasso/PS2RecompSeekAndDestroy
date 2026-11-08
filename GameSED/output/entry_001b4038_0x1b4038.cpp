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

// Function: entry_001b4038
// Address: 0x1b4038 - 0x1b4048
void entry_001b4038_0x1b4038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4038_0x1b4038");
#endif

    switch (ctx->pc) {
        case 0x1b4040u: goto label_1b4040;
        default: break;
    }

    ctx->pc = 0x1b4038u;

    // 0x1b4038: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B4038u;
    SET_GPR_U32(ctx, 31, 0x1B4040u);
    ctx->pc = 0x1B403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4038u;
    // 0x1b403c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B4038u, 0x1B4040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4040u;
label_1b4040:
    // 0x1b4040: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B4040u;
    SET_GPR_U32(ctx, 31, 0x1B4048u);
    ctx->pc = 0x1B4044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4040u;
    // 0x1b4044: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B4040u, 0x1B4048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B4048u;
}
