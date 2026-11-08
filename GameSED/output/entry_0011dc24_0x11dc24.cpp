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

// Function: entry_0011dc24
// Address: 0x11dc24 - 0x11dc2c
void entry_0011dc24_0x11dc24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dc24_0x11dc24");
#endif

    ctx->pc = 0x11dc24u;

    // 0x11dc24: 0xc0477f2  jal         func_11DFC8
    ctx->pc = 0x11DC24u;
    SET_GPR_U32(ctx, 31, 0x11DC2Cu);
    ctx->pc = 0x11DC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DC24u;
    // 0x11dc28: 0x8c440040  lw          $a0, 0x40($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11DFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFC8u, 0x11DC24u, 0x11DC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DC2Cu;
}
