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

// Function: entry_0012ec70
// Address: 0x12ec70 - 0x12ec98
void entry_0012ec70_0x12ec70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ec70_0x12ec70");
#endif

    switch (ctx->pc) {
        case 0x12ec78u: goto label_12ec78;
        default: break;
    }

    ctx->pc = 0x12ec70u;

label_12ec70:
    // 0x12ec70: 0xc04b46c  jal         func_12D1B0
    ctx->pc = 0x12EC70u;
    SET_GPR_U32(ctx, 31, 0x12EC78u);
    ctx->pc = 0x12EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12EC70u;
    // 0x12ec74: 0x8e44018c  lw          $a0, 0x18C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D1B0u, 0x12EC70u, 0x12EC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12EC78u;
label_12ec78:
    // 0x12ec78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12ec78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec7c: 0x50a00011  beql        $a1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x12EC7Cu;
    {
        const bool branch_taken_0x12ec7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ec7c) {
            ctx->pc = 0x12EC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC7Cu;
            // 0x12ec80: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ECC4u;
            return;
        }
    }
    ctx->pc = 0x12EC84u;
    // 0x12ec84: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x12ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x12ec88: 0x5051fff9  beql        $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12EC88u;
    {
        const bool branch_taken_0x12ec88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x12ec88) {
            ctx->pc = 0x12EC8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12EC88u;
            // 0x12ec8c: 0x8cb000c4  lw          $s0, 0xC4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12EC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ec70;
        }
    }
    ctx->pc = 0x12EC90u;
    // 0x12ec90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12EC90u;
    {
        const bool branch_taken_0x12ec90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12EC90u;
        // 0x12ec94: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec90) {
            ctx->pc = 0x12ECC4u;
            return;
        }
    }
    ctx->pc = 0x12EC98u;
}
