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

// Function: entry_0016c838
// Address: 0x16c838 - 0x16c840
void entry_0016c838_0x16c838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c838_0x16c838");
#endif

    ctx->pc = 0x16c838u;

    // 0x16c838: 0xc05b32a  jal         func_16CCA8
    ctx->pc = 0x16C838u;
    SET_GPR_U32(ctx, 31, 0x16C840u);
    ctx->pc = 0x16C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C838u;
    // 0x16c83c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CCA8u, 0x16C838u, 0x16C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C840u;
}
