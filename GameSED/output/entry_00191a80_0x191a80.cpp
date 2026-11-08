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

// Function: entry_00191a80
// Address: 0x191a80 - 0x191a94
void entry_00191a80_0x191a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191a80_0x191a80");
#endif

    ctx->pc = 0x191a80u;

    // 0x191a80: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x191A80u;
    {
        const bool branch_taken_0x191a80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x191a80) {
            ctx->pc = 0x191A94u;
            return;
        }
    }
    ctx->pc = 0x191A88u;
    // 0x191a88: 0x50800002  beql        $a0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x191A88u;
    {
        const bool branch_taken_0x191a88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x191a88) {
            ctx->pc = 0x191A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191A88u;
            // 0x191a8c: 0x8cc50158  lw          $a1, 0x158($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191A94u;
            return;
        }
    }
    ctx->pc = 0x191A90u;
    // 0x191a90: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x191a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    ctx->pc = 0x191a94u;
}
