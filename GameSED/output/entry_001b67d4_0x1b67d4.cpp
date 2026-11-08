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

// Function: entry_001b67d4
// Address: 0x1b67d4 - 0x1b67dc
void entry_001b67d4_0x1b67d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b67d4_0x1b67d4");
#endif

    ctx->pc = 0x1b67d4u;

    // 0x1b67d4: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B67D4u;
    {
        const bool branch_taken_0x1b67d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b67d4) {
            ctx->pc = 0x1B67D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B67D4u;
            // 0x1b67d8: 0x8e22b400  lw          $v0, -0x4C00($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294947840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B67E8u;
            return;
        }
    }
    ctx->pc = 0x1B67DCu;
}
