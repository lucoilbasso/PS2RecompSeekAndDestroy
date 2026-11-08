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

// Function: entry_0012c6a8
// Address: 0x12c6a8 - 0x12c6c4
void entry_0012c6a8_0x12c6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c6a8_0x12c6a8");
#endif

    switch (ctx->pc) {
        case 0x12c6b0u: goto label_12c6b0;
        default: break;
    }

    ctx->pc = 0x12c6a8u;

    // 0x12c6a8: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x12C6A8u;
    SET_GPR_U32(ctx, 31, 0x12C6B0u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x12C6A8u, 0x12C6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6B0u;
label_12c6b0:
    // 0x12c6b0: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12c6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12c6b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12c6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6b8: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x12c6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x12c6bc: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12C6BCu;
    SET_GPR_U32(ctx, 31, 0x12C6C4u);
    ctx->pc = 0x12C6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C6BCu;
    // 0x12c6c0: 0x24a55e08  addiu       $a1, $a1, 0x5E08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12C6BCu, 0x12C6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C6C4u;
}
