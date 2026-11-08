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

// Function: caseD_5
// Address: 0x111e68 - 0x111e78
void caseD_5_0x111e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x111e68");
#endif

    ctx->pc = 0x111e68u;

    // 0x111e68: 0x8e133630  lw          $s3, 0x3630($s0)
    ctx->pc = 0x111e68u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13872)));
    // 0x111e6c: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x111E6Cu;
    {
        const bool branch_taken_0x111e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111E6Cu;
        // 0x111e70: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111e6c) {
            ctx->pc = 0x112124u;
            return;
        }
    }
    ctx->pc = 0x111E74u;
    // 0x111e74: 0x0  nop
    ctx->pc = 0x111e74u;
    // NOP
    ctx->pc = 0x111e78u;
}
