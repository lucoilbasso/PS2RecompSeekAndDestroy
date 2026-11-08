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

// Function: entry_0012eca0
// Address: 0x12eca0 - 0x12ecac
void entry_0012eca0_0x12eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012eca0_0x12eca0");
#endif

    switch (ctx->pc) {
        case 0x12eca8u: goto label_12eca8;
        default: break;
    }

    ctx->pc = 0x12eca0u;

    // 0x12eca0: 0xc04901c  jal         func_124070
    ctx->pc = 0x12ECA0u;
    SET_GPR_U32(ctx, 31, 0x12ECA8u);
    ctx->pc = 0x12ECA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ECA0u;
    // 0x12eca4: 0x8e440188  lw          $a0, 0x188($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 392)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124070u, 0x12ECA0u, 0x12ECA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12ECA8u;
label_12eca8:
    // 0x12eca8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12eca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x12ecacu;
}
