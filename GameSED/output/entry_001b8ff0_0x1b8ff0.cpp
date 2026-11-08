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

// Function: entry_001b8ff0
// Address: 0x1b8ff0 - 0x1b9000
void entry_001b8ff0_0x1b8ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8ff0_0x1b8ff0");
#endif

    switch (ctx->pc) {
        case 0x1b8ff8u: goto label_1b8ff8;
        default: break;
    }

    ctx->pc = 0x1b8ff0u;

    // 0x1b8ff0: 0xc06e3be  jal         func_1B8EF8
    ctx->pc = 0x1B8FF0u;
    SET_GPR_U32(ctx, 31, 0x1B8FF8u);
    ctx->pc = 0x1B8FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8FF0u;
    // 0x1b8ff4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8EF8u, 0x1B8FF0u, 0x1B8FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8FF8u;
label_1b8ff8:
    // 0x1b8ff8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b8ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8ffc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b8ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b9000u;
}
