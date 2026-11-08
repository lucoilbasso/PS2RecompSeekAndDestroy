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

// Function: entry_0017e74c
// Address: 0x17e74c - 0x17e754
void entry_0017e74c_0x17e74c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017e74c_0x17e74c");
#endif

    ctx->pc = 0x17e74cu;

    // 0x17e74c: 0xc05f6f6  jal         func_17DBD8
    ctx->pc = 0x17E74Cu;
    SET_GPR_U32(ctx, 31, 0x17E754u);
    ctx->pc = 0x17E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E74Cu;
    // 0x17e750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DBD8u, 0x17E74Cu, 0x17E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E754u;
}
