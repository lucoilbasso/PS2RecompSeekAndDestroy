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

// Function: entry_001c348c
// Address: 0x1c348c - 0x1c3498
void entry_001c348c_0x1c348c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c348c_0x1c348c");
#endif

    switch (ctx->pc) {
        case 0x1c3494u: goto label_1c3494;
        default: break;
    }

    ctx->pc = 0x1c348cu;

    // 0x1c348c: 0xc070bda  jal         func_1C2F68
    ctx->pc = 0x1C348Cu;
    SET_GPR_U32(ctx, 31, 0x1C3494u);
    ctx->pc = 0x1C3490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C348Cu;
    // 0x1c3490: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2F68u, 0x1C348Cu, 0x1C3494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3494u;
label_1c3494:
    // 0x1c3494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1c3498u;
}
