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

// Function: entry_001d5358
// Address: 0x1d5358 - 0x1d5378
void entry_001d5358_0x1d5358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5358_0x1d5358");
#endif

    ctx->pc = 0x1d5358u;

    // 0x1d5358: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1d5358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1d535c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1d535cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5360: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d5360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5364: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5364u;
    {
        const bool branch_taken_0x1d5364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5364u;
        // 0x1d5368: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5364) {
            ctx->pc = 0x1D5378u;
            return;
        }
    }
    ctx->pc = 0x1D536Cu;
    // 0x1d536c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d536cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5370: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D5370u;
    {
        const bool branch_taken_0x1d5370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5370u;
        // 0x1d5374: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5370) {
            ctx->pc = 0x1D53A4u;
            return;
        }
    }
    ctx->pc = 0x1D5378u;
}
