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

// Function: caseD_7
// Address: 0x1a7358 - 0x1a7360
void caseD_7_0x1a7358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1a7358");
#endif

    ctx->pc = 0x1a7358u;

    // 0x1a7358: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7358u;
    {
        const bool branch_taken_0x1a7358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7358u;
        // 0x1a735c: 0xb0102a  slt         $v0, $a1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7358) {
            ctx->pc = 0x1A7370u;
            return;
        }
    }
    ctx->pc = 0x1A7360u;
}
