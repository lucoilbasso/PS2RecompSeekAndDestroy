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

// Function: entry_0016d1e0
// Address: 0x16d1e0 - 0x16d200
void entry_0016d1e0_0x16d1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d1e0_0x16d1e0");
#endif

    ctx->pc = 0x16d1e0u;

    // 0x16d1e0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16d1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16d1e4: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x16d1e8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D1E8u;
    {
        const bool branch_taken_0x16d1e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1E8u;
        // 0x16d1ec: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1e8) {
            ctx->pc = 0x16D200u;
            return;
        }
    }
    ctx->pc = 0x16D1F0u;
    // 0x16d1f0: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x16d1f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16D1F4u;
    {
        const bool branch_taken_0x16d1f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D1F4u;
        // 0x16d1f8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1f4) {
            ctx->pc = 0x16D204u;
            return;
        }
    }
    ctx->pc = 0x16D1FCu;
    // 0x16d1fc: 0x0  nop
    ctx->pc = 0x16d1fcu;
    // NOP
    ctx->pc = 0x16d200u;
}
