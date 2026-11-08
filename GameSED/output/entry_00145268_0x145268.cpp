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

// Function: entry_00145268
// Address: 0x145268 - 0x145270
void entry_00145268_0x145268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145268_0x145268");
#endif

    ctx->pc = 0x145268u;

    // 0x145268: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x145268u;
    {
        const bool branch_taken_0x145268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145268u;
        // 0x14526c: 0x8e320024  lw          $s2, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145268) {
            ctx->pc = 0x14527Cu;
            return;
        }
    }
    ctx->pc = 0x145270u;
}
