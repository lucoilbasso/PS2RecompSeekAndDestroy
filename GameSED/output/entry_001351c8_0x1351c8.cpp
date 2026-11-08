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

// Function: entry_001351c8
// Address: 0x1351c8 - 0x1351d0
void entry_001351c8_0x1351c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001351c8_0x1351c8");
#endif

    ctx->pc = 0x1351c8u;

    // 0x1351c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1351C8u;
    {
        const bool branch_taken_0x1351c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1351CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1351C8u;
        // 0x1351cc: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351c8) {
            ctx->pc = 0x1351FCu;
            return;
        }
    }
    ctx->pc = 0x1351D0u;
}
