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
// Address: 0x118078 - 0x118088
void caseD_7_0x118078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x118078");
#endif

    ctx->pc = 0x118078u;

    // 0x118078: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11807c: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x11807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x118080: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x118080u;
    {
        const bool branch_taken_0x118080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118080u;
        // 0x118084: 0x2445014c  addiu       $a1, $v0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118080) {
            ctx->pc = 0x1180C4u;
            return;
        }
    }
    ctx->pc = 0x118088u;
}
