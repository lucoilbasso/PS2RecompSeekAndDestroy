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

// Function: caseD_2
// Address: 0x136068 - 0x136070
void caseD_2_0x136068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x136068");
#endif

    ctx->pc = 0x136068u;

    // 0x136068: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x136068u;
    {
        const bool branch_taken_0x136068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136068u;
        // 0x13606c: 0x3c040080  lui         $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136068) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136070u;
}
