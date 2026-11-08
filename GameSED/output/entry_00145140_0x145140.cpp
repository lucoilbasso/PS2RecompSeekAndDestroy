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

// Function: entry_00145140
// Address: 0x145140 - 0x145148
void entry_00145140_0x145140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145140_0x145140");
#endif

    ctx->pc = 0x145140u;

    // 0x145140: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145140u;
    {
        const bool branch_taken_0x145140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145140u;
        // 0x145144: 0x8e300024  lw          $s0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145140) {
            ctx->pc = 0x145154u;
            return;
        }
    }
    ctx->pc = 0x145148u;
}
