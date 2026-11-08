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

// Function: entry_00183c14
// Address: 0x183c14 - 0x183c1c
void entry_00183c14_0x183c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183c14_0x183c14");
#endif

    ctx->pc = 0x183c14u;

    // 0x183c14: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x183C14u;
    SET_GPR_U32(ctx, 31, 0x183C1Cu);
    ctx->pc = 0x183C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183C14u;
    // 0x183c18: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x183C14u, 0x183C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C1Cu;
}
