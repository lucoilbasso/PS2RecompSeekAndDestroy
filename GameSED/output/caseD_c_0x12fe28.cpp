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

// Function: caseD_c
// Address: 0x12fe28 - 0x12fe40
void caseD_c_0x12fe28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x12fe28");
#endif

    switch (ctx->pc) {
        case 0x12fe38u: goto label_12fe38;
        default: break;
    }

    ctx->pc = 0x12fe28u;

    // 0x12fe28: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fe2c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fe2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe30: 0xc04820e  jal         func_120838
    ctx->pc = 0x12FE30u;
    SET_GPR_U32(ctx, 31, 0x12FE38u);
    ctx->pc = 0x12FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE30u;
    // 0x12fe34: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120838u, 0x12FE30u, 0x12FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE38u;
label_12fe38:
    // 0x12fe38: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x12FE38u;
    {
        const bool branch_taken_0x12fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE38u;
        // 0x12fe3c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe38) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FE40u;
}
