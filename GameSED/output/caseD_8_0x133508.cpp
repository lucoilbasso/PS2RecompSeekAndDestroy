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
// Address: 0x133508 - 0x133510
void caseD_8_0x133508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x133508");
#endif

    ctx->pc = 0x133508u;

    // 0x133508: 0x100002e6  b           . + 4 + (0x2E6 << 2)
    ctx->pc = 0x133508u;
    {
        const bool branch_taken_0x133508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133508u;
        // 0x13350c: 0x8e700240  lw          $s0, 0x240($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133508) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133510u;
}
