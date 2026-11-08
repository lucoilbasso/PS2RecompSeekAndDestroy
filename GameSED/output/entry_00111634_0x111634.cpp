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

// Function: entry_00111634
// Address: 0x111634 - 0x111658
void entry_00111634_0x111634(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111634_0x111634");
#endif

    switch (ctx->pc) {
        case 0x11164cu: goto label_11164c;
        default: break;
    }

    ctx->pc = 0x111634u;

    // 0x111634: 0x1600005b  bnez        $s0, . + 4 + (0x5B << 2)
    ctx->pc = 0x111634u;
    {
        const bool branch_taken_0x111634 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x111638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111634u;
        // 0x111638: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111634) {
            ctx->pc = 0x1117A4u;
            return;
        }
    }
    ctx->pc = 0x11163Cu;
    // 0x11163c: 0x3c050025  lui         $a1, 0x25
    ctx->pc = 0x11163cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
    // 0x111640: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x111640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x111644: 0xc068186  jal         func_1A0618
    ctx->pc = 0x111644u;
    SET_GPR_U32(ctx, 31, 0x11164Cu);
    ctx->pc = 0x111648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111644u;
    // 0x111648: 0x24a53e88  addiu       $a1, $a1, 0x3E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0618u, 0x111644u, 0x11164Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11164Cu;
label_11164c:
    // 0x11164c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x11164Cu;
    {
        const bool branch_taken_0x11164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11164Cu;
        // 0x111650: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11164c) {
            ctx->pc = 0x1117A4u;
            return;
        }
    }
    ctx->pc = 0x111654u;
    // 0x111654: 0x0  nop
    ctx->pc = 0x111654u;
    // NOP
    ctx->pc = 0x111658u;
}
