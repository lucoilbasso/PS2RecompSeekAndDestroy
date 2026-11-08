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

// Function: entry_001b0f30
// Address: 0x1b0f30 - 0x1b0f3c
void entry_001b0f30_0x1b0f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0f30_0x1b0f30");
#endif

    ctx->pc = 0x1b0f30u;

    // 0x1b0f30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0F30u;
    {
        const bool branch_taken_0x1b0f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F30u;
        // 0x1b0f34: 0x26120001  addiu       $s2, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f30) {
            ctx->pc = 0x1B0F3Cu;
            return;
        }
    }
    ctx->pc = 0x1B0F38u;
    // 0x1b0f38: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b0f38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->pc = 0x1b0f3cu;
}
