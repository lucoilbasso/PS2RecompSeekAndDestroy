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
// Address: 0x136470 - 0x136478
void caseD_2_0x136470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x136470");
#endif

    ctx->pc = 0x136470u;

    // 0x136470: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x136470u;
    {
        const bool branch_taken_0x136470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136470u;
        // 0x136474: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136470) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x136478u;
}
