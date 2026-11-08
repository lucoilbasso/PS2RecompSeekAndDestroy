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
// Address: 0x1545e8 - 0x1545f0
void caseD_a_0x1545e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1545e8");
#endif

    ctx->pc = 0x1545e8u;

    // 0x1545e8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1545E8u;
    {
        const bool branch_taken_0x1545e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1545ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1545E8u;
        // 0x1545ec: 0x2612031c  addiu       $s2, $s0, 0x31C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 796));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1545e8) {
            ctx->pc = 0x1546B8u;
            return;
        }
    }
    ctx->pc = 0x1545F0u;
}
