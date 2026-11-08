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

// Function: caseD_16
// Address: 0x136130 - 0x136138
void caseD_16_0x136130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_16_0x136130");
#endif

    ctx->pc = 0x136130u;

    // 0x136130: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136130u;
    {
        const bool branch_taken_0x136130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136130u;
        // 0x136134: 0x24040400  addiu       $a0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136130) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136138u;
}
