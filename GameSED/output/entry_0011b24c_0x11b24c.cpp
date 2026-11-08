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

// Function: entry_0011b24c
// Address: 0x11b24c - 0x11b254
void entry_0011b24c_0x11b24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b24c_0x11b24c");
#endif

    ctx->pc = 0x11b24cu;

    // 0x11b24c: 0xc06bca0  jal         func_1AF280
    ctx->pc = 0x11B24Cu;
    SET_GPR_U32(ctx, 31, 0x11B254u);
    ctx->pc = 0x11B250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B24Cu;
    // 0x11b250: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF280u, 0x11B24Cu, 0x11B254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B254u;
}
