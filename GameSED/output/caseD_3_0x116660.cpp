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
// Address: 0x116660 - 0x116668
void caseD_3_0x116660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x116660");
#endif

    ctx->pc = 0x116660u;

    // 0x116660: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x116660u;
    {
        const bool branch_taken_0x116660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116660u;
        // 0x116664: 0x2623007c  addiu       $v1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116660) {
            ctx->pc = 0x1166A4u;
            return;
        }
    }
    ctx->pc = 0x116668u;
}
