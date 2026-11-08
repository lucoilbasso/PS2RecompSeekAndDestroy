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

// Function: entry_001cc720
// Address: 0x1cc720 - 0x1cc734
void entry_001cc720_0x1cc720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc720_0x1cc720");
#endif

    ctx->pc = 0x1cc720u;

    // 0x1cc720: 0x50a00064  beql        $a1, $zero, . + 4 + (0x64 << 2)
    ctx->pc = 0x1CC720u;
    {
        const bool branch_taken_0x1cc720 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc720) {
            ctx->pc = 0x1CC724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC720u;
            // 0x1cc724: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC8B4u;
            return;
        }
    }
    ctx->pc = 0x1CC728u;
    // 0x1cc728: 0x50e00062  beql        $a3, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x1CC728u;
    {
        const bool branch_taken_0x1cc728 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc728) {
            ctx->pc = 0x1CC72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC728u;
            // 0x1cc72c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC8B4u;
            return;
        }
    }
    ctx->pc = 0x1CC730u;
    // 0x1cc730: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1cc730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->pc = 0x1cc734u;
}
