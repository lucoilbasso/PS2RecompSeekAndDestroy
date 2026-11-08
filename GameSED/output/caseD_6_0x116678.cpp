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

// Function: caseD_6
// Address: 0x116678 - 0x116680
void caseD_6_0x116678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x116678");
#endif

    ctx->pc = 0x116678u;

    // 0x116678: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x116678u;
    {
        const bool branch_taken_0x116678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116678u;
        // 0x11667c: 0x2623011c  addiu       $v1, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116678) {
            ctx->pc = 0x1166A4u;
            return;
        }
    }
    ctx->pc = 0x116680u;
}
