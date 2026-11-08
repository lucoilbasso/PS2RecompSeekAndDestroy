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

// Function: entry_0017026c
// Address: 0x17026c - 0x170280
void entry_0017026c_0x17026c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017026c_0x17026c");
#endif

    switch (ctx->pc) {
        case 0x170274u: goto label_170274;
        case 0x17027cu: goto label_17027c;
        default: break;
    }

    ctx->pc = 0x17026cu;

    // 0x17026c: 0xc05c57e  jal         func_1715F8
    ctx->pc = 0x17026Cu;
    SET_GPR_U32(ctx, 31, 0x170274u);
    ctx->pc = 0x170270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17026Cu;
    // 0x170270: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1715F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1715F8u, 0x17026Cu, 0x170274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170274u;
label_170274:
    // 0x170274: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x170274u;
    SET_GPR_U32(ctx, 31, 0x17027Cu);
    ctx->pc = 0x170278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170274u;
    // 0x170278: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x170274u, 0x17027Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17027Cu;
label_17027c:
    // 0x17027c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17027cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170280u;
}
