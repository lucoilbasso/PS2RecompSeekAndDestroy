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

// Function: entry_0015c8c4
// Address: 0x15c8c4 - 0x15c8dc
void entry_0015c8c4_0x15c8c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c8c4_0x15c8c4");
#endif

    switch (ctx->pc) {
        case 0x15c8ccu: goto label_15c8cc;
        default: break;
    }

    ctx->pc = 0x15c8c4u;

    // 0x15c8c4: 0xc056baa  jal         func_15AEA8
    ctx->pc = 0x15C8C4u;
    SET_GPR_U32(ctx, 31, 0x15C8CCu);
    ctx->pc = 0x15C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8C4u;
    // 0x15c8c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AEA8u, 0x15C8C4u, 0x15C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8CCu;
label_15c8cc:
    // 0x15c8cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c8d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c8d4: 0xc056a82  jal         func_15AA08
    ctx->pc = 0x15C8D4u;
    SET_GPR_U32(ctx, 31, 0x15C8DCu);
    ctx->pc = 0x15C8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8D4u;
    // 0x15c8d8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x15C8D4u, 0x15C8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8DCu;
}
