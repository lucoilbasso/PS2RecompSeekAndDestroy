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

// Function: entry_001a5e58
// Address: 0x1a5e58 - 0x1a5e60
void entry_001a5e58_0x1a5e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5e58_0x1a5e58");
#endif

    ctx->pc = 0x1a5e58u;

    // 0x1a5e58: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5E58u;
    {
        const bool branch_taken_0x1a5e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5E58u;
        // 0x1a5e5c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e58) {
            ctx->pc = 0x1A5E70u;
            return;
        }
    }
    ctx->pc = 0x1A5E60u;
}
