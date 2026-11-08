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

// Function: entry_0012e388
// Address: 0x12e388 - 0x12e398
void entry_0012e388_0x12e388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e388_0x12e388");
#endif

    ctx->pc = 0x12e388u;

    // 0x12e388: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12E388u;
    {
        const bool branch_taken_0x12e388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12E38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E388u;
        // 0x12e38c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e388) {
            ctx->pc = 0x12E39Cu;
            return;
        }
    }
    ctx->pc = 0x12E390u;
    // 0x12e390: 0xc04b196  jal         func_12C658
    ctx->pc = 0x12E390u;
    SET_GPR_U32(ctx, 31, 0x12E398u);
    ctx->pc = 0x12E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E390u;
    // 0x12e394: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C658u, 0x12E390u, 0x12E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E398u;
}
