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

// Function: entry_001a5e60
// Address: 0x1a5e60 - 0x1a5e70
void entry_001a5e60_0x1a5e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5e60_0x1a5e60");
#endif

    ctx->pc = 0x1a5e60u;

    // 0x1a5e60: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1a5e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1a5e64: 0x24a59428  addiu       $a1, $a1, -0x6BD8
    ctx->pc = 0x1a5e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939688));
    // 0x1a5e68: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A5E68u;
    SET_GPR_U32(ctx, 31, 0x1A5E70u);
    ctx->pc = 0x1A5E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5E68u;
    // 0x1a5e6c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A5E68u, 0x1A5E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5E70u;
}
