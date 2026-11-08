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

// Function: entry_00102ca0
// Address: 0x102ca0 - 0x102cc8
void entry_00102ca0_0x102ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00102ca0_0x102ca0");
#endif

    ctx->pc = 0x102ca0u;

label_102ca0:
    // 0x102ca0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x102ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x102ca4: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x102ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x102ca8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102CA8u;
    {
        const bool branch_taken_0x102ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CA8u;
        // 0x102cac: 0x41900  sll         $v1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ca8) {
            ctx->pc = 0x102CC8u;
            return;
        }
    }
    ctx->pc = 0x102CB0u;
    // 0x102cb0: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x102cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x102cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102cb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x102cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102cbc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x102CBCu;
    {
        const bool branch_taken_0x102cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x102cbc) {
            ctx->pc = 0x102CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102CBCu;
            // 0x102cc0: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102ca0;
        }
    }
    ctx->pc = 0x102CC4u;
    // 0x102cc4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x102cc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x102cc8u;
}
