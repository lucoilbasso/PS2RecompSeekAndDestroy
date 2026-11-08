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

// Function: entry_001d8ba0
// Address: 0x1d8ba0 - 0x1d8bb8
void entry_001d8ba0_0x1d8ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8ba0_0x1d8ba0");
#endif

    switch (ctx->pc) {
        case 0x1d8bb4u: goto label_1d8bb4;
        default: break;
    }

    ctx->pc = 0x1d8ba0u;

    // 0x1d8ba0: 0x8e240300  lw          $a0, 0x300($s1)
    ctx->pc = 0x1d8ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 768)));
    // 0x1d8ba4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D8BA4u;
    {
        const bool branch_taken_0x1d8ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8ba4) {
            ctx->pc = 0x1D8BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D8BA4u;
            // 0x1d8ba8: 0x8e240320  lw          $a0, 0x320($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D8BB8u;
            return;
        }
    }
    ctx->pc = 0x1D8BACu;
    // 0x1d8bac: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1D8BACu;
    SET_GPR_U32(ctx, 31, 0x1D8BB4u);
    ctx->pc = 0x1D8BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8BACu;
    // 0x1d8bb0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1D8BACu, 0x1D8BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D8BB4u;
label_1d8bb4:
    // 0x1d8bb4: 0x8e240320  lw          $a0, 0x320($s1)
    ctx->pc = 0x1d8bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    ctx->pc = 0x1d8bb8u;
}
