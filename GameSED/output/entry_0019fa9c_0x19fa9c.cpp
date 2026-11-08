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

// Function: entry_0019fa9c
// Address: 0x19fa9c - 0x19fae4
void entry_0019fa9c_0x19fa9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fa9c_0x19fa9c");
#endif

    switch (ctx->pc) {
        case 0x19fabcu: goto label_19fabc;
        case 0x19fad0u: goto label_19fad0;
        default: break;
    }

    ctx->pc = 0x19fa9cu;

    // 0x19fa9c: 0x29420008  slti        $v0, $t2, 0x8
    ctx->pc = 0x19fa9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x19faa0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x19FAA0u;
    {
        const bool branch_taken_0x19faa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAA0u;
        // 0x19faa4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19faa0) {
            ctx->pc = 0x19F9F8u;
            return;
        }
    }
    ctx->pc = 0x19FAA8u;
    // 0x19faa8: 0x8f83915c  lw          $v1, -0x6EA4($gp)
    ctx->pc = 0x19faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938972)));
    // 0x19faac: 0x14a3000e  bne         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x19FAACu;
    {
        const bool branch_taken_0x19faac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x19FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FAACu;
        // 0x19fab0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19faac) {
            ctx->pc = 0x19FAE8u;
            return;
        }
    }
    ctx->pc = 0x19FAB4u;
    // 0x19fab4: 0xc0683b2  jal         func_1A0EC8
    ctx->pc = 0x19FAB4u;
    SET_GPR_U32(ctx, 31, 0x19FABCu);
    ctx->pc = 0x1A0EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0EC8u, 0x19FAB4u, 0x19FABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FABCu;
label_19fabc:
    // 0x19fabc: 0x8f839160  lw          $v1, -0x6EA0($gp)
    ctx->pc = 0x19fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938976)));
    // 0x19fac0: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FAC0u;
    {
        const bool branch_taken_0x19fac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19fac0) {
            ctx->pc = 0x19FAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19FAC0u;
            // 0x19fac4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19FAE8u;
            return;
        }
    }
    ctx->pc = 0x19FAC8u;
    // 0x19fac8: 0xc0683b2  jal         func_1A0EC8
    ctx->pc = 0x19FAC8u;
    SET_GPR_U32(ctx, 31, 0x19FAD0u);
    ctx->pc = 0x1A0EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0EC8u, 0x19FAC8u, 0x19FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAD0u;
label_19fad0:
    // 0x19fad0: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x19fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x19fad4: 0x8f859160  lw          $a1, -0x6EA0($gp)
    ctx->pc = 0x19fad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938976)));
    // 0x19fad8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19fad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19fadc: 0xc05bd26  jal         func_16F498
    ctx->pc = 0x19FADCu;
    SET_GPR_U32(ctx, 31, 0x19FAE4u);
    ctx->pc = 0x19FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FADCu;
    // 0x19fae0: 0x248487b0  addiu       $a0, $a0, -0x7850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F498u, 0x19FADCu, 0x19FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FAE4u;
}
