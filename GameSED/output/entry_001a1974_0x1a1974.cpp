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

// Function: entry_001a1974
// Address: 0x1a1974 - 0x1a1980
void entry_001a1974_0x1a1974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1974_0x1a1974");
#endif

    ctx->pc = 0x1a1974u;

    // 0x1a1974: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a1974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1978: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x1A1978u;
    SET_GPR_U32(ctx, 31, 0x1A1980u);
    ctx->pc = 0x1A197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1978u;
    // 0x1a197c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x1A1978u, 0x1A1980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1980u;
}
