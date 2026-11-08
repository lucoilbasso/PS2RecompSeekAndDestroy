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

// Function: entry_001d577c
// Address: 0x1d577c - 0x1d5788
void entry_001d577c_0x1d577c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d577c_0x1d577c");
#endif

    ctx->pc = 0x1d577cu;

    // 0x1d577c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d577cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d5780: 0xc0754c8  jal         func_1D5320
    ctx->pc = 0x1D5780u;
    SET_GPR_U32(ctx, 31, 0x1D5788u);
    ctx->pc = 0x1D5784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5780u;
    // 0x1d5784: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5320u, 0x1D5780u, 0x1D5788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5788u;
}
