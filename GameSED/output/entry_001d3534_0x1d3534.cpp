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

// Function: entry_001d3534
// Address: 0x1d3534 - 0x1d353c
void entry_001d3534_0x1d3534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3534_0x1d3534");
#endif

    ctx->pc = 0x1d3534u;

    // 0x1d3534: 0x1600fff6  bnez        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D3534u;
    {
        const bool branch_taken_0x1d3534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3534u;
        // 0x1d3538: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3534) {
            ctx->pc = 0x1D3510u;
            return;
        }
    }
    ctx->pc = 0x1D353Cu;
}
