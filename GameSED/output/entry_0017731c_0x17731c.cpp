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

// Function: entry_0017731c
// Address: 0x17731c - 0x177324
void entry_0017731c_0x17731c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017731c_0x17731c");
#endif

    ctx->pc = 0x17731cu;

    // 0x17731c: 0xc068364  jal         func_1A0D90
    ctx->pc = 0x17731Cu;
    SET_GPR_U32(ctx, 31, 0x177324u);
    ctx->pc = 0x177320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17731Cu;
    // 0x177320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0D90u, 0x17731Cu, 0x177324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177324u;
}
