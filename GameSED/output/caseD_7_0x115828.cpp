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
// Address: 0x115828 - 0x115838
void caseD_7_0x115828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x115828");
#endif

    ctx->pc = 0x115828u;

    // 0x115828: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11582c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11582cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115830: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x115830u;
    {
        const bool branch_taken_0x115830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115830u;
        // 0x115834: 0x2444014c  addiu       $a0, $v0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115830) {
            ctx->pc = 0x115874u;
            return;
        }
    }
    ctx->pc = 0x115838u;
}
