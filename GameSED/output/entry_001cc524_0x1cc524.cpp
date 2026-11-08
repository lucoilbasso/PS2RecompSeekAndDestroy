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

// Function: entry_001cc524
// Address: 0x1cc524 - 0x1cc530
void entry_001cc524_0x1cc524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc524_0x1cc524");
#endif

    ctx->pc = 0x1cc524u;

    // 0x1cc524: 0x100000ea  b           . + 4 + (0xEA << 2)
    ctx->pc = 0x1CC524u;
    {
        const bool branch_taken_0x1cc524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC524u;
        // 0x1cc528: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc524) {
            ctx->pc = 0x1CC8D0u;
            return;
        }
    }
    ctx->pc = 0x1CC52Cu;
    // 0x1cc52c: 0x0  nop
    ctx->pc = 0x1cc52cu;
    // NOP
    ctx->pc = 0x1cc530u;
}
