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

// Function: entry_001a6fa8
// Address: 0x1a6fa8 - 0x1a6fb8
void entry_001a6fa8_0x1a6fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6fa8_0x1a6fa8");
#endif

    switch (ctx->pc) {
        case 0x1a6fb4u: goto label_1a6fb4;
        default: break;
    }

    ctx->pc = 0x1a6fa8u;

    // 0x1a6fa8: 0x26a593d8  addiu       $a1, $s5, -0x6C28
    ctx->pc = 0x1a6fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939608));
    // 0x1a6fac: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A6FACu;
    SET_GPR_U32(ctx, 31, 0x1A6FB4u);
    ctx->pc = 0x1A6FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6FACu;
    // 0x1a6fb0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A6FACu, 0x1A6FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6FB4u;
label_1a6fb4:
    // 0x1a6fb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a6fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a6fb8u;
}
