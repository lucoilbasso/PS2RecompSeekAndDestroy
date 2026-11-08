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

// Function: entry_00138b50
// Address: 0x138b50 - 0x138b58
void entry_00138b50_0x138b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138b50_0x138b50");
#endif

    ctx->pc = 0x138b50u;

    // 0x138b50: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x138B50u;
    {
        const bool branch_taken_0x138b50 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x138B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B50u;
        // 0x138b54: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138b50) {
            ctx->pc = 0x138B68u;
            return;
        }
    }
    ctx->pc = 0x138B58u;
}
