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

// Function: entry_001a9bb8
// Address: 0x1a9bb8 - 0x1a9c00
void entry_001a9bb8_0x1a9bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9bb8_0x1a9bb8");
#endif

    switch (ctx->pc) {
        case 0x1a9be8u: goto label_1a9be8;
        default: break;
    }

    ctx->pc = 0x1a9bb8u;

    // 0x1a9bb8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a9bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a9bbc: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x1a9bbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1a9bc0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a9bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a9bc4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a9bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a9bc8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a9bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1a9bcc: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1a9bccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1a9bd0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A9BD0u;
    {
        const bool branch_taken_0x1a9bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BD0u;
        // 0x1a9bd4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9bd0) {
            ctx->pc = 0x1A9C20u;
            return;
        }
    }
    ctx->pc = 0x1A9BD8u;
    // 0x1a9bd8: 0x8e2200e8  lw          $v0, 0xE8($s1)
    ctx->pc = 0x1a9bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
    // 0x1a9bdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a9be0: 0xc06a75a  jal         func_1A9D68
    ctx->pc = 0x1A9BE0u;
    SET_GPR_U32(ctx, 31, 0x1A9BE8u);
    ctx->pc = 0x1A9BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9BE0u;
    // 0x1a9be4: 0xae2200e8  sw          $v0, 0xE8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9D68u, 0x1A9BE0u, 0x1A9BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9BE8u;
label_1a9be8:
    // 0x1a9be8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a9be8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9bec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a9bf0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9BF0u;
    {
        const bool branch_taken_0x1a9bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BF0u;
        // 0x1a9bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9bf0) {
            ctx->pc = 0x1A9C00u;
            return;
        }
    }
    ctx->pc = 0x1A9BF8u;
    // 0x1a9bf8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x1A9BF8u;
    {
        const bool branch_taken_0x1a9bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9BF8u;
        // 0x1a9bfc: 0xae2300e0  sw          $v1, 0xE0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9bf8) {
            ctx->pc = 0x1A9D50u;
            return;
        }
    }
    ctx->pc = 0x1A9C00u;
}
