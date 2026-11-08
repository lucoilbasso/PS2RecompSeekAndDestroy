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

// Function: entry_001d43fc
// Address: 0x1d43fc - 0x1d4404
void entry_001d43fc_0x1d43fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d43fc_0x1d43fc");
#endif

    ctx->pc = 0x1d43fcu;

    // 0x1d43fc: 0xc074035  jal         func_1D00D4
    ctx->pc = 0x1D43FCu;
    SET_GPR_U32(ctx, 31, 0x1D4404u);
    ctx->pc = 0x1D4400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43FCu;
    // 0x1d4400: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D00D4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D00D4u, 0x1D43FCu, 0x1D4404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4404u;
}
