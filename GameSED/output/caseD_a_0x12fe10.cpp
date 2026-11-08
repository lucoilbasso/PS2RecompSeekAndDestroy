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

// Function: caseD_a
// Address: 0x12fe10 - 0x12fe28
void caseD_a_0x12fe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x12fe10");
#endif

    switch (ctx->pc) {
        case 0x12fe20u: goto label_12fe20;
        default: break;
    }

    ctx->pc = 0x12fe10u;

    // 0x12fe10: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x12fe10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x12fe14: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x12fe14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fe18: 0xc04853e  jal         func_1214F8
    ctx->pc = 0x12FE18u;
    SET_GPR_U32(ctx, 31, 0x12FE20u);
    ctx->pc = 0x12FE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE18u;
    // 0x12fe1c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1214F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1214F8u, 0x12FE18u, 0x12FE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FE20u;
label_12fe20:
    // 0x12fe20: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x12FE20u;
    {
        const bool branch_taken_0x12fe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE20u;
        // 0x12fe24: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe20) {
            ctx->pc = 0x12FEB4u;
            return;
        }
    }
    ctx->pc = 0x12FE28u;
}
