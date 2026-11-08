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

// Function: entry_00138d98
// Address: 0x138d98 - 0x138da0
void entry_00138d98_0x138d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138d98_0x138d98");
#endif

    ctx->pc = 0x138d98u;

    // 0x138d98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x138D98u;
    {
        const bool branch_taken_0x138d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D98u;
        // 0x138d9c: 0x8c630088  lw          $v1, 0x88($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d98) {
            ctx->pc = 0x138DA4u;
            return;
        }
    }
    ctx->pc = 0x138DA0u;
}
