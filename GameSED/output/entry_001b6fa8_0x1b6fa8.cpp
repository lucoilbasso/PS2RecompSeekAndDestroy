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

// Function: entry_001b6fa8
// Address: 0x1b6fa8 - 0x1b6fcc
void entry_001b6fa8_0x1b6fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6fa8_0x1b6fa8");
#endif

    switch (ctx->pc) {
        case 0x1b6fb0u: goto label_1b6fb0;
        case 0x1b6fc0u: goto label_1b6fc0;
        default: break;
    }

    ctx->pc = 0x1b6fa8u;

label_1b6fa8:
    // 0x1b6fa8: 0xc06dbb0  jal         func_1B6EC0
    ctx->pc = 0x1B6FA8u;
    SET_GPR_U32(ctx, 31, 0x1B6FB0u);
    ctx->pc = 0x1B6FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FA8u;
    // 0x1b6fac: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6EC0u, 0x1B6FA8u, 0x1B6FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FB0u;
label_1b6fb0:
    // 0x1b6fb0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b6fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b6fb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b6fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6fb8: 0xc06db9a  jal         func_1B6E68
    ctx->pc = 0x1B6FB8u;
    SET_GPR_U32(ctx, 31, 0x1B6FC0u);
    ctx->pc = 0x1B6FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6FB8u;
    // 0x1b6fbc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E68u, 0x1B6FB8u, 0x1B6FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FC0u;
label_1b6fc0:
    // 0x1b6fc0: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1b6fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b6fc4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1B6FC4u;
    {
        const bool branch_taken_0x1b6fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6fc4) {
            ctx->pc = 0x1B6FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6FC4u;
            // 0x1b6fc8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6fa8;
        }
    }
    ctx->pc = 0x1B6FCCu;
}
