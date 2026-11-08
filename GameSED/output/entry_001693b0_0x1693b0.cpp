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

// Function: entry_001693b0
// Address: 0x1693b0 - 0x1693b8
void entry_001693b0_0x1693b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001693b0_0x1693b0");
#endif

    ctx->pc = 0x1693b0u;

    // 0x1693b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1693B0u;
    {
        const bool branch_taken_0x1693b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1693B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1693B0u;
        // 0x1693b4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1693b0) {
            ctx->pc = 0x1693C0u;
            return;
        }
    }
    ctx->pc = 0x1693B8u;
}
