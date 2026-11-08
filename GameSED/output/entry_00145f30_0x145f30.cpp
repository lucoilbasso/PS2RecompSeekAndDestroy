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

// Function: entry_00145f30
// Address: 0x145f30 - 0x145f38
void entry_00145f30_0x145f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145f30_0x145f30");
#endif

    ctx->pc = 0x145f30u;

    // 0x145f30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145F30u;
    {
        const bool branch_taken_0x145f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F30u;
        // 0x145f34: 0x8e300024  lw          $s0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f30) {
            ctx->pc = 0x145F44u;
            return;
        }
    }
    ctx->pc = 0x145F38u;
}
