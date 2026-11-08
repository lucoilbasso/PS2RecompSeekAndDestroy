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

// Function: entry_00197a78
// Address: 0x197a78 - 0x197a88
void entry_00197a78_0x197a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197a78_0x197a78");
#endif

    switch (ctx->pc) {
        case 0x197a80u: goto label_197a80;
        default: break;
    }

    ctx->pc = 0x197a78u;

    // 0x197a78: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x197A78u;
    SET_GPR_U32(ctx, 31, 0x197A80u);
    ctx->pc = 0x197A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A78u;
    // 0x197a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x197A78u, 0x197A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A80u;
label_197a80:
    // 0x197a80: 0xc05bedc  jal         func_16FB70
    ctx->pc = 0x197A80u;
    SET_GPR_U32(ctx, 31, 0x197A88u);
    ctx->pc = 0x197A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197A80u;
    // 0x197a84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16FB70u, 0x197A80u, 0x197A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197A88u;
}
