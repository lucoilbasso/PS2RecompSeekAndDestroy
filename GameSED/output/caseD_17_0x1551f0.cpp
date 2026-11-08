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

// Function: caseD_17
// Address: 0x1551f0 - 0x155200
void caseD_17_0x1551f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_17_0x1551f0");
#endif

    ctx->pc = 0x1551f0u;

    // 0x1551f0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1551f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1551f4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1551F4u;
    {
        const bool branch_taken_0x1551f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1551F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1551F4u;
        // 0x1551f8: 0xae02068c  sw          $v0, 0x68C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1551f4) {
            ctx->pc = 0x15531Cu;
            return;
        }
    }
    ctx->pc = 0x1551FCu;
    // 0x1551fc: 0x0  nop
    ctx->pc = 0x1551fcu;
    // NOP
    ctx->pc = 0x155200u;
}
