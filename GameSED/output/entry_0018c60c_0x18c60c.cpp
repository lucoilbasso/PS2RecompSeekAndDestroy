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

// Function: entry_0018c60c
// Address: 0x18c60c - 0x18c620
void entry_0018c60c_0x18c60c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c60c_0x18c60c");
#endif

    switch (ctx->pc) {
        case 0x18c61cu: goto label_18c61c;
        default: break;
    }

    ctx->pc = 0x18c60cu;

    // 0x18c60c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C60Cu;
    {
        const bool branch_taken_0x18c60c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c60c) {
            ctx->pc = 0x18C610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18C60Cu;
            // 0x18c610: 0x8e040220  lw          $a0, 0x220($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18C620u;
            return;
        }
    }
    ctx->pc = 0x18C614u;
    // 0x18c614: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x18C614u;
    SET_GPR_U32(ctx, 31, 0x18C61Cu);
    ctx->pc = 0x18C618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C614u;
    // 0x18c618: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x18C614u, 0x18C61Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C61Cu;
label_18c61c:
    // 0x18c61c: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x18c61cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    ctx->pc = 0x18c620u;
}
