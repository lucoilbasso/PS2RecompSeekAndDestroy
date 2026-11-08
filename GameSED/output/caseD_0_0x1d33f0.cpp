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
// Address: 0x1d33f0 - 0x1d3400
void caseD_0_0x1d33f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x1d33f0");
#endif

    ctx->pc = 0x1d33f0u;

    // 0x1d33f0: 0x24130012  addiu       $s3, $zero, 0x12
    ctx->pc = 0x1d33f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1d33f4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D33F4u;
    {
        const bool branch_taken_0x1d33f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D33F4u;
        // 0x1d33f8: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33f4) {
            ctx->pc = 0x1D344Cu;
            return;
        }
    }
    ctx->pc = 0x1D33FCu;
    // 0x1d33fc: 0x0  nop
    ctx->pc = 0x1d33fcu;
    // NOP
    ctx->pc = 0x1d3400u;
}
