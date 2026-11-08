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

// Function: entry_0016f474
// Address: 0x16f474 - 0x16f488
void entry_0016f474_0x16f474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f474_0x16f474");
#endif

    ctx->pc = 0x16f474u;

    // 0x16f474: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x16f474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x16f478: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f47c: 0x24a575d0  addiu       $a1, $a1, 0x75D0
    ctx->pc = 0x16f47cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30160));
    // 0x16f480: 0xc068186  jal         func_1A0618
    ctx->pc = 0x16F480u;
    SET_GPR_U32(ctx, 31, 0x16F488u);
    ctx->pc = 0x16F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F480u;
    // 0x16f484: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x16F480u, 0x16F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F488u;
}
