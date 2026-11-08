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

// Function: entry_001d3500
// Address: 0x1d3500 - 0x1d3510
void entry_001d3500_0x1d3500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3500_0x1d3500");
#endif

    ctx->pc = 0x1d3500u;

    // 0x1d3500: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D3500u;
    {
        const bool branch_taken_0x1d3500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3500u;
        // 0x1d3504: 0x3c020026  lui         $v0, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3500) {
            ctx->pc = 0x1D353Cu;
            return;
        }
    }
    ctx->pc = 0x1D3508u;
    // 0x1d3508: 0x2452c748  addiu       $s2, $v0, -0x38B8
    ctx->pc = 0x1d3508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952776));
    // 0x1d350c: 0x0  nop
    ctx->pc = 0x1d350cu;
    // NOP
    ctx->pc = 0x1d3510u;
}
