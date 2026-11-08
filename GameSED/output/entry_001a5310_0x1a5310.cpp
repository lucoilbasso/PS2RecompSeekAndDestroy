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

// Function: entry_001a5310
// Address: 0x1a5310 - 0x1a5334
void entry_001a5310_0x1a5310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5310_0x1a5310");
#endif

    ctx->pc = 0x1a5310u;

    // 0x1a5310: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A5310u;
    {
        const bool branch_taken_0x1a5310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5310u;
        // 0x1a5314: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5310) {
            ctx->pc = 0x1A533Cu;
            return;
        }
    }
    ctx->pc = 0x1A5318u;
    // 0x1a5318: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x1a5318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1a531c: 0x24424f38  addiu       $v0, $v0, 0x4F38
    ctx->pc = 0x1a531cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20280));
    // 0x1a5320: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A5320u;
    {
        const bool branch_taken_0x1a5320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5320u;
        // 0x1a5324: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5320) {
            ctx->pc = 0x1A5334u;
            return;
        }
    }
    ctx->pc = 0x1A5328u;
    // 0x1a5328: 0x24425080  addiu       $v0, $v0, 0x5080
    ctx->pc = 0x1a5328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20608));
    // 0x1a532c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A532Cu;
    {
        const bool branch_taken_0x1a532c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a532c) {
            ctx->pc = 0x1A533Cu;
            return;
        }
    }
    ctx->pc = 0x1A5334u;
}
