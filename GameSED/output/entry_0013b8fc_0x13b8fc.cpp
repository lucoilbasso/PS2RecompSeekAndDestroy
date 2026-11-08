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

// Function: entry_0013b8fc
// Address: 0x13b8fc - 0x13b904
void entry_0013b8fc_0x13b8fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013b8fc_0x13b8fc");
#endif

    ctx->pc = 0x13b8fcu;

    // 0x13b8fc: 0x17c0ff86  bnez        $fp, . + 4 + (-0x7A << 2)
    ctx->pc = 0x13B8FCu;
    {
        const bool branch_taken_0x13b8fc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B8FCu;
        // 0x13b900: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b8fc) {
            ctx->pc = 0x13B718u;
            return;
        }
    }
    ctx->pc = 0x13B904u;
}
