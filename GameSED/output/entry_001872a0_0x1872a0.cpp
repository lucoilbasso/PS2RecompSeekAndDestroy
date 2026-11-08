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

// Function: entry_001872a0
// Address: 0x1872a0 - 0x1872a8
void entry_001872a0_0x1872a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001872a0_0x1872a0");
#endif

    ctx->pc = 0x1872a0u;

    // 0x1872a0: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1872A0u;
    SET_GPR_U32(ctx, 31, 0x1872A8u);
    ctx->pc = 0x1872A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1872A0u;
    // 0x1872a4: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1872A0u, 0x1872A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1872A8u;
}
