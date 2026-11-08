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

// Function: entry_00132d10
// Address: 0x132d10 - 0x132d18
void entry_00132d10_0x132d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132d10_0x132d10");
#endif

    ctx->pc = 0x132d10u;

    // 0x132d10: 0xc04ca86  jal         func_132A18
    ctx->pc = 0x132D10u;
    SET_GPR_U32(ctx, 31, 0x132D18u);
    ctx->pc = 0x132D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132D10u;
    // 0x132d14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132A18u, 0x132D10u, 0x132D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132D18u;
}
