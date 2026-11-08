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

// Function: entry_001ddcc8
// Address: 0x1ddcc8 - 0x1ddcd4
void entry_001ddcc8_0x1ddcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ddcc8_0x1ddcc8");
#endif

    ctx->pc = 0x1ddcc8u;

    // 0x1ddcc8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1DDCC8u;
    {
        const bool branch_taken_0x1ddcc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCC8u;
        // 0x1ddccc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddcc8) {
            ctx->pc = 0x1DDCF8u;
            return;
        }
    }
    ctx->pc = 0x1DDCD0u;
    // 0x1ddcd0: 0x8c630134  lw          $v1, 0x134($v1)
    ctx->pc = 0x1ddcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 308)));
    ctx->pc = 0x1ddcd4u;
}
