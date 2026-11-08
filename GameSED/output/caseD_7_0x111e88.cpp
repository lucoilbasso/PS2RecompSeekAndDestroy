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
// Address: 0x111e88 - 0x111e90
void caseD_7_0x111e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x111e88");
#endif

    ctx->pc = 0x111e88u;

    // 0x111e88: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x111E88u;
    {
        const bool branch_taken_0x111e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E88u;
        // 0x111e8c: 0x8e173630  lw          $s7, 0x3630($s0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e88) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x111E90u;
}
