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
// Address: 0x115858 - 0x115868
void caseD_a_0x115858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x115858");
#endif

    ctx->pc = 0x115858u;

    // 0x115858: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11585c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11585cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115860: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115860u;
    {
        const bool branch_taken_0x115860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115860u;
        // 0x115864: 0x244401a0  addiu       $a0, $v0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115860) {
            ctx->pc = 0x115874u;
            return;
        }
    }
    ctx->pc = 0x115868u;
}
