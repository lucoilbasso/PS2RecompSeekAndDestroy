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

// Function: entry_00130fac
// Address: 0x130fac - 0x130fb4
void entry_00130fac_0x130fac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00130fac_0x130fac");
#endif

    ctx->pc = 0x130facu;

    // 0x130fac: 0xc04ca18  jal         func_132860
    ctx->pc = 0x130FACu;
    SET_GPR_U32(ctx, 31, 0x130FB4u);
    ctx->pc = 0x130FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130FACu;
    // 0x130fb0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132860u, 0x130FACu, 0x130FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130FB4u;
}
