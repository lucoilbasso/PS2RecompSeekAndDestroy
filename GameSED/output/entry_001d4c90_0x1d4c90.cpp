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

// Function: entry_001d4c90
// Address: 0x1d4c90 - 0x1d4ca0
void entry_001d4c90_0x1d4c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4c90_0x1d4c90");
#endif

    ctx->pc = 0x1d4c90u;

    // 0x1d4c90: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4C90u;
    {
        const bool branch_taken_0x1d4c90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c90) {
            ctx->pc = 0x1D4CBCu;
            return;
        }
    }
    ctx->pc = 0x1D4C98u;
    // 0x1d4c98: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d4c98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4c9c: 0x0  nop
    ctx->pc = 0x1d4c9cu;
    // NOP
    ctx->pc = 0x1d4ca0u;
}
