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

// Function: entry_001cb3f0
// Address: 0x1cb3f0 - 0x1cb3fc
void entry_001cb3f0_0x1cb3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb3f0_0x1cb3f0");
#endif

    switch (ctx->pc) {
        case 0x1cb3f8u: goto label_1cb3f8;
        default: break;
    }

    ctx->pc = 0x1cb3f0u;

    // 0x1cb3f0: 0xc072c32  jal         func_1CB0C8
    ctx->pc = 0x1CB3F0u;
    SET_GPR_U32(ctx, 31, 0x1CB3F8u);
    ctx->pc = 0x1CB3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB3F0u;
    // 0x1cb3f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB0C8u, 0x1CB3F0u, 0x1CB3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3F8u;
label_1cb3f8:
    // 0x1cb3f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cb3f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1cb3fcu;
}
