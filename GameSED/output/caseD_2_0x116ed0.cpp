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
// Address: 0x116ed0 - 0x116ed8
void caseD_2_0x116ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x116ed0");
#endif

    ctx->pc = 0x116ed0u;

    // 0x116ed0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x116ED0u;
    {
        const bool branch_taken_0x116ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116ED0u;
        // 0x116ed4: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ed0) {
            ctx->pc = 0x116F1Cu;
            return;
        }
    }
    ctx->pc = 0x116ED8u;
}
