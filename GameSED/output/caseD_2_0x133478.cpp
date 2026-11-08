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
// Address: 0x133478 - 0x133480
void caseD_2_0x133478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x133478");
#endif

    ctx->pc = 0x133478u;

    // 0x133478: 0x1000030a  b           . + 4 + (0x30A << 2)
    ctx->pc = 0x133478u;
    {
        const bool branch_taken_0x133478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13347Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133478u;
        // 0x13347c: 0x8e700184  lw          $s0, 0x184($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133478) {
            ctx->pc = 0x1340A4u;
            return;
        }
    }
    ctx->pc = 0x133480u;
}
