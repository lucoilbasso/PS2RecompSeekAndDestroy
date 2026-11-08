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

// Function: caseD_3
// Address: 0x12fd80 - 0x12fd98
void caseD_3_0x12fd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x12fd80");
#endif

    switch (ctx->pc) {
        case 0x12fd90u: goto label_12fd90;
        default: break;
    }

    ctx->pc = 0x12fd80u;

    // 0x12fd80: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fd84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fd84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fd88: 0xc047dca  jal         func_11F728
    ctx->pc = 0x12FD88u;
    SET_GPR_U32(ctx, 31, 0x12FD90u);
    ctx->pc = 0x12FD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FD88u;
    // 0x12fd8c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F728u, 0x12FD88u, 0x12FD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD90u;
label_12fd90:
    // 0x12fd90: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x12FD90u;
    {
        const bool branch_taken_0x12fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD90u;
        // 0x12fd94: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fd90) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FD98u;
}
