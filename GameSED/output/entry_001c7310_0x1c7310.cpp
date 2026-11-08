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

// Function: entry_001c7310
// Address: 0x1c7310 - 0x1c7328
void entry_001c7310_0x1c7310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c7310_0x1c7310");
#endif

    ctx->pc = 0x1c7310u;

    // 0x1c7310: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7310u;
    {
        const bool branch_taken_0x1c7310 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7310u;
        // 0x1c7314: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7310) {
            ctx->pc = 0x1C7328u;
            return;
        }
    }
    ctx->pc = 0x1C7318u;
    // 0x1c7318: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C7318u;
    {
        const bool branch_taken_0x1c7318 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7318u;
        // 0x1c731c: 0xb01023  subu        $v0, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7318) {
            ctx->pc = 0x1C7330u;
            return;
        }
    }
    ctx->pc = 0x1C7320u;
    // 0x1c7320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C7320u;
    {
        const bool branch_taken_0x1c7320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7320u;
        // 0x1c7324: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7320) {
            ctx->pc = 0x1C732Cu;
            return;
        }
    }
    ctx->pc = 0x1C7328u;
}
