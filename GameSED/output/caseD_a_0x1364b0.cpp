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

// Function: caseD_a
// Address: 0x1364b0 - 0x1364b8
void caseD_a_0x1364b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1364b0");
#endif

    ctx->pc = 0x1364b0u;

    // 0x1364b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1364B0u;
    {
        const bool branch_taken_0x1364b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1364B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1364B0u;
        // 0x1364b4: 0x24130400  addiu       $s3, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1364b0) {
            ctx->pc = 0x1364DCu;
            return;
        }
    }
    ctx->pc = 0x1364B8u;
}
