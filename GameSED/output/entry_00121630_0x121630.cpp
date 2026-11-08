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

// Function: entry_00121630
// Address: 0x121630 - 0x12164c
void entry_00121630_0x121630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00121630_0x121630");
#endif

    switch (ctx->pc) {
        case 0x121638u: goto label_121638;
        default: break;
    }

    ctx->pc = 0x121630u;

    // 0x121630: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x121630u;
    SET_GPR_U32(ctx, 31, 0x121638u);
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x121630u, 0x121638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121638u;
label_121638:
    // 0x121638: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x121638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12163c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12163cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121640: 0x2406004b  addiu       $a2, $zero, 0x4B
    ctx->pc = 0x121640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x121644: 0xc068186  jal         func_1A0618
    ctx->pc = 0x121644u;
    SET_GPR_U32(ctx, 31, 0x12164Cu);
    ctx->pc = 0x121648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121644u;
    // 0x121648: 0x24a55b80  addiu       $a1, $a1, 0x5B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x121644u, 0x12164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12164Cu;
}
