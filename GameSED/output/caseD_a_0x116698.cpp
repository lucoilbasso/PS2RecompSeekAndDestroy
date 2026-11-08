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
// Address: 0x116698 - 0x1166a0
void caseD_a_0x116698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x116698");
#endif

    ctx->pc = 0x116698u;

    // 0x116698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x116698u;
    {
        const bool branch_taken_0x116698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116698u;
        // 0x11669c: 0x262301a0  addiu       $v1, $s1, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116698) {
            ctx->pc = 0x1166A4u;
            return;
        }
    }
    ctx->pc = 0x1166A0u;
}
