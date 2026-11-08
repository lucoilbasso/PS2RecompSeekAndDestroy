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

// Function: entry_0018a870
// Address: 0x18a870 - 0x18a888
void entry_0018a870_0x18a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a870_0x18a870");
#endif

    switch (ctx->pc) {
        case 0x18a880u: goto label_18a880;
        default: break;
    }

    ctx->pc = 0x18a870u;

    // 0x18a870: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18A870u;
    {
        const bool branch_taken_0x18a870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18a870) {
            ctx->pc = 0x18A888u;
            return;
        }
    }
    ctx->pc = 0x18A878u;
    // 0x18a878: 0xc0684fe  jal         func_1A13F8
    ctx->pc = 0x18A878u;
    SET_GPR_U32(ctx, 31, 0x18A880u);
    ctx->pc = 0x18A87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A878u;
    // 0x18a87c: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A13F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A13F8u, 0x18A878u, 0x18A880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A880u;
label_18a880:
    // 0x18a880: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18A880u;
    {
        const bool branch_taken_0x18a880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A880u;
        // 0x18a884: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a880) {
            ctx->pc = 0x18A894u;
            return;
        }
    }
    ctx->pc = 0x18A888u;
}
