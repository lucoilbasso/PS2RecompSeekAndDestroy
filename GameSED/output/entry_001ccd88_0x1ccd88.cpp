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

// Function: entry_001ccd88
// Address: 0x1ccd88 - 0x1ccda0
void entry_001ccd88_0x1ccd88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccd88_0x1ccd88");
#endif

    switch (ctx->pc) {
        case 0x1ccd9cu: goto label_1ccd9c;
        default: break;
    }

    ctx->pc = 0x1ccd88u;

    // 0x1ccd88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ccd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ccd8c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CCD8Cu;
    {
        const bool branch_taken_0x1ccd8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ccd8c) {
            ctx->pc = 0x1CCD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCD8Cu;
            // 0x1ccd90: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCDA0u;
            return;
        }
    }
    ctx->pc = 0x1CCD94u;
    // 0x1ccd94: 0xc07329a  jal         func_1CCA68
    ctx->pc = 0x1CCD94u;
    SET_GPR_U32(ctx, 31, 0x1CCD9Cu);
    ctx->pc = 0x1CCA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCA68u, 0x1CCD94u, 0x1CCD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCD9Cu;
label_1ccd9c:
    // 0x1ccd9c: 0x0  nop
    ctx->pc = 0x1ccd9cu;
    // NOP
    ctx->pc = 0x1ccda0u;
}
