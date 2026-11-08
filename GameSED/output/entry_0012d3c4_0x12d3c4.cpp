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

// Function: entry_0012d3c4
// Address: 0x12d3c4 - 0x12d3d8
void entry_0012d3c4_0x12d3c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d3c4_0x12d3c4");
#endif

    ctx->pc = 0x12d3c4u;

    // 0x12d3c4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x12d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x12d3c8: 0x1052000c  beq         $v0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x12D3C8u;
    {
        const bool branch_taken_0x12d3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x12d3c8) {
            ctx->pc = 0x12D3FCu;
            return;
        }
    }
    ctx->pc = 0x12D3D0u;
    // 0x12d3d0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12D3D0u;
    {
        const bool branch_taken_0x12d3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D3D0u;
        // 0x12d3d4: 0x8e1000c4  lw          $s0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d3d0) {
            ctx->pc = 0x12D3FCu;
            return;
        }
    }
    ctx->pc = 0x12D3D8u;
}
