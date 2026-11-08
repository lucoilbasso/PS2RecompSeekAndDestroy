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

// Function: entry_0019a80c
// Address: 0x19a80c - 0x19a818
void entry_0019a80c_0x19a80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a80c_0x19a80c");
#endif

    ctx->pc = 0x19a80cu;

    // 0x19a80c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19A80Cu;
    {
        const bool branch_taken_0x19a80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A80Cu;
        // 0x19a810: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a80c) {
            ctx->pc = 0x19A82Cu;
            return;
        }
    }
    ctx->pc = 0x19A814u;
    // 0x19a814: 0x0  nop
    ctx->pc = 0x19a814u;
    // NOP
    ctx->pc = 0x19a818u;
}
