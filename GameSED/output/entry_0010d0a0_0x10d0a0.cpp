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

// Function: entry_0010d0a0
// Address: 0x10d0a0 - 0x10d0b0
void entry_0010d0a0_0x10d0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d0a0_0x10d0a0");
#endif

    ctx->pc = 0x10d0a0u;

    // 0x10d0a0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D0A0u;
    {
        const bool branch_taken_0x10d0a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10d0a0) {
            ctx->pc = 0x10D0B0u;
            return;
        }
    }
    ctx->pc = 0x10D0A8u;
    // 0x10d0a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10D0A8u;
    {
        const bool branch_taken_0x10d0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D0A8u;
        // 0x10d0ac: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d0a8) {
            ctx->pc = 0x10D0D0u;
            return;
        }
    }
    ctx->pc = 0x10D0B0u;
}
