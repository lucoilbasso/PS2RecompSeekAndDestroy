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

// Function: entry_001d6a68
// Address: 0x1d6a68 - 0x1d6a78
void entry_001d6a68_0x1d6a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6a68_0x1d6a68");
#endif

    switch (ctx->pc) {
        case 0x1d6a74u: goto label_1d6a74;
        default: break;
    }

    ctx->pc = 0x1d6a68u;

    // 0x1d6a68: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x1d6a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1d6a6c: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D6A6Cu;
    SET_GPR_U32(ctx, 31, 0x1D6A74u);
    ctx->pc = 0x1D6A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6A6Cu;
    // 0x1d6a70: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D6A6Cu, 0x1D6A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A74u;
label_1d6a74:
    // 0x1d6a74: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1d6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    ctx->pc = 0x1d6a78u;
}
