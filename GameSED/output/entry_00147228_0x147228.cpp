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

// Function: entry_00147228
// Address: 0x147228 - 0x147248
void entry_00147228_0x147228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147228_0x147228");
#endif

    switch (ctx->pc) {
        case 0x147238u: goto label_147238;
        default: break;
    }

    ctx->pc = 0x147228u;

label_147228:
    // 0x147228: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x147228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14722c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14722cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147230: 0xc051a64  jal         func_146990
    ctx->pc = 0x147230u;
    SET_GPR_U32(ctx, 31, 0x147238u);
    ctx->pc = 0x147234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x147230u;
    // 0x147234: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146990u, 0x147230u, 0x147238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147238u;
label_147238:
    // 0x147238: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x147238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14723c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x14723cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x147240: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x147240u;
    {
        const bool branch_taken_0x147240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147240u;
        // 0x147244: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147240) {
            ctx->pc = 0x147228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_147228;
        }
    }
    ctx->pc = 0x147248u;
}
