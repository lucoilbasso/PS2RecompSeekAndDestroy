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
// Address: 0x115fa0 - 0x115fb0
void caseD_1_0x115fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x115fa0");
#endif

    ctx->pc = 0x115fa0u;

    // 0x115fa0: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x115fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x115fa4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x115FA4u;
    {
        const bool branch_taken_0x115fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FA4u;
        // 0x115fa8: 0x2445c350  addiu       $a1, $v0, -0x3CB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fa4) {
            ctx->pc = 0x11604Cu;
            return;
        }
    }
    ctx->pc = 0x115FACu;
    // 0x115fac: 0x0  nop
    ctx->pc = 0x115facu;
    // NOP
    ctx->pc = 0x115fb0u;
}
