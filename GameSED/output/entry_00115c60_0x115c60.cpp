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

// Function: entry_00115c60
// Address: 0x115c60 - 0x115c78
void entry_00115c60_0x115c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115c60_0x115c60");
#endif

    ctx->pc = 0x115c60u;

    // 0x115c60: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115c64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x115c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x115c68: 0x8442c0a8  lh          $v0, -0x3F58($v0)
    ctx->pc = 0x115c68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951080)));
    // 0x115c6c: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x115C6Cu;
    {
        const bool branch_taken_0x115c6c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x115C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C6Cu;
        // 0x115c70: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c6c) {
            ctx->pc = 0x115D34u;
            return;
        }
    }
    ctx->pc = 0x115C74u;
    // 0x115c74: 0x0  nop
    ctx->pc = 0x115c74u;
    // NOP
    ctx->pc = 0x115c78u;
}
