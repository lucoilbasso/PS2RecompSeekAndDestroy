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

// Function: entry_001b60dc
// Address: 0x1b60dc - 0x1b60f0
void entry_001b60dc_0x1b60dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b60dc_0x1b60dc");
#endif

    switch (ctx->pc) {
        case 0x1b60e8u: goto label_1b60e8;
        default: break;
    }

    ctx->pc = 0x1b60dcu;

    // 0x1b60dc: 0x26440104  addiu       $a0, $s2, 0x104
    ctx->pc = 0x1b60dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 260));
    // 0x1b60e0: 0xc074009  jal         func_1D0024
    ctx->pc = 0x1B60E0u;
    SET_GPR_U32(ctx, 31, 0x1B60E8u);
    ctx->pc = 0x1B60E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B60E0u;
    // 0x1b60e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0024u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0024u, 0x1B60E0u, 0x1B60E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B60E8u;
label_1b60e8:
    // 0x1b60e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B60E8u;
    {
        const bool branch_taken_0x1b60e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B60ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B60E8u;
        // 0x1b60ec: 0xae510004  sw          $s1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b60e8) {
            ctx->pc = 0x1B60F4u;
            return;
        }
    }
    ctx->pc = 0x1B60F0u;
}
