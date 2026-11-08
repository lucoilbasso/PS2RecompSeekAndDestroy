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

// Function: entry_00132338
// Address: 0x132338 - 0x132340
void entry_00132338_0x132338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132338_0x132338");
#endif

    ctx->pc = 0x132338u;

    // 0x132338: 0xc04c308  jal         func_130C20
    ctx->pc = 0x132338u;
    SET_GPR_U32(ctx, 31, 0x132340u);
    ctx->pc = 0x13233Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132338u;
    // 0x13233c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130C20u, 0x132338u, 0x132340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132340u;
}
