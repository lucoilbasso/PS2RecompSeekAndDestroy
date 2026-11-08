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

// Function: caseD_6
// Address: 0x115618 - 0x115628
void caseD_6_0x115618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x115618");
#endif

    ctx->pc = 0x115618u;

    // 0x115618: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11561c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11561cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115620: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115620u;
    {
        const bool branch_taken_0x115620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115620u;
        // 0x115624: 0x2445011c  addiu       $a1, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115620) {
            ctx->pc = 0x115674u;
            return;
        }
    }
    ctx->pc = 0x115628u;
}
