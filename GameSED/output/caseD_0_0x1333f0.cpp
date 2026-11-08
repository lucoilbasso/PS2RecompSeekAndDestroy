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
// Address: 0x1333f0 - 0x1333f8
void caseD_0_0x1333f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1333f0");
#endif

    ctx->pc = 0x1333f0u;

    // 0x1333f0: 0x1000032c  b           . + 4 + (0x32C << 2)
    ctx->pc = 0x1333F0u;
    {
        const bool branch_taken_0x1333f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1333F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1333F0u;
        // 0x1333f4: 0x8e700098  lw          $s0, 0x98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1333f0) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x1333F8u;
}
