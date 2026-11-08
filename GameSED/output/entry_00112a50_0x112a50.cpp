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

// Function: entry_00112a50
// Address: 0x112a50 - 0x112a58
void entry_00112a50_0x112a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112a50_0x112a50");
#endif

    ctx->pc = 0x112a50u;

    // 0x112a50: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x112A50u;
    {
        const bool branch_taken_0x112a50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x112A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A50u;
        // 0x112a54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a50) {
            ctx->pc = 0x112A6Cu;
            return;
        }
    }
    ctx->pc = 0x112A58u;
}
