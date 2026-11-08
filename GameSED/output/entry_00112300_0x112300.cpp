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

// Function: entry_00112300
// Address: 0x112300 - 0x112320
void entry_00112300_0x112300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112300_0x112300");
#endif

    ctx->pc = 0x112300u;

    // 0x112300: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x112300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x112304: 0x8c420c04  lw          $v0, 0xC04($v0)
    ctx->pc = 0x112304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
    // 0x112308: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112308u;
    {
        const bool branch_taken_0x112308 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112308u;
        // 0x11230c: 0x21180  sll         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112308) {
            ctx->pc = 0x112320u;
            return;
        }
    }
    ctx->pc = 0x112310u;
    // 0x112310: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x112310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x112314: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112314u;
    {
        const bool branch_taken_0x112314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112314u;
        // 0x112318: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112314) {
            ctx->pc = 0x112324u;
            return;
        }
    }
    ctx->pc = 0x11231Cu;
    // 0x11231c: 0x0  nop
    ctx->pc = 0x11231cu;
    // NOP
    ctx->pc = 0x112320u;
}
