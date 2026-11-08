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

// Function: caseD_a
// Address: 0x1cb920 - 0x1cb934
void caseD_a_0x1cb920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1cb920");
#endif

    switch (ctx->pc) {
        case 0x1cb928u: goto label_1cb928;
        default: break;
    }

    ctx->pc = 0x1cb920u;

    // 0x1cb920: 0xc073d5c  jal         func_1CF570
    ctx->pc = 0x1CB920u;
    SET_GPR_U32(ctx, 31, 0x1CB928u);
    ctx->pc = 0x1CB924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB920u;
    // 0x1cb924: 0x24040480  addiu       $a0, $zero, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF570u, 0x1CB920u, 0x1CB928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB928u;
label_1cb928:
    // 0x1cb928: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1cb928u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb92c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb930: 0x26250480  addiu       $a1, $s1, 0x480
    ctx->pc = 0x1cb930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1152));
    ctx->pc = 0x1cb934u;
}
