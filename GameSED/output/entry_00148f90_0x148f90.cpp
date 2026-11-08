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

// Function: entry_00148f90
// Address: 0x148f90 - 0x148f98
void entry_00148f90_0x148f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00148f90_0x148f90");
#endif

    ctx->pc = 0x148f90u;

    // 0x148f90: 0xc05196c  jal         func_1465B0
    ctx->pc = 0x148F90u;
    SET_GPR_U32(ctx, 31, 0x148F98u);
    ctx->pc = 0x148F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F90u;
    // 0x148f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1465B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1465B0u, 0x148F90u, 0x148F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F98u;
}
