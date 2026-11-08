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

// Function: entry_001537cc
// Address: 0x1537cc - 0x1537d4
void entry_001537cc_0x1537cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001537cc_0x1537cc");
#endif

    ctx->pc = 0x1537ccu;

    // 0x1537cc: 0xc0549fa  jal         func_1527E8
    ctx->pc = 0x1537CCu;
    SET_GPR_U32(ctx, 31, 0x1537D4u);
    ctx->pc = 0x1537D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537CCu;
    // 0x1537d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1527E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1527E8u, 0x1537CCu, 0x1537D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537D4u;
}
