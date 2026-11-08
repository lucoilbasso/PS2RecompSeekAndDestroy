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

// Function: entry_0013837c
// Address: 0x13837c - 0x138388
void entry_0013837c_0x13837c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013837c_0x13837c");
#endif

    switch (ctx->pc) {
        case 0x138384u: goto label_138384;
        default: break;
    }

    ctx->pc = 0x13837cu;

    // 0x13837c: 0xc061422  jal         func_185088
    ctx->pc = 0x13837Cu;
    SET_GPR_U32(ctx, 31, 0x138384u);
    ctx->pc = 0x138380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13837Cu;
    // 0x138380: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x13837Cu, 0x138384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138384u;
label_138384:
    // 0x138384: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x138384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->pc = 0x138388u;
}
