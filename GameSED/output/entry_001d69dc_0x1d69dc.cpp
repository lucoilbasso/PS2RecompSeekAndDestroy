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

// Function: entry_001d69dc
// Address: 0x1d69dc - 0x1d69ec
void entry_001d69dc_0x1d69dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d69dc_0x1d69dc");
#endif

    switch (ctx->pc) {
        case 0x1d69e8u: goto label_1d69e8;
        default: break;
    }

    ctx->pc = 0x1d69dcu;

    // 0x1d69dc: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1d69dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1d69e0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D69E0u;
    SET_GPR_U32(ctx, 31, 0x1D69E8u);
    ctx->pc = 0x1D69E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D69E0u;
    // 0x1d69e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D69E0u, 0x1D69E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D69E8u;
label_1d69e8:
    // 0x1d69e8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1d69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    ctx->pc = 0x1d69ecu;
}
