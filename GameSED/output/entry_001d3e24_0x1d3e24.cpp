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

// Function: entry_001d3e24
// Address: 0x1d3e24 - 0x1d3e30
void entry_001d3e24_0x1d3e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3e24_0x1d3e24");
#endif

    ctx->pc = 0x1d3e24u;

    // 0x1d3e24: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x1D3E24u;
    {
        const bool branch_taken_0x1d3e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3E24u;
        // 0x1d3e28: 0x2f027  nor         $fp, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 30, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3e24) {
            ctx->pc = 0x1D4194u;
            return;
        }
    }
    ctx->pc = 0x1D3E2Cu;
    // 0x1d3e2c: 0x0  nop
    ctx->pc = 0x1d3e2cu;
    // NOP
    ctx->pc = 0x1d3e30u;
}
