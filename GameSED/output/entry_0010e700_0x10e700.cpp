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

// Function: entry_0010e700
// Address: 0x10e700 - 0x10e720
void entry_0010e700_0x10e700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e700_0x10e700");
#endif

    switch (ctx->pc) {
        case 0x10e708u: goto label_10e708;
        case 0x10e714u: goto label_10e714;
        default: break;
    }

    ctx->pc = 0x10e700u;

    // 0x10e700: 0xc06bd28  jal         func_1AF4A0
    ctx->pc = 0x10E700u;
    SET_GPR_U32(ctx, 31, 0x10E708u);
    ctx->pc = 0x10E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E700u;
    // 0x10e704: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF4A0u, 0x10E700u, 0x10E708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E708u;
label_10e708:
    // 0x10e708: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x10e708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x10e70c: 0xc06bd20  jal         func_1AF480
    ctx->pc = 0x10E70Cu;
    SET_GPR_U32(ctx, 31, 0x10E714u);
    ctx->pc = 0x10E710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E70Cu;
    // 0x10e710: 0x108180  sll         $s0, $s0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF480u, 0x10E70Cu, 0x10E714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E714u;
label_10e714:
    // 0x10e714: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x10e714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x10e718: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x10E718u;
    {
        const bool branch_taken_0x10e718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E718u;
        // 0x10e71c: 0x503821  addu        $a3, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e718) {
            ctx->pc = 0x10E7E8u;
            return;
        }
    }
    ctx->pc = 0x10E720u;
}
