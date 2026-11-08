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

// Function: entry_001de7d4
// Address: 0x1de7d4 - 0x1de7e4
void entry_001de7d4_0x1de7d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de7d4_0x1de7d4");
#endif

    ctx->pc = 0x1de7d4u;

    // 0x1de7d4: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE7D4u;
    {
        const bool branch_taken_0x1de7d4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7D4u;
        // 0x1de7d8: 0x53400  sll         $a2, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7d4) {
            ctx->pc = 0x1DE7E4u;
            return;
        }
    }
    ctx->pc = 0x1DE7DCu;
    // 0x1de7dc: 0x848701a2  lh          $a3, 0x1A2($a0)
    ctx->pc = 0x1de7dcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 418)));
    // 0x1de7e0: 0x848b01a6  lh          $t3, 0x1A6($a0)
    ctx->pc = 0x1de7e0u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 422)));
    ctx->pc = 0x1de7e4u;
}
