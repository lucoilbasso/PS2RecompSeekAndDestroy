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

// Function: entry_001b2048
// Address: 0x1b2048 - 0x1b2054
void entry_001b2048_0x1b2048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2048_0x1b2048");
#endif

    switch (ctx->pc) {
        case 0x1b2050u: goto label_1b2050;
        default: break;
    }

    ctx->pc = 0x1b2048u;

    // 0x1b2048: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B2048u;
    SET_GPR_U32(ctx, 31, 0x1B2050u);
    ctx->pc = 0x1B204Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2048u;
    // 0x1b204c: 0x8e24aa10  lw          $a0, -0x55F0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945296)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B2048u, 0x1B2050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2050u;
label_1b2050:
    // 0x1b2050: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b2050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b2054u;
}
