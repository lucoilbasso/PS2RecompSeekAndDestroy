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

// Function: entry_001a6cc0
// Address: 0x1a6cc0 - 0x1a6cd4
void entry_001a6cc0_0x1a6cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6cc0_0x1a6cc0");
#endif

    switch (ctx->pc) {
        case 0x1a6cd0u: goto label_1a6cd0;
        default: break;
    }

    ctx->pc = 0x1a6cc0u;

    // 0x1a6cc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a6cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6cc4: 0x24a593d8  addiu       $a1, $a1, -0x6C28
    ctx->pc = 0x1a6cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939608));
    // 0x1a6cc8: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A6CC8u;
    SET_GPR_U32(ctx, 31, 0x1A6CD0u);
    ctx->pc = 0x1A6CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6CC8u;
    // 0x1a6ccc: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A6CC8u, 0x1A6CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6CD0u;
label_1a6cd0:
    // 0x1a6cd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6cd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a6cd4u;
}
