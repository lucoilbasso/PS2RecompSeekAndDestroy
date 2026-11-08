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

// Function: entry_00107d10
// Address: 0x107d10 - 0x107d18
void entry_00107d10_0x107d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107d10_0x107d10");
#endif

    ctx->pc = 0x107d10u;

    // 0x107d10: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x107D10u;
    {
        const bool branch_taken_0x107d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D10u;
        // 0x107d14: 0x8c900014  lw          $s0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d10) {
            ctx->pc = 0x107F84u;
            return;
        }
    }
    ctx->pc = 0x107D18u;
}
