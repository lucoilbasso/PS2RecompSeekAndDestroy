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

// Function: entry_00105340
// Address: 0x105340 - 0x105350
void entry_00105340_0x105340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105340_0x105340");
#endif

    ctx->pc = 0x105340u;

    // 0x105340: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105340u;
    {
        const bool branch_taken_0x105340 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x105340) {
            ctx->pc = 0x105344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x105340u;
            // 0x105344: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x105354u;
            return;
        }
    }
    ctx->pc = 0x105348u;
    // 0x105348: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105348u;
    {
        const bool branch_taken_0x105348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105348) {
            ctx->pc = 0x105354u;
            return;
        }
    }
    ctx->pc = 0x105350u;
}
