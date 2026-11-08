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

// Function: entry_001bae64
// Address: 0x1bae64 - 0x1bae74
void entry_001bae64_0x1bae64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bae64_0x1bae64");
#endif

    ctx->pc = 0x1bae64u;

    // 0x1bae64: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1BAE64u;
    {
        const bool branch_taken_0x1bae64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE64u;
        // 0x1bae68: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae64) {
            ctx->pc = 0x1BADD8u;
            return;
        }
    }
    ctx->pc = 0x1BAE6Cu;
    // 0x1bae6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BAE6Cu;
    {
        const bool branch_taken_0x1bae6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE6Cu;
        // 0x1bae70: 0xae20c0c4  sw          $zero, -0x3F3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294951108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae6c) {
            ctx->pc = 0x1BAE7Cu;
            return;
        }
    }
    ctx->pc = 0x1BAE74u;
}
