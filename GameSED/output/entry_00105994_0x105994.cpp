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

// Function: entry_00105994
// Address: 0x105994 - 0x10599c
void entry_00105994_0x105994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105994_0x105994");
#endif

    ctx->pc = 0x105994u;

    // 0x105994: 0xc060df6  jal         func_1837D8
    ctx->pc = 0x105994u;
    SET_GPR_U32(ctx, 31, 0x10599Cu);
    ctx->pc = 0x105998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105994u;
    // 0x105998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1837D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1837D8u, 0x105994u, 0x10599Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10599Cu;
}
