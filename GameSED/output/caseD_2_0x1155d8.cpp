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

// Function: caseD_2
// Address: 0x1155d8 - 0x1155e8
void caseD_2_0x1155d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1155d8");
#endif

    ctx->pc = 0x1155d8u;

    // 0x1155d8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1155d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1155dc: 0x2442d190  addiu       $v0, $v0, -0x2E70
    ctx->pc = 0x1155dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
    // 0x1155e0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1155E0u;
    {
        const bool branch_taken_0x1155e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1155E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155E0u;
        // 0x1155e4: 0x2445004c  addiu       $a1, $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155e0) {
            ctx->pc = 0x115674u;
            return;
        }
    }
    ctx->pc = 0x1155E8u;
}
