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

// Function: entry_00199df0
// Address: 0x199df0 - 0x199e08
void entry_00199df0_0x199df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199df0_0x199df0");
#endif

    switch (ctx->pc) {
        case 0x199e04u: goto label_199e04;
        default: break;
    }

    ctx->pc = 0x199df0u;

    // 0x199df0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x199df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x199df4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x199DF4u;
    {
        const bool branch_taken_0x199df4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x199df4) {
            ctx->pc = 0x199DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x199DF4u;
            // 0x199df8: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x199E08u;
            return;
        }
    }
    ctx->pc = 0x199DFCu;
    // 0x199dfc: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x199DFCu;
    SET_GPR_U32(ctx, 31, 0x199E04u);
    ctx->pc = 0x199E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199DFCu;
    // 0x199e00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x199DFCu, 0x199E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E04u;
label_199e04:
    // 0x199e04: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x199e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->pc = 0x199e08u;
}
