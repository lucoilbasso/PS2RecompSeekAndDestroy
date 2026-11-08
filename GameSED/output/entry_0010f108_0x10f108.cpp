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

// Function: entry_0010f108
// Address: 0x10f108 - 0x10f120
void entry_0010f108_0x10f108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f108_0x10f108");
#endif

    ctx->pc = 0x10f108u;

    // 0x10f108: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F108u;
    {
        const bool branch_taken_0x10f108 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10F10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F108u;
        // 0x10f10c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f108) {
            ctx->pc = 0x10F120u;
            return;
        }
    }
    ctx->pc = 0x10F110u;
    // 0x10f110: 0x8c8301b4  lw          $v1, 0x1B4($a0)
    ctx->pc = 0x10f110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x10f114: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F114u;
    {
        const bool branch_taken_0x10f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F114u;
        // 0x10f118: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f114) {
            ctx->pc = 0x10F124u;
            return;
        }
    }
    ctx->pc = 0x10F11Cu;
    // 0x10f11c: 0x0  nop
    ctx->pc = 0x10f11cu;
    // NOP
    ctx->pc = 0x10f120u;
}
