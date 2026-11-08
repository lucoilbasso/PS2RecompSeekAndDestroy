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

// Function: entry_00141458
// Address: 0x141458 - 0x14146c
void entry_00141458_0x141458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141458_0x141458");
#endif

    switch (ctx->pc) {
        case 0x141468u: goto label_141468;
        default: break;
    }

    ctx->pc = 0x141458u;

    // 0x141458: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x141458u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14145c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14145cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141460: 0xc05045e  jal         func_141178
    ctx->pc = 0x141460u;
    SET_GPR_U32(ctx, 31, 0x141468u);
    ctx->pc = 0x141464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141460u;
    // 0x141464: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141178u, 0x141460u, 0x141468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141468u;
label_141468:
    // 0x141468: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x141468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x14146cu;
}
