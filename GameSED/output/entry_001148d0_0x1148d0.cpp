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

// Function: entry_001148d0
// Address: 0x1148d0 - 0x1148e0
void entry_001148d0_0x1148d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001148d0_0x1148d0");
#endif

    ctx->pc = 0x1148d0u;

    // 0x1148d0: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x1148d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
    // 0x1148d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1148D4u;
    {
        const bool branch_taken_0x1148d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1148D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1148D4u;
        // 0x1148d8: 0xac4000b0  sw          $zero, 0xB0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1148d4) {
            ctx->pc = 0x1148E8u;
            return;
        }
    }
    ctx->pc = 0x1148DCu;
    // 0x1148dc: 0x0  nop
    ctx->pc = 0x1148dcu;
    // NOP
    ctx->pc = 0x1148e0u;
}
