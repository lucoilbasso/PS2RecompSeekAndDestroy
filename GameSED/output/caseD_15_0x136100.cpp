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

// Function: caseD_15
// Address: 0x136100 - 0x136108
void caseD_15_0x136100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_15_0x136100");
#endif

    ctx->pc = 0x136100u;

    // 0x136100: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x136100u;
    {
        const bool branch_taken_0x136100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136100u;
        // 0x136104: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136100) {
            ctx->pc = 0x13613Cu;
            return;
        }
    }
    ctx->pc = 0x136108u;
}
