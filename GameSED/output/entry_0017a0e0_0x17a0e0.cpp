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

// Function: entry_0017a0e0
// Address: 0x17a0e0 - 0x17a0e8
void entry_0017a0e0_0x17a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a0e0_0x17a0e0");
#endif

    ctx->pc = 0x17a0e0u;

    // 0x17a0e0: 0xc05de44  jal         func_177910
    ctx->pc = 0x17A0E0u;
    SET_GPR_U32(ctx, 31, 0x17A0E8u);
    ctx->pc = 0x17A0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A0E0u;
    // 0x17a0e4: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x177910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177910u, 0x17A0E0u, 0x17A0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A0E8u;
}
