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

// Function: entry_001928c8
// Address: 0x1928c8 - 0x1928e0
void entry_001928c8_0x1928c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001928c8_0x1928c8");
#endif

    ctx->pc = 0x1928c8u;

    // 0x1928c8: 0x0  nop
    ctx->pc = 0x1928c8u;
    // NOP
    // 0x1928cc: 0x0  nop
    ctx->pc = 0x1928ccu;
    // NOP
    // 0x1928d0: 0x0  nop
    ctx->pc = 0x1928d0u;
    // NOP
    // 0x1928d4: 0x1000fff6  b           . + 4 + (-0xA << 2)
    ctx->pc = 0x1928D4u;
    {
        const bool branch_taken_0x1928d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1928D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1928D4u;
        // 0x1928d8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1928d4) {
            ctx->pc = 0x1928B0u;
            return;
        }
    }
    ctx->pc = 0x1928DCu;
    // 0x1928dc: 0x0  nop
    ctx->pc = 0x1928dcu;
    // NOP
    ctx->pc = 0x1928e0u;
}
