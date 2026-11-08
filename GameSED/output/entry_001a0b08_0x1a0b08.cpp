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

// Function: entry_001a0b08
// Address: 0x1a0b08 - 0x1a0b10
void entry_001a0b08_0x1a0b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0b08_0x1a0b08");
#endif

    ctx->pc = 0x1a0b08u;

    // 0x1a0b08: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A0B08u;
    SET_GPR_U32(ctx, 31, 0x1A0B10u);
    ctx->pc = 0x1A0B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0B08u;
    // 0x1a0b0c: 0x8f849174  lw          $a0, -0x6E8C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938996)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A0B08u, 0x1A0B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0B10u;
}
