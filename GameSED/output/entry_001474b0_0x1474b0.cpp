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

// Function: entry_001474b0
// Address: 0x1474b0 - 0x1474b8
void entry_001474b0_0x1474b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001474b0_0x1474b0");
#endif

    ctx->pc = 0x1474b0u;

    // 0x1474b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1474B0u;
    {
        const bool branch_taken_0x1474b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1474B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1474B0u;
        // 0x1474b4: 0x34420003  ori         $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1474b0) {
            ctx->pc = 0x1474C8u;
            return;
        }
    }
    ctx->pc = 0x1474B8u;
}
