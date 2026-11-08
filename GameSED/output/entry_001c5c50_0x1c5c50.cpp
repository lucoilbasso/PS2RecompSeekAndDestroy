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

// Function: entry_001c5c50
// Address: 0x1c5c50 - 0x1c5c58
void entry_001c5c50_0x1c5c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5c50_0x1c5c50");
#endif

    ctx->pc = 0x1c5c50u;

    // 0x1c5c50: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C5C50u;
    SET_GPR_U32(ctx, 31, 0x1C5C58u);
    ctx->pc = 0x1C5C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5C50u;
    // 0x1c5c54: 0x8ea4ddfc  lw          $a0, -0x2204($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C5C50u, 0x1C5C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5C58u;
}
