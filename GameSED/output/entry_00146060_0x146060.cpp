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

// Function: entry_00146060
// Address: 0x146060 - 0x146070
void entry_00146060_0x146060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146060_0x146060");
#endif

    ctx->pc = 0x146060u;

    // 0x146060: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x146060u;
    {
        const bool branch_taken_0x146060 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x146060) {
            ctx->pc = 0x146064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x146060u;
            // 0x146064: 0x8c900058  lw          $s0, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146084u;
            return;
        }
    }
    ctx->pc = 0x146068u;
    // 0x146068: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x146068u;
    {
        const bool branch_taken_0x146068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146068u;
        // 0x14606c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146068) {
            ctx->pc = 0x146078u;
            return;
        }
    }
    ctx->pc = 0x146070u;
}
