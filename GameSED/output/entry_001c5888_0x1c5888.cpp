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

// Function: entry_001c5888
// Address: 0x1c5888 - 0x1c5898
void entry_001c5888_0x1c5888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5888_0x1c5888");
#endif

    switch (ctx->pc) {
        case 0x1c5890u: goto label_1c5890;
        default: break;
    }

    ctx->pc = 0x1c5888u;

    // 0x1c5888: 0xc06c694  jal         func_1B1A50
    ctx->pc = 0x1C5888u;
    SET_GPR_U32(ctx, 31, 0x1C5890u);
    ctx->pc = 0x1C588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5888u;
    // 0x1c588c: 0x2624ee40  addiu       $a0, $s1, -0x11C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A50u, 0x1C5888u, 0x1C5890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5890u;
label_1c5890:
    // 0x1c5890: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C5890u;
    {
        const bool branch_taken_0x1c5890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C5894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5890u;
        // 0x1c5894: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5890) {
            ctx->pc = 0x1C5880u;
            return;
        }
    }
    ctx->pc = 0x1C5898u;
}
