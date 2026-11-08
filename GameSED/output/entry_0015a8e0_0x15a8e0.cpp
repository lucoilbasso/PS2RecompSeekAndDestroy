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

// Function: entry_0015a8e0
// Address: 0x15a8e0 - 0x15a8ec
void entry_0015a8e0_0x15a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015a8e0_0x15a8e0");
#endif

    switch (ctx->pc) {
        case 0x15a8e8u: goto label_15a8e8;
        default: break;
    }

    ctx->pc = 0x15a8e0u;

    // 0x15a8e0: 0xc057e9e  jal         func_15FA78
    ctx->pc = 0x15A8E0u;
    SET_GPR_U32(ctx, 31, 0x15A8E8u);
    ctx->pc = 0x15A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A8E0u;
    // 0x15a8e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15FA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15FA78u, 0x15A8E0u, 0x15A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8E8u;
label_15a8e8:
    // 0x15a8e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15a8e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x15a8ecu;
}
