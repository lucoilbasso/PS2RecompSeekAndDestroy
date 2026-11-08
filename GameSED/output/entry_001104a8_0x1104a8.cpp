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

// Function: entry_001104a8
// Address: 0x1104a8 - 0x1104b8
void entry_001104a8_0x1104a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001104a8_0x1104a8");
#endif

    switch (ctx->pc) {
        case 0x1104b4u: goto label_1104b4;
        default: break;
    }

    ctx->pc = 0x1104a8u;

    // 0x1104a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1104a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1104ac: 0xc04112e  jal         func_1044B8
    ctx->pc = 0x1104ACu;
    SET_GPR_U32(ctx, 31, 0x1104B4u);
    ctx->pc = 0x1104B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1104ACu;
    // 0x1104b0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1044B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1044B8u, 0x1104ACu, 0x1104B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1104B4u;
label_1104b4:
    // 0x1104b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1104b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1104b8u;
}
