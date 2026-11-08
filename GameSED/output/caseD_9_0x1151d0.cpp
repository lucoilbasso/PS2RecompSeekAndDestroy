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

// Function: caseD_9
// Address: 0x1151d0 - 0x1151d8
void caseD_9_0x1151d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x1151d0");
#endif

    ctx->pc = 0x1151d0u;

    // 0x1151d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1151D0u;
    {
        const bool branch_taken_0x1151d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151D0u;
        // 0x1151d4: 0x26250180  addiu       $a1, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151d0) {
            ctx->pc = 0x1151E4u;
            return;
        }
    }
    ctx->pc = 0x1151D8u;
}
