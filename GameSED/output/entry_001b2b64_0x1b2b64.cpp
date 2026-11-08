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

// Function: entry_001b2b64
// Address: 0x1b2b64 - 0x1b2b78
void entry_001b2b64_0x1b2b64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2b64_0x1b2b64");
#endif

    ctx->pc = 0x1b2b64u;

    // 0x1b2b64: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2B64u;
    {
        const bool branch_taken_0x1b2b64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b64) {
            ctx->pc = 0x1B2B78u;
            return;
        }
    }
    ctx->pc = 0x1B2B6Cu;
    // 0x1b2b6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1b2b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b2b70: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2B70u;
    {
        const bool branch_taken_0x1b2b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2b70) {
            ctx->pc = 0x1B2B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2B70u;
            // 0x1b2b74: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2B88u;
            return;
        }
    }
    ctx->pc = 0x1B2B78u;
}
