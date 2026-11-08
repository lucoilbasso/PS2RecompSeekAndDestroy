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

// Function: caseD_16
// Address: 0x18c860 - 0x18c880
void caseD_16_0x18c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x18c860");
#endif

    switch (ctx->pc) {
        case 0x18c870u: goto label_18c870;
        default: break;
    }

    ctx->pc = 0x18c860u;

    // 0x18c860: 0x8f828d10  lw          $v0, -0x72F0($gp)
    ctx->pc = 0x18c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937872)));
    // 0x18c864: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18c864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18c868: 0xc05f238  jal         func_17C8E0
    ctx->pc = 0x18C868u;
    SET_GPR_U32(ctx, 31, 0x18C870u);
    ctx->pc = 0x18C86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C868u;
    // 0x18c86c: 0x8c440044  lw          $a0, 0x44($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C8E0u, 0x18C868u, 0x18C870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C870u;
label_18c870:
    // 0x18c870: 0x8e040238  lw          $a0, 0x238($s0)
    ctx->pc = 0x18c870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x18c874: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x18c874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x18c878: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x18C878u;
    {
        const bool branch_taken_0x18c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C878u;
        // 0x18c87c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c878) {
            ctx->pc = 0x18C8E4u;
            return;
        }
    }
    ctx->pc = 0x18C880u;
}
