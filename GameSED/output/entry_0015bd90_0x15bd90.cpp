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

// Function: entry_0015bd90
// Address: 0x15bd90 - 0x15bd98
void entry_0015bd90_0x15bd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015bd90_0x15bd90");
#endif

    ctx->pc = 0x15bd90u;

    // 0x15bd90: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15BD90u;
    {
        const bool branch_taken_0x15bd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD90u;
        // 0x15bd94: 0x26f500a0  addiu       $s5, $s7, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd90) {
            ctx->pc = 0x15BDC8u;
            return;
        }
    }
    ctx->pc = 0x15BD98u;
}
