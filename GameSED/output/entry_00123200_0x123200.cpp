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

// Function: entry_00123200
// Address: 0x123200 - 0x123208
void entry_00123200_0x123200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123200_0x123200");
#endif

    ctx->pc = 0x123200u;

    // 0x123200: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x123200u;
    {
        const bool branch_taken_0x123200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x123204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123200u;
        // 0x123204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123200) {
            ctx->pc = 0x123238u;
            return;
        }
    }
    ctx->pc = 0x123208u;
}
