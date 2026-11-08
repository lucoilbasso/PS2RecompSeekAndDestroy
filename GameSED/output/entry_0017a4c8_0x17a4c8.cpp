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

// Function: entry_0017a4c8
// Address: 0x17a4c8 - 0x17a4d0
void entry_0017a4c8_0x17a4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a4c8_0x17a4c8");
#endif

    ctx->pc = 0x17a4c8u;

    // 0x17a4c8: 0xc06ed00  jal         func_1BB400
    ctx->pc = 0x17A4C8u;
    SET_GPR_U32(ctx, 31, 0x17A4D0u);
    ctx->pc = 0x17A4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A4C8u;
    // 0x17a4cc: 0xaf808cf0  sw          $zero, -0x7310($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937840), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB400u, 0x17A4C8u, 0x17A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A4D0u;
}
