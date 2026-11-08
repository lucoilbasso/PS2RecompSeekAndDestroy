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

// Function: entry_001a5ba0
// Address: 0x1a5ba0 - 0x1a5bac
void entry_001a5ba0_0x1a5ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5ba0_0x1a5ba0");
#endif

    ctx->pc = 0x1a5ba0u;

    // 0x1a5ba0: 0x26a593d8  addiu       $a1, $s5, -0x6C28
    ctx->pc = 0x1a5ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294939608));
    // 0x1a5ba4: 0xc068186  jal         func_1A0618
    ctx->pc = 0x1A5BA4u;
    SET_GPR_U32(ctx, 31, 0x1A5BACu);
    ctx->pc = 0x1A5BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5BA4u;
    // 0x1a5ba8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x1A5BA4u, 0x1A5BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5BACu;
}
