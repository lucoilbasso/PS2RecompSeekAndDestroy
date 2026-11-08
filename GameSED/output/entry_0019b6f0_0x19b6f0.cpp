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

// Function: entry_0019b6f0
// Address: 0x19b6f0 - 0x19b6fc
void entry_0019b6f0_0x19b6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b6f0_0x19b6f0");
#endif

    ctx->pc = 0x19b6f0u;

    // 0x19b6f0: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x19b6f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x19b6f4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x19B6F4u;
    {
        const bool branch_taken_0x19b6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B6F4u;
        // 0x19b6f8: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b6f4) {
            ctx->pc = 0x19B698u;
            return;
        }
    }
    ctx->pc = 0x19B6FCu;
}
