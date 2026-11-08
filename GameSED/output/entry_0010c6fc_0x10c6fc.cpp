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

// Function: entry_0010c6fc
// Address: 0x10c6fc - 0x10c704
void entry_0010c6fc_0x10c6fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010c6fc_0x10c6fc");
#endif

    ctx->pc = 0x10c6fcu;

    // 0x10c6fc: 0xc04110c  jal         func_104430
    ctx->pc = 0x10C6FCu;
    SET_GPR_U32(ctx, 31, 0x10C704u);
    ctx->pc = 0x10C700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C6FCu;
    // 0x10c700: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104430u, 0x10C6FCu, 0x10C704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C704u;
}
