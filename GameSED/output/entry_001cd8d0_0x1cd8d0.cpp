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

// Function: entry_001cd8d0
// Address: 0x1cd8d0 - 0x1cd8e0
void entry_001cd8d0_0x1cd8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd8d0_0x1cd8d0");
#endif

    ctx->pc = 0x1cd8d0u;

    // 0x1cd8d0: 0x8fc40644  lw          $a0, 0x644($fp)
    ctx->pc = 0x1cd8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1604)));
    // 0x1cd8d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CD8D4u;
    {
        const bool branch_taken_0x1cd8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD8D4u;
        // 0x1cd8d8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8d4) {
            ctx->pc = 0x1CD8E8u;
            return;
        }
    }
    ctx->pc = 0x1CD8DCu;
    // 0x1cd8dc: 0x0  nop
    ctx->pc = 0x1cd8dcu;
    // NOP
    ctx->pc = 0x1cd8e0u;
}
