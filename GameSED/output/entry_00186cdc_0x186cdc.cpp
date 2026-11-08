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

// Function: entry_00186cdc
// Address: 0x186cdc - 0x186ce4
void entry_00186cdc_0x186cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186cdc_0x186cdc");
#endif

    ctx->pc = 0x186cdcu;

    // 0x186cdc: 0xc061422  jal         func_185088
    ctx->pc = 0x186CDCu;
    SET_GPR_U32(ctx, 31, 0x186CE4u);
    ctx->pc = 0x186CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CDCu;
    // 0x186ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x186CDCu, 0x186CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CE4u;
}
