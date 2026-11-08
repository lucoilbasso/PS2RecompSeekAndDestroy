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

// Function: entry_001633c8
// Address: 0x1633c8 - 0x1633e8
void entry_001633c8_0x1633c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001633c8_0x1633c8");
#endif

    ctx->pc = 0x1633c8u;

    // 0x1633c8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1633c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1633cc: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x1633ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x1633d0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1633D0u;
    {
        const bool branch_taken_0x1633d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1633D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633D0u;
        // 0x1633d4: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633d0) {
            ctx->pc = 0x1633E8u;
            return;
        }
    }
    ctx->pc = 0x1633D8u;
    // 0x1633d8: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x1633d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1633dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1633DCu;
    {
        const bool branch_taken_0x1633dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1633E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1633DCu;
        // 0x1633e0: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1633dc) {
            ctx->pc = 0x1633ECu;
            return;
        }
    }
    ctx->pc = 0x1633E4u;
    // 0x1633e4: 0x0  nop
    ctx->pc = 0x1633e4u;
    // NOP
    ctx->pc = 0x1633e8u;
}
