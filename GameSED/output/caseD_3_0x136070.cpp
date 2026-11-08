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

// Function: caseD_3
// Address: 0x136070 - 0x136078
void caseD_3_0x136070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x136070");
#endif

    ctx->pc = 0x136070u;

    // 0x136070: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x136070u;
    {
        const bool branch_taken_0x136070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136070u;
        // 0x136074: 0x3c040004  lui         $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136070) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136078u;
}
