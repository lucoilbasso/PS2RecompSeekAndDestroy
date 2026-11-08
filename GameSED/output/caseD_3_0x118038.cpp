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

// Function: caseD_3
// Address: 0x118038 - 0x118048
void caseD_3_0x118038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x118038");
#endif

    ctx->pc = 0x118038u;

    // 0x118038: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x118038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x11803c: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x11803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x118040: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x118040u;
    {
        const bool branch_taken_0x118040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118040u;
        // 0x118044: 0x2445007c  addiu       $a1, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118040) {
            ctx->pc = 0x1180C4u;
            return;
        }
    }
    ctx->pc = 0x118048u;
}
