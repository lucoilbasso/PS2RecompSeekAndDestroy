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

// Function: entry_001935c4
// Address: 0x1935c4 - 0x1935cc
void entry_001935c4_0x1935c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001935c4_0x1935c4");
#endif

    ctx->pc = 0x1935c4u;

    // 0x1935c4: 0x641fff4  bgez        $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1935C4u;
    {
        const bool branch_taken_0x1935c4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x1935C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1935C4u;
        // 0x1935c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1935c4) {
            ctx->pc = 0x193598u;
            return;
        }
    }
    ctx->pc = 0x1935CCu;
}
