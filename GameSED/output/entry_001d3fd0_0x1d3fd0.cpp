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

// Function: entry_001d3fd0
// Address: 0x1d3fd0 - 0x1d3ff0
void entry_001d3fd0_0x1d3fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d3fd0_0x1d3fd0");
#endif

    ctx->pc = 0x1d3fd0u;

    // 0x1d3fd0: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3FD0u;
    {
        const bool branch_taken_0x1d3fd0 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1d3fd0) {
            ctx->pc = 0x1D3FF0u;
            return;
        }
    }
    ctx->pc = 0x1D3FD8u;
    // 0x1d3fd8: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D3FD8u;
    {
        const bool branch_taken_0x1d3fd8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3FD8u;
        // 0x1d3fdc: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3fd8) {
            ctx->pc = 0x1D4050u;
            return;
        }
    }
    ctx->pc = 0x1D3FE0u;
    // 0x1d3fe0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1D3FE0u;
    {
        const bool branch_taken_0x1d3fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3fe0) {
            ctx->pc = 0x1D4050u;
            return;
        }
    }
    ctx->pc = 0x1D3FE8u;
    // 0x1d3fe8: 0x16c00019  bnez        $s6, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D3FE8u;
    {
        const bool branch_taken_0x1d3fe8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d3fe8) {
            ctx->pc = 0x1D4050u;
            return;
        }
    }
    ctx->pc = 0x1D3FF0u;
}
