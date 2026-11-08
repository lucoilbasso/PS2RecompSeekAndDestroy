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

// Function: entry_00193a70
// Address: 0x193a70 - 0x193a84
void entry_00193a70_0x193a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193a70_0x193a70");
#endif

    switch (ctx->pc) {
        case 0x193a80u: goto label_193a80;
        default: break;
    }

    ctx->pc = 0x193a70u;

    // 0x193a70: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x193A70u;
    {
        const bool branch_taken_0x193a70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x193a70) {
            ctx->pc = 0x193A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x193A70u;
            // 0x193a74: 0x8e0401a4  lw          $a0, 0x1A4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x193A84u;
            return;
        }
    }
    ctx->pc = 0x193A78u;
    // 0x193a78: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x193A78u;
    SET_GPR_U32(ctx, 31, 0x193A80u);
    ctx->pc = 0x193A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x193A78u;
    // 0x193a7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x193A78u, 0x193A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193A80u;
label_193a80:
    // 0x193a80: 0x8e0401a4  lw          $a0, 0x1A4($s0)
    ctx->pc = 0x193a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    ctx->pc = 0x193a84u;
}
