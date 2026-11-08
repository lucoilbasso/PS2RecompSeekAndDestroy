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

// Function: entry_001ba8a8
// Address: 0x1ba8a8 - 0x1ba8b0
void entry_001ba8a8_0x1ba8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba8a8_0x1ba8a8");
#endif

    ctx->pc = 0x1ba8a8u;

    // 0x1ba8a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA8A8u;
    {
        const bool branch_taken_0x1ba8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BA8A8u;
        // 0x1ba8ac: 0x3c100025  lui         $s0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba8a8) {
            ctx->pc = 0x1BA8B8u;
            return;
        }
    }
    ctx->pc = 0x1BA8B0u;
}
