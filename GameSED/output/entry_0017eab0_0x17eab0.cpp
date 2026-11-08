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

// Function: entry_0017eab0
// Address: 0x17eab0 - 0x17eac8
void entry_0017eab0_0x17eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017eab0_0x17eab0");
#endif

    switch (ctx->pc) {
        case 0x17eac4u: goto label_17eac4;
        default: break;
    }

    ctx->pc = 0x17eab0u;

    // 0x17eab0: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x17eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17eab4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EAB4u;
    {
        const bool branch_taken_0x17eab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eab4) {
            ctx->pc = 0x17EAB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EAB4u;
            // 0x17eab8: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17EAC8u;
            return;
        }
    }
    ctx->pc = 0x17EABCu;
    // 0x17eabc: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x17EABCu;
    SET_GPR_U32(ctx, 31, 0x17EAC4u);
    ctx->pc = 0x17EAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EABCu;
    // 0x17eac0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x17EABCu, 0x17EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAC4u;
label_17eac4:
    // 0x17eac4: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x17eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->pc = 0x17eac8u;
}
