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

// Function: entry_0012ec30
// Address: 0x12ec30 - 0x12ec58
void entry_0012ec30_0x12ec30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ec30_0x12ec30");
#endif

    switch (ctx->pc) {
        case 0x12ec38u: goto label_12ec38;
        default: break;
    }

    ctx->pc = 0x12ec30u;

label_12ec30:
    // 0x12ec30: 0xc04899e  jal         func_122678
    ctx->pc = 0x12EC30u;
    SET_GPR_U32(ctx, 31, 0x12EC38u);
    ctx->pc = 0x12EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC30u;
    // 0x12ec34: 0x8e440184  lw          $a0, 0x184($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122678u, 0x12EC30u, 0x12EC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC38u;
label_12ec38:
    // 0x12ec38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ec38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec3c: 0x50a00021  beql        $a1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x12EC3Cu;
    {
        const bool branch_taken_0x12ec3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec3c) {
            ctx->pc = 0x12EC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC3Cu;
            // 0x12ec40: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            return;
        }
    }
    ctx->pc = 0x12EC44u;
    // 0x12ec44: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x12ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x12ec48: 0x5051fff9  beql        $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12EC48u;
    {
        const bool branch_taken_0x12ec48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x12ec48) {
            ctx->pc = 0x12EC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC48u;
            // 0x12ec4c: 0x8cb00004  lw          $s0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ec30;
        }
    }
    ctx->pc = 0x12EC50u;
    // 0x12ec50: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12EC50u;
    {
        const bool branch_taken_0x12ec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC50u;
        // 0x12ec54: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec50) {
            ctx->pc = 0x12ECC4u;
            return;
        }
    }
    ctx->pc = 0x12EC58u;
}
