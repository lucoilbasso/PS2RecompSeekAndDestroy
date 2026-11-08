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

// Function: caseD_4
// Address: 0x111e20 - 0x111e38
void caseD_4_0x111e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x111e20");
#endif

    ctx->pc = 0x111e20u;

    // 0x111e20: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x111e20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x111e24: 0x24022118  addiu       $v0, $zero, 0x2118
    ctx->pc = 0x111e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8472));
    // 0x111e28: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x111E28u;
    {
        const bool branch_taken_0x111e28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x111E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E28u;
        // 0x111e2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e28) {
            ctx->pc = 0x111E38u;
            return;
        }
    }
    ctx->pc = 0x111E30u;
    // 0x111e30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x111E30u;
    {
        const bool branch_taken_0x111e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E30u;
        // 0x111e34: 0x8e700260  lw          $s0, 0x260($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e30) {
            ctx->pc = 0x111E44u;
            return;
        }
    }
    ctx->pc = 0x111E38u;
}
