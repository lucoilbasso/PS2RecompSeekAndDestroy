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

// Function: entry_0010c12c
// Address: 0x10c12c - 0x10c134
void entry_0010c12c_0x10c12c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c12c_0x10c12c");
#endif

    ctx->pc = 0x10c12cu;

    // 0x10c12c: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x10C12Cu;
    SET_GPR_U32(ctx, 31, 0x10C134u);
    ctx->pc = 0x10C130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C12Cu;
    // 0x10c130: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x10C12Cu, 0x10C134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C134u;
}
