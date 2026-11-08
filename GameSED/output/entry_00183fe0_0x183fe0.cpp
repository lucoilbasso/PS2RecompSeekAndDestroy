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

// Function: entry_00183fe0
// Address: 0x183fe0 - 0x183fe8
void entry_00183fe0_0x183fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183fe0_0x183fe0");
#endif

    ctx->pc = 0x183fe0u;

    // 0x183fe0: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x183FE0u;
    {
        const bool branch_taken_0x183fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x183FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183FE0u;
        // 0x183fe4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fe0) {
            ctx->pc = 0x184000u;
            return;
        }
    }
    ctx->pc = 0x183FE8u;
}
