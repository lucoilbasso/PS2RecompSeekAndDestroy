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

// Function: caseD_58
// Address: 0x1d19b0 - 0x1d19c0
void caseD_58_0x1d19b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_58_0x1d19b0");
#endif

    ctx->pc = 0x1d19b0u;

    // 0x1d19b0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1d19b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1d19b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D19B4u;
    {
        const bool branch_taken_0x1d19b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D19B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D19B4u;
        // 0x1d19b8: 0x2442c410  addiu       $v0, $v0, -0x3BF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d19b4) {
            ctx->pc = 0x1D19C8u;
            return;
        }
    }
    ctx->pc = 0x1D19BCu;
    // 0x1d19bc: 0x0  nop
    ctx->pc = 0x1d19bcu;
    // NOP
    ctx->pc = 0x1d19c0u;
}
