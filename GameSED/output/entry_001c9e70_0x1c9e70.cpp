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

// Function: entry_001c9e70
// Address: 0x1c9e70 - 0x1c9e88
void entry_001c9e70_0x1c9e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9e70_0x1c9e70");
#endif

    ctx->pc = 0x1c9e70u;

    // 0x1c9e70: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x1c9e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c9e74: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C9E74u;
    {
        const bool branch_taken_0x1c9e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c9e74) {
            ctx->pc = 0x1C9E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C9E74u;
            // 0x1c9e78: 0xe0402d  daddu       $t0, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9E88u;
            return;
        }
    }
    ctx->pc = 0x1C9E7Cu;
    // 0x1c9e7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C9E7Cu;
    {
        const bool branch_taken_0x1c9e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9E7Cu;
        // 0x1c9e80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9e7c) {
            ctx->pc = 0x1C9E8Cu;
            return;
        }
    }
    ctx->pc = 0x1C9E84u;
    // 0x1c9e84: 0x0  nop
    ctx->pc = 0x1c9e84u;
    // NOP
    ctx->pc = 0x1c9e88u;
}
