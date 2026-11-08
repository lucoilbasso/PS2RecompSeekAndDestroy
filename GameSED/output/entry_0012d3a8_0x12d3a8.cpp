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

// Function: entry_0012d3a8
// Address: 0x12d3a8 - 0x12d3b8
void entry_0012d3a8_0x12d3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d3a8_0x12d3a8");
#endif

    ctx->pc = 0x12d3a8u;

    // 0x12d3a8: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12D3A8u;
    {
        const bool branch_taken_0x12d3a8 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x12D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3A8u;
        // 0x12d3ac: 0x26030010  addiu       $v1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3a8) {
            ctx->pc = 0x12D3B8u;
            return;
        }
    }
    ctx->pc = 0x12D3B0u;
    // 0x12d3b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12D3B0u;
    {
        const bool branch_taken_0x12d3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3B0u;
        // 0x12d3b4: 0xae120014  sw          $s2, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3b0) {
            ctx->pc = 0x12D3C4u;
            return;
        }
    }
    ctx->pc = 0x12D3B8u;
}
