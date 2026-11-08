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

// Function: entry_00142b88
// Address: 0x142b88 - 0x142b98
void entry_00142b88_0x142b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142b88_0x142b88");
#endif

    switch (ctx->pc) {
        case 0x142b90u: goto label_142b90;
        default: break;
    }

    ctx->pc = 0x142b88u;

    // 0x142b88: 0xc050d2e  jal         func_1434B8
    ctx->pc = 0x142B88u;
    SET_GPR_U32(ctx, 31, 0x142B90u);
    ctx->pc = 0x142B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B88u;
    // 0x142b8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1434B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1434B8u, 0x142B88u, 0x142B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B90u;
label_142b90:
    // 0x142b90: 0xc055c04  jal         func_157010
    ctx->pc = 0x142B90u;
    SET_GPR_U32(ctx, 31, 0x142B98u);
    ctx->pc = 0x142B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142B90u;
    // 0x142b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157010u, 0x142B90u, 0x142B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142B98u;
}
