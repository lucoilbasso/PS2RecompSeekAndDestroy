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

// Function: entry_0011ef78
// Address: 0x11ef78 - 0x11ef84
void entry_0011ef78_0x11ef78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ef78_0x11ef78");
#endif

    ctx->pc = 0x11ef78u;

    // 0x11ef78: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x11ef78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11ef7c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x11EF7Cu;
    {
        const bool branch_taken_0x11ef7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF7Cu;
        // 0x11ef80: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef7c) {
            ctx->pc = 0x11EE88u;
            return;
        }
    }
    ctx->pc = 0x11EF84u;
}
