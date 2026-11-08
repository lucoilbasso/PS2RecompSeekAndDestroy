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

// Function: entry_001b203c
// Address: 0x1b203c - 0x1b2048
void entry_001b203c_0x1b203c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b203c_0x1b203c");
#endif

    ctx->pc = 0x1b203cu;

    // 0x1b203c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x1b203cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b2040: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1B2040u;
    {
        const bool branch_taken_0x1b2040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2040) {
            ctx->pc = 0x1B2044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2040u;
            // 0x1b2044: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2020u;
            return;
        }
    }
    ctx->pc = 0x1B2048u;
}
