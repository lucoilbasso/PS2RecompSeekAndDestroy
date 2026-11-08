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

// Function: entry_0012e350
// Address: 0x12e350 - 0x12e36c
void entry_0012e350_0x12e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e350_0x12e350");
#endif

    switch (ctx->pc) {
        case 0x12e358u: goto label_12e358;
        default: break;
    }

    ctx->pc = 0x12e350u;

    // 0x12e350: 0xc0740b2  jal         func_1D02C8
    ctx->pc = 0x12E350u;
    SET_GPR_U32(ctx, 31, 0x12E358u);
    ctx->pc = 0x12E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E350u;
    // 0x12e354: 0x24845ee0  addiu       $a0, $a0, 0x5EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D02C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D02C8u, 0x12E350u, 0x12E358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E358u;
label_12e358:
    // 0x12e358: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x12e358u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x12e35c: 0x24a55ef8  addiu       $a1, $a1, 0x5EF8
    ctx->pc = 0x12e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24312));
    // 0x12e360: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12e360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e364: 0xc068186  jal         func_1A0618
    ctx->pc = 0x12E364u;
    SET_GPR_U32(ctx, 31, 0x12E36Cu);
    ctx->pc = 0x12E368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E364u;
    // 0x12e368: 0x2406004b  addiu       $a2, $zero, 0x4B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x12E364u, 0x12E36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E36Cu;
}
