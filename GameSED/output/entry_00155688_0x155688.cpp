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

// Function: entry_00155688
// Address: 0x155688 - 0x155690
void entry_00155688_0x155688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155688_0x155688");
#endif

    ctx->pc = 0x155688u;

    // 0x155688: 0xc04171a  jal         func_105C68
    ctx->pc = 0x155688u;
    SET_GPR_U32(ctx, 31, 0x155690u);
    ctx->pc = 0x15568Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155688u;
    // 0x15568c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105C68u, 0x155688u, 0x155690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155690u;
}
