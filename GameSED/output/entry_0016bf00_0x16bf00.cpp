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

// Function: entry_0016bf00
// Address: 0x16bf00 - 0x16bf20
void entry_0016bf00_0x16bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016bf00_0x16bf00");
#endif

    ctx->pc = 0x16bf00u;

    // 0x16bf00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16bf04: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x16bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x16bf08: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BF08u;
    {
        const bool branch_taken_0x16bf08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF08u;
        // 0x16bf0c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf08) {
            ctx->pc = 0x16BF20u;
            return;
        }
    }
    ctx->pc = 0x16BF10u;
    // 0x16bf10: 0x8c6301b4  lw          $v1, 0x1B4($v1)
    ctx->pc = 0x16bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x16bf14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16BF14u;
    {
        const bool branch_taken_0x16bf14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF14u;
        // 0x16bf18: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bf14) {
            ctx->pc = 0x16BF24u;
            return;
        }
    }
    ctx->pc = 0x16BF1Cu;
    // 0x16bf1c: 0x0  nop
    ctx->pc = 0x16bf1cu;
    // NOP
    ctx->pc = 0x16bf20u;
}
