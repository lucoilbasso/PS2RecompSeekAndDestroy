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

// Function: entry_001b5254
// Address: 0x1b5254 - 0x1b5268
void entry_001b5254_0x1b5254(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5254_0x1b5254");
#endif

    switch (ctx->pc) {
        case 0x1b525cu: goto label_1b525c;
        case 0x1b5264u: goto label_1b5264;
        default: break;
    }

    ctx->pc = 0x1b5254u;

    // 0x1b5254: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B5254u;
    SET_GPR_U32(ctx, 31, 0x1B525Cu);
    ctx->pc = 0x1B5258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B5254u;
    // 0x1b5258: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B5254u, 0x1B525Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B525Cu;
label_1b525c:
    // 0x1b525c: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B525Cu;
    SET_GPR_U32(ctx, 31, 0x1B5264u);
    ctx->pc = 0x1B5260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B525Cu;
    // 0x1b5260: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B525Cu, 0x1B5264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B5264u;
label_1b5264:
    // 0x1b5264: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b5264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b5268u;
}
