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

// Function: entry_001793d0
// Address: 0x1793d0 - 0x1793dc
void entry_001793d0_0x1793d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001793d0_0x1793d0");
#endif

    ctx->pc = 0x1793d0u;

    // 0x1793d0: 0x2610d180  addiu       $s0, $s0, -0x2E80
    ctx->pc = 0x1793d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955392));
    // 0x1793d4: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1793D4u;
    SET_GPR_U32(ctx, 31, 0x1793DCu);
    ctx->pc = 0x1793D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1793D4u;
    // 0x1793d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1793D4u, 0x1793DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1793DCu;
}
