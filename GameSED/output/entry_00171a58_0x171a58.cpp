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

// Function: entry_00171a58
// Address: 0x171a58 - 0x171a60
void entry_00171a58_0x171a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171a58_0x171a58");
#endif

    ctx->pc = 0x171a58u;

    // 0x171a58: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x171A58u;
    {
        const bool branch_taken_0x171a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171A58u;
        // 0x171a5c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171a58) {
            ctx->pc = 0x171BE8u;
            return;
        }
    }
    ctx->pc = 0x171A60u;
}
