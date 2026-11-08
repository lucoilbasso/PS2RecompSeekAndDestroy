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

// Function: entry_001117f4
// Address: 0x1117f4 - 0x1117fc
void entry_001117f4_0x1117f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001117f4_0x1117f4");
#endif

    ctx->pc = 0x1117f4u;

    // 0x1117f4: 0xc061422  jal         func_185088
    ctx->pc = 0x1117F4u;
    SET_GPR_U32(ctx, 31, 0x1117FCu);
    ctx->pc = 0x1117F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1117F4u;
    // 0x1117f8: 0x26140110  addiu       $s4, $s0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185088u, 0x1117F4u, 0x1117FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1117FCu;
}
