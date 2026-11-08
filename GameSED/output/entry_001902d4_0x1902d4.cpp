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

// Function: entry_001902d4
// Address: 0x1902d4 - 0x1902e8
void entry_001902d4_0x1902d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001902d4_0x1902d4");
#endif

    switch (ctx->pc) {
        case 0x1902e4u: goto label_1902e4;
        default: break;
    }

    ctx->pc = 0x1902d4u;

    // 0x1902d4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1902D4u;
    {
        const bool branch_taken_0x1902d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1902d4) {
            ctx->pc = 0x1902D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1902D4u;
            // 0x1902d8: 0x8e0401d4  lw          $a0, 0x1D4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1902E8u;
            return;
        }
    }
    ctx->pc = 0x1902DCu;
    // 0x1902dc: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1902DCu;
    SET_GPR_U32(ctx, 31, 0x1902E4u);
    ctx->pc = 0x1902E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1902DCu;
    // 0x1902e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1902DCu, 0x1902E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1902E4u;
label_1902e4:
    // 0x1902e4: 0x8e0401d4  lw          $a0, 0x1D4($s0)
    ctx->pc = 0x1902e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    ctx->pc = 0x1902e8u;
}
