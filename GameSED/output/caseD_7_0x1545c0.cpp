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
// Address: 0x1545c0 - 0x1545c8
void caseD_7_0x1545c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x1545c0");
#endif

    ctx->pc = 0x1545c0u;

    // 0x1545c0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1545C0u;
    {
        const bool branch_taken_0x1545c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545C0u;
        // 0x1545c4: 0x2612030c  addiu       $s2, $s0, 0x30C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 780));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545c0) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x1545C8u;
}
