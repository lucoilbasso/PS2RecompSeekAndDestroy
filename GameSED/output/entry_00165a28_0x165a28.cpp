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

// Function: entry_00165a28
// Address: 0x165a28 - 0x165a30
void entry_00165a28_0x165a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165a28_0x165a28");
#endif

    ctx->pc = 0x165a28u;

    // 0x165a28: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x165A28u;
    {
        const bool branch_taken_0x165a28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x165A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A28u;
        // 0x165a2c: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a28) {
            ctx->pc = 0x165AD8u;
            return;
        }
    }
    ctx->pc = 0x165A30u;
}
