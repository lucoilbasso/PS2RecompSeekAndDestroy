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

// Function: entry_001a1a08
// Address: 0x1a1a08 - 0x1a1a18
void entry_001a1a08_0x1a1a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1a08_0x1a1a08");
#endif

    ctx->pc = 0x1a1a08u;

    // 0x1a1a08: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1A08u;
    {
        const bool branch_taken_0x1a1a08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A08u;
        // 0x1a1a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a08) {
            ctx->pc = 0x1A1A18u;
            return;
        }
    }
    ctx->pc = 0x1A1A10u;
    // 0x1a1a10: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x1A1A10u;
    SET_GPR_U32(ctx, 31, 0x1A1A18u);
    ctx->pc = 0x1A1A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1A10u;
    // 0x1a1a14: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x1A1A10u, 0x1A1A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1A18u;
}
