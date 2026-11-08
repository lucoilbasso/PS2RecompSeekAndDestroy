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

// Function: entry_001814a4
// Address: 0x1814a4 - 0x1814b0
void entry_001814a4_0x1814a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001814a4_0x1814a4");
#endif

    ctx->pc = 0x1814a4u;

    // 0x1814a4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1814A4u;
    {
        const bool branch_taken_0x1814a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1814A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1814A4u;
        // 0x1814a8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1814a4) {
            ctx->pc = 0x181500u;
            return;
        }
    }
    ctx->pc = 0x1814ACu;
    // 0x1814ac: 0x0  nop
    ctx->pc = 0x1814acu;
    // NOP
    ctx->pc = 0x1814b0u;
}
