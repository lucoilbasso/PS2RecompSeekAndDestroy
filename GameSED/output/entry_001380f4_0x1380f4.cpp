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

// Function: entry_001380f4
// Address: 0x1380f4 - 0x138100
void entry_001380f4_0x1380f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001380f4_0x1380f4");
#endif

    ctx->pc = 0x1380f4u;

    // 0x1380f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1380F4u;
    {
        const bool branch_taken_0x1380f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380F4u;
        // 0x1380f8: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380f4) {
            ctx->pc = 0x13810Cu;
            return;
        }
    }
    ctx->pc = 0x1380FCu;
    // 0x1380fc: 0x0  nop
    ctx->pc = 0x1380fcu;
    // NOP
    ctx->pc = 0x138100u;
}
