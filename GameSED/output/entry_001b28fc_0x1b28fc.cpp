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

// Function: entry_001b28fc
// Address: 0x1b28fc - 0x1b2920
void entry_001b28fc_0x1b28fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b28fc_0x1b28fc");
#endif

    switch (ctx->pc) {
        case 0x1b2904u: goto label_1b2904;
        case 0x1b2914u: goto label_1b2914;
        default: break;
    }

    ctx->pc = 0x1b28fcu;

    // 0x1b28fc: 0xc06c9f0  jal         func_1B27C0
    ctx->pc = 0x1B28FCu;
    SET_GPR_U32(ctx, 31, 0x1B2904u);
    ctx->pc = 0x1B27C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B27C0u, 0x1B28FCu, 0x1B2904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2904u;
label_1b2904:
    // 0x1b2904: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2904u;
    {
        const bool branch_taken_0x1b2904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2904) {
            ctx->pc = 0x1B2920u;
            return;
        }
    }
    ctx->pc = 0x1B290Cu;
    // 0x1b290c: 0xc06c938  jal         func_1B24E0
    ctx->pc = 0x1B290Cu;
    SET_GPR_U32(ctx, 31, 0x1B2914u);
    ctx->pc = 0x1B24E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B24E0u, 0x1B290Cu, 0x1B2914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2914u;
label_1b2914:
    // 0x1b2914: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x1b2914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x1b2918: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1B2918u;
    {
        const bool branch_taken_0x1b2918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2918u;
        // 0x1b291c: 0x3442fffc  ori         $v0, $v0, 0xFFFC (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2918) {
            ctx->pc = 0x1B2ADCu;
            return;
        }
    }
    ctx->pc = 0x1B2920u;
}
