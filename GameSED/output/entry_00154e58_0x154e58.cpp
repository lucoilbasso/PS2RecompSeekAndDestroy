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

// Function: entry_00154e58
// Address: 0x154e58 - 0x154e78
void entry_00154e58_0x154e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154e58_0x154e58");
#endif

    ctx->pc = 0x154e58u;

    // 0x154e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x154e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x154e5c: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x154e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x154e60: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x154E60u;
    {
        const bool branch_taken_0x154e60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x154E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E60u;
        // 0x154e64: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e60) {
            ctx->pc = 0x154E78u;
            return;
        }
    }
    ctx->pc = 0x154E68u;
    // 0x154e68: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x154e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x154e6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x154E6Cu;
    {
        const bool branch_taken_0x154e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E6Cu;
        // 0x154e70: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e6c) {
            ctx->pc = 0x154E7Cu;
            return;
        }
    }
    ctx->pc = 0x154E74u;
    // 0x154e74: 0x0  nop
    ctx->pc = 0x154e74u;
    // NOP
    ctx->pc = 0x154e78u;
}
