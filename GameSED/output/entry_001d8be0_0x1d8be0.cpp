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

// Function: entry_001d8be0
// Address: 0x1d8be0 - 0x1d8bf4
void entry_001d8be0_0x1d8be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8be0_0x1d8be0");
#endif

    switch (ctx->pc) {
        case 0x1d8bf0u: goto label_1d8bf0;
        default: break;
    }

    ctx->pc = 0x1d8be0u;

    // 0x1d8be0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8BE0u;
    {
        const bool branch_taken_0x1d8be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8be0) {
            ctx->pc = 0x1D8BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8BE0u;
            // 0x1d8be4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8BF4u;
            return;
        }
    }
    ctx->pc = 0x1D8BE8u;
    // 0x1d8be8: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D8BE8u;
    SET_GPR_U32(ctx, 31, 0x1D8BF0u);
    ctx->pc = 0x1D8BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BE8u;
    // 0x1d8bec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D8BE8u, 0x1D8BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BF0u;
label_1d8bf0:
    // 0x1d8bf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d8bf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1d8bf4u;
}
