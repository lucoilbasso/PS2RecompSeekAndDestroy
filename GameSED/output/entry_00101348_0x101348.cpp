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

// Function: entry_00101348
// Address: 0x101348 - 0x10136c
void entry_00101348_0x101348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00101348_0x101348");
#endif

    ctx->pc = 0x101348u;

label_101348:
    // 0x101348: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x101348u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x10134c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10134cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x101350: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x101354: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x101354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x101358: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x101358u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x10135c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x10135cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x101360: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x101360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x101364: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x101364u;
    {
        const bool branch_taken_0x101364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101364u;
        // 0x101368: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101364) {
            ctx->pc = 0x101348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101348;
        }
    }
    ctx->pc = 0x10136Cu;
}
