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

// Function: entry_001b3020
// Address: 0x1b3020 - 0x1b3030
void entry_001b3020_0x1b3020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3020_0x1b3020");
#endif

    switch (ctx->pc) {
        case 0x1b3028u: goto label_1b3028;
        default: break;
    }

    ctx->pc = 0x1b3020u;

    // 0x1b3020: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x1B3020u;
    SET_GPR_U32(ctx, 31, 0x1B3028u);
    ctx->pc = 0x1B3024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B3020u;
    // 0x1b3024: 0x8e04aa14  lw          $a0, -0x55EC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x1B3020u, 0x1B3028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3028u;
label_1b3028:
    // 0x1b3028: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3028u;
    {
        const bool branch_taken_0x1b3028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3028u;
        // 0x1b302c: 0x3c152000  lui         $s5, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3028) {
            ctx->pc = 0x1B3038u;
            return;
        }
    }
    ctx->pc = 0x1B3030u;
}
