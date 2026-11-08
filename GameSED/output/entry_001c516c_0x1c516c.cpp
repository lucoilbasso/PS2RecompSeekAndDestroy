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

// Function: entry_001c516c
// Address: 0x1c516c - 0x1c5178
void entry_001c516c_0x1c516c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c516c_0x1c516c");
#endif

    switch (ctx->pc) {
        case 0x1c5174u: goto label_1c5174;
        default: break;
    }

    ctx->pc = 0x1c516cu;

    // 0x1c516c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1C516Cu;
    SET_GPR_U32(ctx, 31, 0x1C5174u);
    ctx->pc = 0x1C5170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C516Cu;
    // 0x1c5170: 0x8e24ddfc  lw          $a0, -0x2204($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294958588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1C516Cu, 0x1C5174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5174u;
label_1c5174:
    // 0x1c5174: 0x8e620400  lw          $v0, 0x400($s3)
    ctx->pc = 0x1c5174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1024)));
    ctx->pc = 0x1c5178u;
}
