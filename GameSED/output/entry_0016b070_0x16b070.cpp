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

// Function: entry_0016b070
// Address: 0x16b070 - 0x16b078
void entry_0016b070_0x16b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b070_0x16b070");
#endif

    ctx->pc = 0x16b070u;

    // 0x16b070: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16B070u;
    {
        const bool branch_taken_0x16b070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B070u;
        // 0x16b074: 0x24831218  addiu       $v1, $a0, 0x1218 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b070) {
            ctx->pc = 0x16B07Cu;
            return;
        }
    }
    ctx->pc = 0x16B078u;
}
