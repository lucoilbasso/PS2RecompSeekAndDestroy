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

// Function: entry_001ccb7c
// Address: 0x1ccb7c - 0x1ccba8
void entry_001ccb7c_0x1ccb7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccb7c_0x1ccb7c");
#endif

    switch (ctx->pc) {
        case 0x1ccb90u: goto label_1ccb90;
        case 0x1ccba4u: goto label_1ccba4;
        default: break;
    }

    ctx->pc = 0x1ccb7cu;

label_1ccb7c:
    // 0x1ccb7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ccb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ccb80:
    // 0x1ccb80: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_1ccb84:
    if (ctx->pc == 0x1CCB84u) {
        ctx->pc = 0x1CCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB80u;
        // 0x1ccb84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCB88u;
        goto label_1ccb88;
    }
    ctx->pc = 0x1CCB80u;
    {
        const bool branch_taken_0x1ccb80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1CCB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB80u;
        // 0x1ccb84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb80) {
            ctx->pc = 0x1CCBA8u;
            return;
        }
    }
    ctx->pc = 0x1CCB88u;
label_1ccb88:
    // 0x1ccb88: 0xa0f809  jalr        $a1
label_1ccb8c:
    if (ctx->pc == 0x1CCB8Cu) {
        ctx->pc = 0x1CCB90u;
        goto label_1ccb90;
    }
    ctx->pc = 0x1CCB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x1CCB90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CCB88u, 0x1CCB90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CCB90u;
label_1ccb90:
    // 0x1ccb90: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1ccb90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1ccb94:
    // 0x1ccb94: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x1ccb94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1ccb98:
    // 0x1ccb98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb9c:
    // 0x1ccb9c: 0xc073a08  jal         func_1CE820
label_1ccba0:
    if (ctx->pc == 0x1CCBA0u) {
        ctx->pc = 0x1CCBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CCB9Cu;
        // 0x1ccba0: 0x26070008  addiu       $a3, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CCBA4u;
        goto label_1ccba4;
    }
    ctx->pc = 0x1CCB9Cu;
    SET_GPR_U32(ctx, 31, 0x1CCBA4u);
    ctx->pc = 0x1CCBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CCB9Cu;
    // 0x1ccba0: 0x26070008  addiu       $a3, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE820u, 0x1CCB9Cu, 0x1CCBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CCBA4u;
label_1ccba4:
    // 0x1ccba4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ccba4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1ccba8u;
}
