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

// Function: entry_0014cb8c
// Address: 0x14cb8c - 0x14cb94
void entry_0014cb8c_0x14cb8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cb8c_0x14cb8c");
#endif

    ctx->pc = 0x14cb8cu;

    // 0x14cb8c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x14CB8Cu;
    SET_GPR_U32(ctx, 31, 0x14CB94u);
    ctx->pc = 0x14CB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14CB8Cu;
    // 0x14cb90: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x14CB8Cu, 0x14CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14CB94u;
}
