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

// Function: entry_00132644
// Address: 0x132644 - 0x13264c
void entry_00132644_0x132644(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00132644_0x132644");
#endif

    ctx->pc = 0x132644u;

    // 0x132644: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132644u;
    {
        const bool branch_taken_0x132644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132644u;
        // 0x132648: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132644) {
            ctx->pc = 0x132658u;
            return;
        }
    }
    ctx->pc = 0x13264Cu;
}
