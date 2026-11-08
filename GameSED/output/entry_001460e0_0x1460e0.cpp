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

// Function: entry_001460e0
// Address: 0x1460e0 - 0x1460f0
void entry_001460e0_0x1460e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001460e0_0x1460e0");
#endif

    ctx->pc = 0x1460e0u;

    // 0x1460e0: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1460E0u;
    {
        const bool branch_taken_0x1460e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1460e0) {
            ctx->pc = 0x1460E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1460E0u;
            // 0x1460e4: 0x8e300058  lw          $s0, 0x58($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146104u;
            return;
        }
    }
    ctx->pc = 0x1460E8u;
    // 0x1460e8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1460E8u;
    {
        const bool branch_taken_0x1460e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1460ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460E8u;
        // 0x1460ec: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1460e8) {
            ctx->pc = 0x1460F8u;
            return;
        }
    }
    ctx->pc = 0x1460F0u;
}
