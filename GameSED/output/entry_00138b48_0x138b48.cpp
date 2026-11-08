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

// Function: entry_00138b48
// Address: 0x138b48 - 0x138b50
void entry_00138b48_0x138b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138b48_0x138b48");
#endif

    ctx->pc = 0x138b48u;

    // 0x138b48: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x138B48u;
    {
        const bool branch_taken_0x138b48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x138B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B48u;
        // 0x138b4c: 0x8f828a30  lw          $v0, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b48) {
            ctx->pc = 0x138B70u;
            return;
        }
    }
    ctx->pc = 0x138B50u;
}
