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
// Address: 0x136090 - 0x136098
void caseD_7_0x136090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x136090");
#endif

    ctx->pc = 0x136090u;

    // 0x136090: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x136090u;
    {
        const bool branch_taken_0x136090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136090u;
        // 0x136094: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136090) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136098u;
}
