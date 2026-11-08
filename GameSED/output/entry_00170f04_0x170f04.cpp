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

// Function: entry_00170f04
// Address: 0x170f04 - 0x170f0c
void entry_00170f04_0x170f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170f04_0x170f04");
#endif

    ctx->pc = 0x170f04u;

    // 0x170f04: 0xc06d60c  jal         func_1B5830
    ctx->pc = 0x170F04u;
    SET_GPR_U32(ctx, 31, 0x170F0Cu);
    ctx->pc = 0x170F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170F04u;
    // 0x170f08: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5830u, 0x170F04u, 0x170F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F0Cu;
}
