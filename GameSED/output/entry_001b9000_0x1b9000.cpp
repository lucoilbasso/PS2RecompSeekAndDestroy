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

// Function: entry_001b9000
// Address: 0x1b9000 - 0x1b9010
void entry_001b9000_0x1b9000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9000_0x1b9000");
#endif

    switch (ctx->pc) {
        case 0x1b900cu: goto label_1b900c;
        default: break;
    }

    ctx->pc = 0x1b9000u;

    // 0x1b9000: 0x8e060060  lw          $a2, 0x60($s0)
    ctx->pc = 0x1b9000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1b9004: 0xc074009  jal         func_1D0024
    ctx->pc = 0x1B9004u;
    SET_GPR_U32(ctx, 31, 0x1B900Cu);
    ctx->pc = 0x1B9008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9004u;
    // 0x1b9008: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x1B9004u, 0x1B900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B900Cu;
label_1b900c:
    // 0x1b900c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1b900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->pc = 0x1b9010u;
}
