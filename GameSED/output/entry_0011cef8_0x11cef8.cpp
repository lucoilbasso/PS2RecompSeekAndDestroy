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

// Function: entry_0011cef8
// Address: 0x11cef8 - 0x11cf00
void entry_0011cef8_0x11cef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cef8_0x11cef8");
#endif

    ctx->pc = 0x11cef8u;

    // 0x11cef8: 0xc06a25a  jal         func_1A8968
    ctx->pc = 0x11CEF8u;
    SET_GPR_U32(ctx, 31, 0x11CF00u);
    ctx->pc = 0x11CEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEF8u;
    // 0x11cefc: 0x8c500048  lw          $s0, 0x48($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8968u, 0x11CEF8u, 0x11CF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CF00u;
}
