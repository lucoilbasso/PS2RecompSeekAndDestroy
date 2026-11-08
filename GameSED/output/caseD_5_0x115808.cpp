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

// Function: caseD_5
// Address: 0x115808 - 0x115818
void caseD_5_0x115808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x115808");
#endif

    ctx->pc = 0x115808u;

    // 0x115808: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11580c: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x11580cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x115810: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x115810u;
    {
        const bool branch_taken_0x115810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115810u;
        // 0x115814: 0x244400e8  addiu       $a0, $v0, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115810) {
            ctx->pc = 0x115874u;
            return;
        }
    }
    ctx->pc = 0x115818u;
}
