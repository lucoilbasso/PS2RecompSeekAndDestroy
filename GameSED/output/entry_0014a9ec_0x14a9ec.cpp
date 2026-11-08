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

// Function: entry_0014a9ec
// Address: 0x14a9ec - 0x14aa00
void entry_0014a9ec_0x14a9ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a9ec_0x14a9ec");
#endif

    switch (ctx->pc) {
        case 0x14a9fcu: goto label_14a9fc;
        default: break;
    }

    ctx->pc = 0x14a9ecu;

    // 0x14a9ec: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A9ECu;
    {
        const bool branch_taken_0x14a9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a9ec) {
            ctx->pc = 0x14A9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A9ECu;
            // 0x14a9f0: 0x8e2601b0  lw          $a2, 0x1B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AA00u;
            return;
        }
    }
    ctx->pc = 0x14A9F4u;
    // 0x14a9f4: 0xc0559fc  jal         func_1567F0
    ctx->pc = 0x14A9F4u;
    SET_GPR_U32(ctx, 31, 0x14A9FCu);
    ctx->pc = 0x14A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A9F4u;
    // 0x14a9f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1567F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1567F0u, 0x14A9F4u, 0x14A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A9FCu;
label_14a9fc:
    // 0x14a9fc: 0x8e2601b0  lw          $a2, 0x1B0($s1)
    ctx->pc = 0x14a9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
    ctx->pc = 0x14aa00u;
}
