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

// Function: caseD_1
// Address: 0x1155c8 - 0x1155d8
void caseD_1_0x1155c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1155c8");
#endif

    ctx->pc = 0x1155c8u;

    // 0x1155c8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1155c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1155cc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1155CCu;
    {
        const bool branch_taken_0x1155cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1155D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1155CCu;
        // 0x1155d0: 0x2445d190  addiu       $a1, $v0, -0x2E70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1155cc) {
            ctx->pc = 0x115674u;
            return;
        }
    }
    ctx->pc = 0x1155D4u;
    // 0x1155d4: 0x0  nop
    ctx->pc = 0x1155d4u;
    // NOP
    ctx->pc = 0x1155d8u;
}
