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

// Function: entry_00155298
// Address: 0x155298 - 0x1552a8
void entry_00155298_0x155298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155298_0x155298");
#endif

    ctx->pc = 0x155298u;

    // 0x155298: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155298u;
    {
        const bool branch_taken_0x155298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x155298) {
            ctx->pc = 0x15529Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155298u;
            // 0x15529c: 0x2604075c  addiu       $a0, $s0, 0x75C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1884));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1552ACu;
            return;
        }
    }
    ctx->pc = 0x1552A0u;
    // 0x1552a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1552A0u;
    {
        const bool branch_taken_0x1552a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1552a0) {
            ctx->pc = 0x1552ACu;
            return;
        }
    }
    ctx->pc = 0x1552A8u;
}
