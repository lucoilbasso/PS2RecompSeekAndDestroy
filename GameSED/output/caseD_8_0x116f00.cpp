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

// Function: caseD_8
// Address: 0x116f00 - 0x116f08
void caseD_8_0x116f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x116f00");
#endif

    ctx->pc = 0x116f00u;

    // 0x116f00: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x116F00u;
    {
        const bool branch_taken_0x116f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116F00u;
        // 0x116f04: 0x2624015c  addiu       $a0, $s1, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116f00) {
            ctx->pc = 0x116F1Cu;
            return;
        }
    }
    ctx->pc = 0x116F08u;
}
