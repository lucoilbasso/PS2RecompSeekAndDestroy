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

// Function: caseD_0
// Address: 0x1a6128 - 0x1a6130
void caseD_0_0x1a6128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1a6128");
#endif

    ctx->pc = 0x1a6128u;

    // 0x1a6128: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1A6128u;
    {
        const bool branch_taken_0x1a6128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6128u;
        // 0x1a612c: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6128) {
            ctx->pc = 0x1A61DCu;
            return;
        }
    }
    ctx->pc = 0x1A6130u;
}
