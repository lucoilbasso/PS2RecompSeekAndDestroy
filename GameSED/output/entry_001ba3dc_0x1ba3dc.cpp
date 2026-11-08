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

// Function: entry_001ba3dc
// Address: 0x1ba3dc - 0x1ba3ec
void entry_001ba3dc_0x1ba3dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba3dc_0x1ba3dc");
#endif

    ctx->pc = 0x1ba3dcu;

    // 0x1ba3dc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1BA3DCu;
    {
        const bool branch_taken_0x1ba3dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3DCu;
        // 0x1ba3e0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3dc) {
            ctx->pc = 0x1BA350u;
            return;
        }
    }
    ctx->pc = 0x1BA3E4u;
    // 0x1ba3e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA3E4u;
    {
        const bool branch_taken_0x1ba3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA3E4u;
        // 0x1ba3e8: 0xae20c0c0  sw          $zero, -0x3F40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294951104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3e4) {
            ctx->pc = 0x1BA3F8u;
            return;
        }
    }
    ctx->pc = 0x1BA3ECu;
}
