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

// Function: entry_0011245c
// Address: 0x11245c - 0x112480
void entry_0011245c_0x11245c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011245c_0x11245c");
#endif

    switch (ctx->pc) {
        case 0x112474u: goto label_112474;
        default: break;
    }

    ctx->pc = 0x11245cu;

    // 0x11245c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11245cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x112460: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x112460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x112464: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x112464u;
    {
        const bool branch_taken_0x112464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x112468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112464u;
        // 0x112468: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112464) {
            ctx->pc = 0x112480u;
            return;
        }
    }
    ctx->pc = 0x11246Cu;
    // 0x11246c: 0xc06a250  jal         func_1A8940
    ctx->pc = 0x11246Cu;
    SET_GPR_U32(ctx, 31, 0x112474u);
    ctx->pc = 0x1A8940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8940u, 0x11246Cu, 0x112474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112474u;
label_112474:
    // 0x112474: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x112474u;
    {
        const bool branch_taken_0x112474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112474u;
        // 0x112478: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112474) {
            ctx->pc = 0x112494u;
            return;
        }
    }
    ctx->pc = 0x11247Cu;
    // 0x11247c: 0x0  nop
    ctx->pc = 0x11247cu;
    // NOP
    ctx->pc = 0x112480u;
}
