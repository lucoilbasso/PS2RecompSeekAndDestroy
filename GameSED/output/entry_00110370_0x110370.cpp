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

// Function: entry_00110370
// Address: 0x110370 - 0x110378
void entry_00110370_0x110370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110370_0x110370");
#endif

    ctx->pc = 0x110370u;

    // 0x110370: 0xc064ec6  jal         func_193B18
    ctx->pc = 0x110370u;
    SET_GPR_U32(ctx, 31, 0x110378u);
    ctx->pc = 0x110374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x110370u;
    // 0x110374: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193B18u, 0x110370u, 0x110378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110378u;
}
