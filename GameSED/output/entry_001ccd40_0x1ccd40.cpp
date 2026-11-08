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

// Function: entry_001ccd40
// Address: 0x1ccd40 - 0x1ccd50
void entry_001ccd40_0x1ccd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccd40_0x1ccd40");
#endif

    switch (ctx->pc) {
        case 0x1ccd48u: goto label_1ccd48;
        default: break;
    }

    ctx->pc = 0x1ccd40u;

    // 0x1ccd40: 0xc073b56  jal         func_1CED58
    ctx->pc = 0x1CCD40u;
    SET_GPR_U32(ctx, 31, 0x1CCD48u);
    ctx->pc = 0x1CCD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCD40u;
    // 0x1ccd44: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CED58u, 0x1CCD40u, 0x1CCD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD48u;
label_1ccd48:
    // 0x1ccd48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CCD48u;
    {
        const bool branch_taken_0x1ccd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd48) {
            ctx->pc = 0x1CCD58u;
            return;
        }
    }
    ctx->pc = 0x1CCD50u;
}
