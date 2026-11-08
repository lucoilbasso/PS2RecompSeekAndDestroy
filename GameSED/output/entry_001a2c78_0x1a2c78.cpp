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

// Function: entry_001a2c78
// Address: 0x1a2c78 - 0x1a2c88
void entry_001a2c78_0x1a2c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2c78_0x1a2c78");
#endif

    ctx->pc = 0x1a2c78u;

    // 0x1a2c78: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a2c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a2c7c: 0x24a59238  addiu       $a1, $a1, -0x6DC8
    ctx->pc = 0x1a2c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939192));
    // 0x1a2c80: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A2C80u;
    SET_GPR_U32(ctx, 31, 0x1A2C88u);
    ctx->pc = 0x1A2C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2C80u;
    // 0x1a2c84: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A2C80u, 0x1A2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2C88u;
}
