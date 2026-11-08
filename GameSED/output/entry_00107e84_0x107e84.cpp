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

// Function: entry_00107e84
// Address: 0x107e84 - 0x107e90
void entry_00107e84_0x107e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e84_0x107e84");
#endif

    ctx->pc = 0x107e84u;

    // 0x107e84: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x107E84u;
    {
        const bool branch_taken_0x107e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E84u;
        // 0x107e88: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e84) {
            ctx->pc = 0x107F84u;
            return;
        }
    }
    ctx->pc = 0x107E8Cu;
    // 0x107e8c: 0x0  nop
    ctx->pc = 0x107e8cu;
    // NOP
    ctx->pc = 0x107e90u;
}
