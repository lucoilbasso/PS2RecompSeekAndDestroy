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

// Function: entry_001228d0
// Address: 0x1228d0 - 0x1228e0
void entry_001228d0_0x1228d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001228d0_0x1228d0");
#endif

    ctx->pc = 0x1228d0u;

    // 0x1228d0: 0xace60160  sw          $a2, 0x160($a3)
    ctx->pc = 0x1228d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 352), GPR_U32(ctx, 6));
    // 0x1228d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1228D4u;
    {
        const bool branch_taken_0x1228d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1228D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1228D4u;
        // 0x1228d8: 0xacc00008  sw          $zero, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1228d4) {
            ctx->pc = 0x122920u;
            return;
        }
    }
    ctx->pc = 0x1228DCu;
    // 0x1228dc: 0x0  nop
    ctx->pc = 0x1228dcu;
    // NOP
    ctx->pc = 0x1228e0u;
}
