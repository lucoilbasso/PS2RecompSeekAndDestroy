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

// Function: entry_001bb71c
// Address: 0x1bb71c - 0x1bb724
void entry_001bb71c_0x1bb71c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bb71c_0x1bb71c");
#endif

    ctx->pc = 0x1bb71cu;

    // 0x1bb71c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BB71Cu;
    {
        const bool branch_taken_0x1bb71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB71Cu;
        // 0x1bb720: 0xafd70000  sw          $s7, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb71c) {
            ctx->pc = 0x1BB74Cu;
            return;
        }
    }
    ctx->pc = 0x1BB724u;
}
