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

// Function: entry_00107f10
// Address: 0x107f10 - 0x107f18
void entry_00107f10_0x107f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107f10_0x107f10");
#endif

    ctx->pc = 0x107f10u;

    // 0x107f10: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x107F10u;
    {
        const bool branch_taken_0x107f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107F10u;
        // 0x107f14: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107f10) {
            ctx->pc = 0x107F84u;
            return;
        }
    }
    ctx->pc = 0x107F18u;
}
