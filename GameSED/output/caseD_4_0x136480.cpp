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

// Function: caseD_4
// Address: 0x136480 - 0x136488
void caseD_4_0x136480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x136480");
#endif

    ctx->pc = 0x136480u;

    // 0x136480: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x136480u;
    {
        const bool branch_taken_0x136480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136480u;
        // 0x136484: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136480) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x136488u;
}
