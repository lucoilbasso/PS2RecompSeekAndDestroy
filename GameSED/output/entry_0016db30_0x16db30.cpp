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

// Function: entry_0016db30
// Address: 0x16db30 - 0x16db50
void entry_0016db30_0x16db30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016db30_0x16db30");
#endif

    ctx->pc = 0x16db30u;

    // 0x16db30: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x16db30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x16db34: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16db34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x16db38: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DB38u;
    {
        const bool branch_taken_0x16db38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB38u;
        // 0x16db3c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db38) {
            ctx->pc = 0x16DB50u;
            return;
        }
    }
    ctx->pc = 0x16DB40u;
    // 0x16db40: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x16db40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
    // 0x16db44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16DB44u;
    {
        const bool branch_taken_0x16db44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DB44u;
        // 0x16db48: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16db44) {
            ctx->pc = 0x16DB54u;
            return;
        }
    }
    ctx->pc = 0x16DB4Cu;
    // 0x16db4c: 0x0  nop
    ctx->pc = 0x16db4cu;
    // NOP
    ctx->pc = 0x16db50u;
}
