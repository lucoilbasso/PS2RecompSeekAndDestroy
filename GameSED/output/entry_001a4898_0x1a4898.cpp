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

// Function: entry_001a4898
// Address: 0x1a4898 - 0x1a48a8
void entry_001a4898_0x1a4898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4898_0x1a4898");
#endif

    ctx->pc = 0x1a4898u;

    // 0x1a4898: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a489c: 0x24a59238  addiu       $a1, $a1, -0x6DC8
    ctx->pc = 0x1a489cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939192));
    // 0x1a48a0: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A48A0u;
    SET_GPR_U32(ctx, 31, 0x1A48A8u);
    ctx->pc = 0x1A48A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48A0u;
    // 0x1a48a4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A48A0u, 0x1A48A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48A8u;
}
