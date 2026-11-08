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

// Function: entry_001e06e0
// Address: 0x1e06e0 - 0x1e06f8
void entry_001e06e0_0x1e06e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e06e0_0x1e06e0");
#endif

    ctx->pc = 0x1e06e0u;

    // 0x1e06e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1e06e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1e06e4: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E06E4u;
    {
        const bool branch_taken_0x1e06e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06E4u;
        // 0x1e06e8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06e4) {
            ctx->pc = 0x1E06F8u;
            return;
        }
    }
    ctx->pc = 0x1E06ECu;
    // 0x1e06ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E06ECu;
    {
        const bool branch_taken_0x1e06ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E06F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E06ECu;
        // 0x1e06f0: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e06ec) {
            ctx->pc = 0x1E06FCu;
            return;
        }
    }
    ctx->pc = 0x1E06F4u;
    // 0x1e06f4: 0x0  nop
    ctx->pc = 0x1e06f4u;
    // NOP
    ctx->pc = 0x1e06f8u;
}
