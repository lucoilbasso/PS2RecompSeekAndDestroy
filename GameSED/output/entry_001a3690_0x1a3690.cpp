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

// Function: entry_001a3690
// Address: 0x1a3690 - 0x1a3698
void entry_001a3690_0x1a3690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a3690_0x1a3690");
#endif

    ctx->pc = 0x1a3690u;

    // 0x1a3690: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A3690u;
    {
        const bool branch_taken_0x1a3690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3690u;
        // 0x1a3694: 0xa5020008  sh          $v0, 0x8($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3690) {
            ctx->pc = 0x1A3704u;
            return;
        }
    }
    ctx->pc = 0x1A3698u;
}
