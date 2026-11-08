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
// Address: 0x1180a8 - 0x1180b8
void caseD_a_0x1180a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1180a8");
#endif

    ctx->pc = 0x1180a8u;

    // 0x1180a8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1180a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1180ac: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x1180acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x1180b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1180B0u;
    {
        const bool branch_taken_0x1180b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1180B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1180B0u;
        // 0x1180b4: 0x244501a0  addiu       $a1, $v0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1180b0) {
            ctx->pc = 0x1180C4u;
            return;
        }
    }
    ctx->pc = 0x1180B8u;
}
