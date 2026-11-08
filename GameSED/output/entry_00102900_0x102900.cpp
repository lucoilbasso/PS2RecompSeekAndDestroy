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

// Function: entry_00102900
// Address: 0x102900 - 0x102930
void entry_00102900_0x102900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102900_0x102900");
#endif

    ctx->pc = 0x102900u;

label_102900:
    // 0x102900: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x102900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x102904: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x102904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x102908: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x102908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10290c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x10290cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x102910: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x102910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x102914: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x102914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x102918: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x102918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x10291c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x10291cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x102920: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x102920u;
    {
        const bool branch_taken_0x102920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102920u;
        // 0x102924: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102920) {
            ctx->pc = 0x102900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102900;
        }
    }
    ctx->pc = 0x102928u;
    // 0x102928: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x102928u;
    {
        const bool branch_taken_0x102928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102928u;
        // 0x10292c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102928) {
            ctx->pc = 0x1029C8u;
            return;
        }
    }
    ctx->pc = 0x102930u;
}
