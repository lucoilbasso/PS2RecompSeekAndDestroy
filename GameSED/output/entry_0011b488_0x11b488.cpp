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

// Function: entry_0011b488
// Address: 0x11b488 - 0x11b49c
void entry_0011b488_0x11b488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b488_0x11b488");
#endif

    ctx->pc = 0x11b488u;

    // 0x11b488: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B488u;
    {
        const bool branch_taken_0x11b488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B488u;
        // 0x11b48c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b488) {
            ctx->pc = 0x11B49Cu;
            return;
        }
    }
    ctx->pc = 0x11B490u;
    // 0x11b490: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x11b490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b494: 0xc060e56  jal         func_183958
    ctx->pc = 0x11B494u;
    SET_GPR_U32(ctx, 31, 0x11B49Cu);
    ctx->pc = 0x11B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B494u;
    // 0x11b498: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x183958u, 0x11B494u, 0x11B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B49Cu;
}
