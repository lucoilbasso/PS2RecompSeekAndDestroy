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

// Function: entry_00121670
// Address: 0x121670 - 0x12168c
void entry_00121670_0x121670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121670_0x121670");
#endif

    switch (ctx->pc) {
        case 0x121678u: goto label_121678;
        default: break;
    }

    ctx->pc = 0x121670u;

    // 0x121670: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x121670u;
    SET_GPR_U32(ctx, 31, 0x121678u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x121670u, 0x121678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121678u;
label_121678:
    // 0x121678: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x121678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12167c: 0x24a55bc0  addiu       $a1, $a1, 0x5BC0
    ctx->pc = 0x12167cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23488));
    // 0x121680: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x121680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121684: 0xc068186  jal         func_1A0618
    ctx->pc = 0x121684u;
    SET_GPR_U32(ctx, 31, 0x12168Cu);
    ctx->pc = 0x121688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121684u;
    // 0x121688: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x121684u, 0x12168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12168Cu;
}
