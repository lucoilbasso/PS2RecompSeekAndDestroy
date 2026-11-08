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

// Function: entry_00170f0c
// Address: 0x170f0c - 0x170f14
void entry_00170f0c_0x170f0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170f0c_0x170f0c");
#endif

    ctx->pc = 0x170f0cu;

    // 0x170f0c: 0xc06d60c  jal         func_1B5830
    ctx->pc = 0x170F0Cu;
    SET_GPR_U32(ctx, 31, 0x170F14u);
    ctx->pc = 0x170F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F0Cu;
    // 0x170f10: 0x8e040058  lw          $a0, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5830u, 0x170F0Cu, 0x170F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F14u;
}
