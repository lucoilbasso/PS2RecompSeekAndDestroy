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

// Function: entry_00111a70
// Address: 0x111a70 - 0x111a78
void entry_00111a70_0x111a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111a70_0x111a70");
#endif

    ctx->pc = 0x111a70u;

    // 0x111a70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x111A70u;
    {
        const bool branch_taken_0x111a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111A70u;
        // 0x111a74: 0x26500004  addiu       $s0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111a70) {
            ctx->pc = 0x111A7Cu;
            return;
        }
    }
    ctx->pc = 0x111A78u;
}
