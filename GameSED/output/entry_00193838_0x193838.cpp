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

// Function: entry_00193838
// Address: 0x193838 - 0x193840
void entry_00193838_0x193838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00193838_0x193838");
#endif

    ctx->pc = 0x193838u;

    // 0x193838: 0x4a1ffed  bgez        $a1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x193838u;
    {
        const bool branch_taken_0x193838 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x19383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x193838u;
        // 0x19383c: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193838) {
            ctx->pc = 0x1937F0u;
            return;
        }
    }
    ctx->pc = 0x193840u;
}
