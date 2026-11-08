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

// Function: entry_0011de14
// Address: 0x11de14 - 0x11de1c
void entry_0011de14_0x11de14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011de14_0x11de14");
#endif

    ctx->pc = 0x11de14u;

    // 0x11de14: 0xc05ef40  jal         func_17BD00
    ctx->pc = 0x11DE14u;
    SET_GPR_U32(ctx, 31, 0x11DE1Cu);
    ctx->pc = 0x11DE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DE14u;
    // 0x11de18: 0x8c440038  lw          $a0, 0x38($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BD00u, 0x11DE14u, 0x11DE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DE1Cu;
}
