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

// Function: caseD_a
// Address: 0x115d00 - 0x115d08
void caseD_a_0x115d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x115d00");
#endif

    ctx->pc = 0x115d00u;

    // 0x115d00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x115D00u;
    {
        const bool branch_taken_0x115d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115D00u;
        // 0x115d04: 0x262501a0  addiu       $a1, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115d00) {
            ctx->pc = 0x115D0Cu;
            return;
        }
    }
    ctx->pc = 0x115D08u;
}
