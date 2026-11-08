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

// Function: caseD_15
// Address: 0x18c840 - 0x18c860
void caseD_15_0x18c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x18c840");
#endif

    switch (ctx->pc) {
        case 0x18c850u: goto label_18c850;
        default: break;
    }

    ctx->pc = 0x18c840u;

    // 0x18c840: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c844: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18c844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18c848: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C848u;
    SET_GPR_U32(ctx, 31, 0x18C850u);
    ctx->pc = 0x18C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C848u;
    // 0x18c84c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C848u, 0x18C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C850u;
label_18c850:
    // 0x18c850: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x18c850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c854: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x18c854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18c858: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x18C858u;
    {
        const bool branch_taken_0x18c858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C858u;
        // 0x18c85c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c858) {
            ctx->pc = 0x18C8E4u;
            return;
        }
    }
    ctx->pc = 0x18C860u;
}
