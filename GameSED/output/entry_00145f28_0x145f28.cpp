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

// Function: entry_00145f28
// Address: 0x145f28 - 0x145f30
void entry_00145f28_0x145f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145f28_0x145f28");
#endif

    ctx->pc = 0x145f28u;

    // 0x145f28: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x145F28u;
    {
        const bool branch_taken_0x145f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F28u;
        // 0x145f2c: 0x8c500028  lw          $s0, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f28) {
            ctx->pc = 0x145F44u;
            return;
        }
    }
    ctx->pc = 0x145F30u;
}
