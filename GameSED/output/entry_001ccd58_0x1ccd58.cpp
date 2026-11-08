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

// Function: entry_001ccd58
// Address: 0x1ccd58 - 0x1ccd60
void entry_001ccd58_0x1ccd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccd58_0x1ccd58");
#endif

    ctx->pc = 0x1ccd58u;

    // 0x1ccd58: 0xc0735c6  jal         func_1CD718
    ctx->pc = 0x1CCD58u;
    SET_GPR_U32(ctx, 31, 0x1CCD60u);
    ctx->pc = 0x1CCD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD58u;
    // 0x1ccd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CD718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD718u, 0x1CCD58u, 0x1CCD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD60u;
}
