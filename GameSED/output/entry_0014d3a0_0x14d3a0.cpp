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

// Function: entry_0014d3a0
// Address: 0x14d3a0 - 0x14d3a8
void entry_0014d3a0_0x14d3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d3a0_0x14d3a0");
#endif

    ctx->pc = 0x14d3a0u;

    // 0x14d3a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D3A0u;
    {
        const bool branch_taken_0x14d3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3A0u;
        // 0x14d3a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d3a0) {
            ctx->pc = 0x14D3B4u;
            return;
        }
    }
    ctx->pc = 0x14D3A8u;
}
