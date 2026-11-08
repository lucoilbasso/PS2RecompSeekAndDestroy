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

// Function: entry_00174fc0
// Address: 0x174fc0 - 0x174fd0
void entry_00174fc0_0x174fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174fc0_0x174fc0");
#endif

    switch (ctx->pc) {
        case 0x174fccu: goto label_174fcc;
        default: break;
    }

    ctx->pc = 0x174fc0u;

    // 0x174fc0: 0x8c840030  lw          $a0, 0x30($a0)
    ctx->pc = 0x174fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x174fc4: 0xc06cbb2  jal         func_1B2EC8
    ctx->pc = 0x174FC4u;
    SET_GPR_U32(ctx, 31, 0x174FCCu);
    ctx->pc = 0x174FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174FC4u;
    // 0x174fc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2EC8u, 0x174FC4u, 0x174FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174FCCu;
label_174fcc:
    // 0x174fcc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x174fccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174fd0u;
}
