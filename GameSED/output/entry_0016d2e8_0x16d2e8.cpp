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

// Function: entry_0016d2e8
// Address: 0x16d2e8 - 0x16d308
void entry_0016d2e8_0x16d2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016d2e8_0x16d2e8");
#endif

    ctx->pc = 0x16d2e8u;

    // 0x16d2e8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16d2ec: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x16d2f0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16D2F0u;
    {
        const bool branch_taken_0x16d2f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2F0u;
        // 0x16d2f4: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2f0) {
            ctx->pc = 0x16D308u;
            return;
        }
    }
    ctx->pc = 0x16D2F8u;
    // 0x16d2f8: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16d2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x16d2fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16D2FCu;
    {
        const bool branch_taken_0x16d2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D2FCu;
        // 0x16d300: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2fc) {
            ctx->pc = 0x16D30Cu;
            return;
        }
    }
    ctx->pc = 0x16D304u;
    // 0x16d304: 0x0  nop
    ctx->pc = 0x16d304u;
    // NOP
    ctx->pc = 0x16d308u;
}
