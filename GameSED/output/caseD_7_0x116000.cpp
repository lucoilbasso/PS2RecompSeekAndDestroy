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
// Address: 0x116000 - 0x116010
void caseD_7_0x116000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x116000");
#endif

    ctx->pc = 0x116000u;

    // 0x116000: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x116000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x116004: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x116004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x116008: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x116008u;
    {
        const bool branch_taken_0x116008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116008u;
        // 0x11600c: 0x2445014c  addiu       $a1, $v0, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 332));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116008) {
            ctx->pc = 0x11604Cu;
            return;
        }
    }
    ctx->pc = 0x116010u;
}
