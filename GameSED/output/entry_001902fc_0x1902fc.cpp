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

// Function: entry_001902fc
// Address: 0x1902fc - 0x19030c
void entry_001902fc_0x1902fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001902fc_0x1902fc");
#endif

    ctx->pc = 0x1902fcu;

    // 0x1902fc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1902FCu;
    {
        const bool branch_taken_0x1902fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902fc) {
            ctx->pc = 0x19030Cu;
            return;
        }
    }
    ctx->pc = 0x190304u;
    // 0x190304: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x190304u;
    SET_GPR_U32(ctx, 31, 0x19030Cu);
    ctx->pc = 0x190308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190304u;
    // 0x190308: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x190304u, 0x19030Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19030Cu;
}
