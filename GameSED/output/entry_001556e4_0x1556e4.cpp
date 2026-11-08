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

// Function: entry_001556e4
// Address: 0x1556e4 - 0x1556fc
void entry_001556e4_0x1556e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001556e4_0x1556e4");
#endif

    switch (ctx->pc) {
        case 0x1556f8u: goto label_1556f8;
        default: break;
    }

    ctx->pc = 0x1556e4u;

    // 0x1556e4: 0x8e040898  lw          $a0, 0x898($s0)
    ctx->pc = 0x1556e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x1556e8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1556E8u;
    {
        const bool branch_taken_0x1556e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556e8) {
            ctx->pc = 0x1556ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1556E8u;
            // 0x1556ec: 0x3c040041  lui         $a0, 0x41 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1556FCu;
            return;
        }
    }
    ctx->pc = 0x1556F0u;
    // 0x1556f0: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1556F0u;
    SET_GPR_U32(ctx, 31, 0x1556F8u);
    ctx->pc = 0x1556F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1556F0u;
    // 0x1556f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1556F0u, 0x1556F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556F8u;
label_1556f8:
    // 0x1556f8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x1556f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    ctx->pc = 0x1556fcu;
}
