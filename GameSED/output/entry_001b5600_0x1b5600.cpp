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

// Function: entry_001b5600
// Address: 0x1b5600 - 0x1b5614
void entry_001b5600_0x1b5600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5600_0x1b5600");
#endif

    switch (ctx->pc) {
        case 0x1b5608u: goto label_1b5608;
        case 0x1b5610u: goto label_1b5610;
        default: break;
    }

    ctx->pc = 0x1b5600u;

    // 0x1b5600: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B5600u;
    SET_GPR_U32(ctx, 31, 0x1B5608u);
    ctx->pc = 0x1B5604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5600u;
    // 0x1b5604: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B5600u, 0x1B5608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5608u;
label_1b5608:
    // 0x1b5608: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B5608u;
    SET_GPR_U32(ctx, 31, 0x1B5610u);
    ctx->pc = 0x1B560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5608u;
    // 0x1b560c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B5608u, 0x1B5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5610u;
label_1b5610:
    // 0x1b5610: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b5610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b5614u;
}
