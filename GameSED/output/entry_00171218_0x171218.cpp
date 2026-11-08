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

// Function: entry_00171218
// Address: 0x171218 - 0x171228
void entry_00171218_0x171218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171218_0x171218");
#endif

    ctx->pc = 0x171218u;

    // 0x171218: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x171218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x17121c: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x17121cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x171220: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x171220u;
    {
        const bool branch_taken_0x171220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171220) {
            ctx->pc = 0x171224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171220u;
            // 0x171224: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x171228u;
            return;
        }
    }
    ctx->pc = 0x171228u;
}
