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
// Address: 0x16cd18 - 0x16cd20
void caseD_2_0x16cd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x16cd18");
#endif

    ctx->pc = 0x16cd18u;

    // 0x16cd18: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x16CD18u;
    {
        const bool branch_taken_0x16cd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CD18u;
        // 0x16cd1c: 0x26330270  addiu       $s3, $s1, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cd18) {
            ctx->pc = 0x16CDD4u;
            return;
        }
    }
    ctx->pc = 0x16CD20u;
}
