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

// Function: entry_00173d3c
// Address: 0x173d3c - 0x173d44
void entry_00173d3c_0x173d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00173d3c_0x173d3c");
#endif

    ctx->pc = 0x173d3cu;

    // 0x173d3c: 0x1540fff2  bnez        $t2, . + 4 + (-0xE << 2)
    ctx->pc = 0x173D3Cu;
    {
        const bool branch_taken_0x173d3c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x173D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D3Cu;
        // 0x173d40: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d3c) {
            ctx->pc = 0x173D08u;
            return;
        }
    }
    ctx->pc = 0x173D44u;
}
