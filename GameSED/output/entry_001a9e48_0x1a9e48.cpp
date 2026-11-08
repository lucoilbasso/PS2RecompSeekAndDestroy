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

// Function: entry_001a9e48
// Address: 0x1a9e48 - 0x1a9e50
void entry_001a9e48_0x1a9e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9e48_0x1a9e48");
#endif

    ctx->pc = 0x1a9e48u;

    // 0x1a9e48: 0x521ffcd  bgez        $t1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1A9E48u;
    {
        const bool branch_taken_0x1a9e48 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1A9E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E48u;
        // 0x1a9e4c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9e48) {
            ctx->pc = 0x1A9D80u;
            return;
        }
    }
    ctx->pc = 0x1A9E50u;
}
