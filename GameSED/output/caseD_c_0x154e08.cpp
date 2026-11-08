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

// Function: caseD_c
// Address: 0x154e08 - 0x154e18
void caseD_c_0x154e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x154e08");
#endif

    ctx->pc = 0x154e08u;

    // 0x154e08: 0x8f829144  lw          $v0, -0x6EBC($gp)
    ctx->pc = 0x154e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938948)));
    // 0x154e0c: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x154E0Cu;
    {
        const bool branch_taken_0x154e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154E0Cu;
        // 0x154e10: 0xaf828a30  sw          $v0, -0x75D0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e0c) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x154E14u;
    // 0x154e14: 0x0  nop
    ctx->pc = 0x154e14u;
    // NOP
    ctx->pc = 0x154e18u;
}
