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
// Address: 0x115648 - 0x115658
void caseD_9_0x115648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x115648");
#endif

    ctx->pc = 0x115648u;

    // 0x115648: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11564c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115650: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x115650u;
    {
        const bool branch_taken_0x115650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115650u;
        // 0x115654: 0x24450180  addiu       $a1, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115650) {
            ctx->pc = 0x115674u;
            return;
        }
    }
    ctx->pc = 0x115658u;
}
