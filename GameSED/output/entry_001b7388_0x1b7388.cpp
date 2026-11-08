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

// Function: entry_001b7388
// Address: 0x1b7388 - 0x1b73b0
void entry_001b7388_0x1b7388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7388_0x1b7388");
#endif

    switch (ctx->pc) {
        case 0x1b7390u: goto label_1b7390;
        case 0x1b73a0u: goto label_1b73a0;
        default: break;
    }

    ctx->pc = 0x1b7388u;

label_1b7388:
    // 0x1b7388: 0xc06dcb8  jal         func_1B72E0
    ctx->pc = 0x1B7388u;
    SET_GPR_U32(ctx, 31, 0x1B7390u);
    ctx->pc = 0x1B738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7388u;
    // 0x1b738c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72E0u, 0x1B7388u, 0x1B7390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7390u;
label_1b7390:
    // 0x1b7390: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b7390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b7394: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b7394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7398: 0xc06dca2  jal         func_1B7288
    ctx->pc = 0x1B7398u;
    SET_GPR_U32(ctx, 31, 0x1B73A0u);
    ctx->pc = 0x1B739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7398u;
    // 0x1b739c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7288u, 0x1B7398u, 0x1B73A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B73A0u;
label_1b73a0:
    // 0x1b73a0: 0x2e420008  sltiu       $v0, $s2, 0x8
    ctx->pc = 0x1b73a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1b73a4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B73A4u;
    {
        const bool branch_taken_0x1b73a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b73a4) {
            ctx->pc = 0x1B73A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B73A4u;
            // 0x1b73a8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7388;
        }
    }
    ctx->pc = 0x1B73ACu;
    // 0x1b73ac: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1b73acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    ctx->pc = 0x1b73b0u;
}
