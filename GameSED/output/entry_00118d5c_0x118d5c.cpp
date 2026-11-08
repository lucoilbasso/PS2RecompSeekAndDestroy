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

// Function: entry_00118d5c
// Address: 0x118d5c - 0x118d64
void entry_00118d5c_0x118d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118d5c_0x118d5c");
#endif

    ctx->pc = 0x118d5cu;

    // 0x118d5c: 0xc046370  jal         func_118DC0
    ctx->pc = 0x118D5Cu;
    SET_GPR_U32(ctx, 31, 0x118D64u);
    ctx->pc = 0x118D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118D5Cu;
    // 0x118d60: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118DC0u, 0x118D5Cu, 0x118D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D64u;
}
