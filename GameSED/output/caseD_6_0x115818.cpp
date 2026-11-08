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
// Address: 0x115818 - 0x115828
void caseD_6_0x115818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x115818");
#endif

    ctx->pc = 0x115818u;

    // 0x115818: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11581c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115820: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x115820u;
    {
        const bool branch_taken_0x115820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115820u;
        // 0x115824: 0x2444011c  addiu       $a0, $v0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115820) {
            ctx->pc = 0x115874u;
            return;
        }
    }
    ctx->pc = 0x115828u;
}
