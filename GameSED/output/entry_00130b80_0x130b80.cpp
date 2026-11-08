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

// Function: entry_00130b80
// Address: 0x130b80 - 0x130b9c
void entry_00130b80_0x130b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130b80_0x130b80");
#endif

    switch (ctx->pc) {
        case 0x130b88u: goto label_130b88;
        default: break;
    }

    ctx->pc = 0x130b80u;

    // 0x130b80: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x130B80u;
    SET_GPR_U32(ctx, 31, 0x130B88u);
    ctx->pc = 0x130B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B80u;
    // 0x130b84: 0x24846178  addiu       $a0, $a0, 0x6178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x130B80u, 0x130B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B88u;
label_130b88:
    // 0x130b88: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x130b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x130b8c: 0x24a56190  addiu       $a1, $a1, 0x6190
    ctx->pc = 0x130b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24976));
    // 0x130b90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x130b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b94: 0xc068186  jal         func_1A0618
    ctx->pc = 0x130B94u;
    SET_GPR_U32(ctx, 31, 0x130B9Cu);
    ctx->pc = 0x130B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B94u;
    // 0x130b98: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x130B94u, 0x130B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B9Cu;
}
