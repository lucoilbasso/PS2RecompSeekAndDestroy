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

// Function: caseD_30
// Address: 0x1d1568 - 0x1d1570
void caseD_30_0x1d1568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_30_0x1d1568");
#endif

    ctx->pc = 0x1d1568u;

    // 0x1d1568: 0x1000ffbc  b           . + 4 + (-0x44 << 2)
    ctx->pc = 0x1D1568u;
    {
        const bool branch_taken_0x1d1568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D156Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1568u;
        // 0x1d156c: 0x36f70080  ori         $s7, $s7, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1568) {
            ctx->pc = 0x1D145Cu;
            return;
        }
    }
    ctx->pc = 0x1D1570u;
}
