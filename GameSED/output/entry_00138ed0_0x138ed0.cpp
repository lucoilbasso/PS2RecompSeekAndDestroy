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

// Function: entry_00138ed0
// Address: 0x138ed0 - 0x138ed8
void entry_00138ed0_0x138ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138ed0_0x138ed0");
#endif

    ctx->pc = 0x138ed0u;

    // 0x138ed0: 0x52430001  beql        $s2, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x138ED0u;
    {
        const bool branch_taken_0x138ed0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x138ed0) {
            ctx->pc = 0x138ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138ED0u;
            // 0x138ed4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138ED8u;
            return;
        }
    }
    ctx->pc = 0x138ED8u;
}
