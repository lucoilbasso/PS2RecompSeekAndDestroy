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

// Function: entry_001b15c0
// Address: 0x1b15c0 - 0x1b15cc
void entry_001b15c0_0x1b15c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b15c0_0x1b15c0");
#endif

    ctx->pc = 0x1b15c0u;

    // 0x1b15c0: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B15C0u;
    {
        const bool branch_taken_0x1b15c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b15c0) {
            ctx->pc = 0x1B15C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B15C0u;
            // 0x1b15c4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B15B0u;
            return;
        }
    }
    ctx->pc = 0x1B15C8u;
    // 0x1b15c8: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x1b15c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    ctx->pc = 0x1b15ccu;
}
