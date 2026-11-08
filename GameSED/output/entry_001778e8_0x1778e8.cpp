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

// Function: entry_001778e8
// Address: 0x1778e8 - 0x1778f4
void entry_001778e8_0x1778e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001778e8_0x1778e8");
#endif

    ctx->pc = 0x1778e8u;

    // 0x1778e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1778e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1778ec: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1778ECu;
    {
        const bool branch_taken_0x1778ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1778ec) {
            ctx->pc = 0x1778F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1778ECu;
            // 0x1778f0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177900u;
            return;
        }
    }
    ctx->pc = 0x1778F4u;
}
