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

// Function: entry_0018c8f8
// Address: 0x18c8f8 - 0x18c900
void entry_0018c8f8_0x18c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c8f8_0x18c8f8");
#endif

    ctx->pc = 0x18c8f8u;

    // 0x18c8f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18C8F8u;
    {
        const bool branch_taken_0x18c8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8F8u;
        // 0x18c8fc: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8f8) {
            ctx->pc = 0x18C918u;
            return;
        }
    }
    ctx->pc = 0x18C900u;
}
