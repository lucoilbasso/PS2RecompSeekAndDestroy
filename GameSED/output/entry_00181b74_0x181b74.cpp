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

// Function: entry_00181b74
// Address: 0x181b74 - 0x181b7c
void entry_00181b74_0x181b74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00181b74_0x181b74");
#endif

    ctx->pc = 0x181b74u;

    // 0x181b74: 0x5040ff92  beql        $v0, $zero, . + 4 + (-0x6E << 2)
    ctx->pc = 0x181B74u;
    {
        const bool branch_taken_0x181b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x181b74) {
            ctx->pc = 0x181B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181B74u;
            // 0x181b78: 0x8cc5000c  lw          $a1, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1819C0u;
            return;
        }
    }
    ctx->pc = 0x181B7Cu;
}
