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

// Function: entry_0011ba68
// Address: 0x11ba68 - 0x11ba78
void entry_0011ba68_0x11ba68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ba68_0x11ba68");
#endif

    ctx->pc = 0x11ba68u;

    // 0x11ba68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11ba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11ba6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ba70: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x11BA70u;
    SET_GPR_U32(ctx, 31, 0x11BA78u);
    ctx->pc = 0x11BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BA70u;
    // 0x11ba74: 0x8c500154  lw          $s0, 0x154($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 340)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x11BA70u, 0x11BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BA78u;
}
