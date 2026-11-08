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

// Function: caseD_1
// Address: 0x16c8b0 - 0x16c8b8
void caseD_1_0x16c8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x16c8b0");
#endif

    ctx->pc = 0x16c8b0u;

    // 0x16c8b0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x16C8B0u;
    {
        const bool branch_taken_0x16c8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C8B0u;
        // 0x16c8b4: 0x263501f0  addiu       $s5, $s1, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c8b0) {
            ctx->pc = 0x16C974u;
            return;
        }
    }
    ctx->pc = 0x16C8B8u;
}
