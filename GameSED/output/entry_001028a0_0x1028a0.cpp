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

// Function: entry_001028a0
// Address: 0x1028a0 - 0x1028b0
void entry_001028a0_0x1028a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001028a0_0x1028a0");
#endif

    switch (ctx->pc) {
        case 0x1028acu: goto label_1028ac;
        default: break;
    }

    ctx->pc = 0x1028a0u;

    // 0x1028a0: 0x8e840038  lw          $a0, 0x38($s4)
    ctx->pc = 0x1028a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1028a4: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1028A4u;
    SET_GPR_U32(ctx, 31, 0x1028ACu);
    ctx->pc = 0x1028A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1028A4u;
    // 0x1028a8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1028A4u, 0x1028ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1028ACu;
label_1028ac:
    // 0x1028ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1028acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1028b0u;
}
