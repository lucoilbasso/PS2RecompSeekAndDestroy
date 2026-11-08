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

// Function: entry_001d2b40
// Address: 0x1d2b40 - 0x1d2b4c
void entry_001d2b40_0x1d2b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2b40_0x1d2b40");
#endif

    ctx->pc = 0x1d2b40u;

    // 0x1d2b40: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1d2b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1d2b44: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D2B44u;
    {
        const bool branch_taken_0x1d2b44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2b44) {
            ctx->pc = 0x1D2B48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2B44u;
            // 0x1d2b48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2B4Cu;
            return;
        }
    }
    ctx->pc = 0x1D2B4Cu;
}
