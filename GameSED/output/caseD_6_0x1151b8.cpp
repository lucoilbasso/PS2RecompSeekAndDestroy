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
// Address: 0x1151b8 - 0x1151c0
void caseD_6_0x1151b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1151b8");
#endif

    ctx->pc = 0x1151b8u;

    // 0x1151b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1151B8u;
    {
        const bool branch_taken_0x1151b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151B8u;
        // 0x1151bc: 0x2625011c  addiu       $a1, $s1, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151b8) {
            ctx->pc = 0x1151E4u;
            return;
        }
    }
    ctx->pc = 0x1151C0u;
}
