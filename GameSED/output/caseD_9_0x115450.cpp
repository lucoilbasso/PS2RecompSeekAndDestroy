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

// Function: caseD_9
// Address: 0x115450 - 0x115458
void caseD_9_0x115450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x115450");
#endif

    ctx->pc = 0x115450u;

    // 0x115450: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x115450u;
    {
        const bool branch_taken_0x115450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115450u;
        // 0x115454: 0x26240180  addiu       $a0, $s1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115450) {
            ctx->pc = 0x115464u;
            return;
        }
    }
    ctx->pc = 0x115458u;
}
