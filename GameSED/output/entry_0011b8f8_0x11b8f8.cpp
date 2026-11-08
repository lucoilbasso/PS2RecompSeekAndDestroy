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

// Function: entry_0011b8f8
// Address: 0x11b8f8 - 0x11b904
void entry_0011b8f8_0x11b8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b8f8_0x11b8f8");
#endif

    ctx->pc = 0x11b8f8u;

    // 0x11b8f8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x11b8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x11b8fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B8FCu;
    {
        const bool branch_taken_0x11b8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B8FCu;
        // 0x11b900: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b8fc) {
            ctx->pc = 0x11B910u;
            return;
        }
    }
    ctx->pc = 0x11B904u;
}
