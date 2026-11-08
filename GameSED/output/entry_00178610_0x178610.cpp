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

// Function: entry_00178610
// Address: 0x178610 - 0x178620
void entry_00178610_0x178610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178610_0x178610");
#endif

    switch (ctx->pc) {
        case 0x178618u: goto label_178618;
        default: break;
    }

    ctx->pc = 0x178610u;

    // 0x178610: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x178610u;
    SET_GPR_U32(ctx, 31, 0x178618u);
    ctx->pc = 0x178614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178610u;
    // 0x178614: 0x8e041010  lw          $a0, 0x1010($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x178610u, 0x178618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178618u;
label_178618:
    // 0x178618: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x178618u;
    {
        const bool branch_taken_0x178618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x178618) {
            ctx->pc = 0x178600u;
            return;
        }
    }
    ctx->pc = 0x178620u;
}
