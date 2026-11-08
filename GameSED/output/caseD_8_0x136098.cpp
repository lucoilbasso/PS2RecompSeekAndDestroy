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
// Address: 0x136098 - 0x1360a0
void caseD_8_0x136098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x136098");
#endif

    ctx->pc = 0x136098u;

    // 0x136098: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x136098u;
    {
        const bool branch_taken_0x136098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136098u;
        // 0x13609c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136098) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x1360A0u;
}
