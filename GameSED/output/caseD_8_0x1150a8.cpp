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

// Function: caseD_8
// Address: 0x1150a8 - 0x1150b0
void caseD_8_0x1150a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x1150a8");
#endif

    ctx->pc = 0x1150a8u;

    // 0x1150a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1150A8u;
    {
        const bool branch_taken_0x1150a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1150ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1150A8u;
        // 0x1150ac: 0x2625015c  addiu       $a1, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1150a8) {
            ctx->pc = 0x1150C4u;
            return;
        }
    }
    ctx->pc = 0x1150B0u;
}
