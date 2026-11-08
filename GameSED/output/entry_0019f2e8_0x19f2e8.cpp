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

// Function: entry_0019f2e8
// Address: 0x19f2e8 - 0x19f2f0
void entry_0019f2e8_0x19f2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f2e8_0x19f2e8");
#endif

    ctx->pc = 0x19f2e8u;

    // 0x19f2e8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x19F2E8u;
    {
        const bool branch_taken_0x19f2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F2E8u;
        // 0x19f2ec: 0xad420008  sw          $v0, 0x8($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f2e8) {
            ctx->pc = 0x19F3C8u;
            return;
        }
    }
    ctx->pc = 0x19F2F0u;
}
