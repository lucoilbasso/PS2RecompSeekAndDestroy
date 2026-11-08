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

// Function: entry_001b1760
// Address: 0x1b1760 - 0x1b1778
void entry_001b1760_0x1b1760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1760_0x1b1760");
#endif

    switch (ctx->pc) {
        case 0x1b1768u: goto label_1b1768;
        case 0x1b1770u: goto label_1b1770;
        default: break;
    }

    ctx->pc = 0x1b1760u;

    // 0x1b1760: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x1B1760u;
    SET_GPR_U32(ctx, 31, 0x1B1768u);
    ctx->pc = 0x1B1764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1760u;
    // 0x1b1764: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x1B1760u, 0x1B1768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1768u;
label_1b1768:
    // 0x1b1768: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1B1768u;
    SET_GPR_U32(ctx, 31, 0x1B1770u);
    ctx->pc = 0x1B176Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1768u;
    // 0x1b176c: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1B1768u, 0x1B1770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1770u;
label_1b1770:
    // 0x1b1770: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1770u;
    {
        const bool branch_taken_0x1b1770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1770u;
        // 0x1b1774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1770) {
            ctx->pc = 0x1B17B4u;
            return;
        }
    }
    ctx->pc = 0x1B1778u;
}
