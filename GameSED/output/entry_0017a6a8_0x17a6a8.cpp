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

// Function: entry_0017a6a8
// Address: 0x17a6a8 - 0x17a6b0
void entry_0017a6a8_0x17a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a6a8_0x17a6a8");
#endif

    ctx->pc = 0x17a6a8u;

    // 0x17a6a8: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x17A6A8u;
    {
        const bool branch_taken_0x17a6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A6A8u;
        // 0x17a6ac: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a6a8) {
            ctx->pc = 0x17A640u;
            return;
        }
    }
    ctx->pc = 0x17A6B0u;
}
