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

// Function: entry_001d5c58
// Address: 0x1d5c58 - 0x1d5c64
void entry_001d5c58_0x1d5c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5c58_0x1d5c58");
#endif

    ctx->pc = 0x1d5c58u;

    // 0x1d5c58: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x1d5c58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d5c5c: 0x14a40004  bne         $a1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5C5Cu;
    {
        const bool branch_taken_0x1d5c5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D5C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C5Cu;
        // 0x1d5c60: 0xc3100a  movz        $v0, $a2, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c5c) {
            ctx->pc = 0x1D5C70u;
            return;
        }
    }
    ctx->pc = 0x1D5C64u;
}
