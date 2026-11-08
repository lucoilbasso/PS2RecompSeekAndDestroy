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

// Function: entry_0019fb74
// Address: 0x19fb74 - 0x19fb7c
void entry_0019fb74_0x19fb74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fb74_0x19fb74");
#endif

    ctx->pc = 0x19fb74u;

    // 0x19fb74: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x19FB74u;
    {
        const bool branch_taken_0x19fb74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x19FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FB74u;
        // 0x19fb78: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fb74) {
            ctx->pc = 0x19FB90u;
            return;
        }
    }
    ctx->pc = 0x19FB7Cu;
}
