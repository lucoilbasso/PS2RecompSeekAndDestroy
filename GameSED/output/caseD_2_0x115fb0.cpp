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
// Address: 0x115fb0 - 0x115fc0
void caseD_2_0x115fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x115fb0");
#endif

    ctx->pc = 0x115fb0u;

    // 0x115fb0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115fb4: 0x2442c350  addiu       $v0, $v0, -0x3CB0
    ctx->pc = 0x115fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
    // 0x115fb8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x115FB8u;
    {
        const bool branch_taken_0x115fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FB8u;
        // 0x115fbc: 0x2445004c  addiu       $a1, $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fb8) {
            ctx->pc = 0x11604Cu;
            return;
        }
    }
    ctx->pc = 0x115FC0u;
}
