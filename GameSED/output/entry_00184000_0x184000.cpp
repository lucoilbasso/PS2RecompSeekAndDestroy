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

// Function: entry_00184000
// Address: 0x184000 - 0x184008
void entry_00184000_0x184000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184000_0x184000");
#endif

    ctx->pc = 0x184000u;

    // 0x184000: 0x1449fff3  bne         $v0, $t1, . + 4 + (-0xD << 2)
    ctx->pc = 0x184000u;
    {
        const bool branch_taken_0x184000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x184004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184000u;
        // 0x184004: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184000) {
            ctx->pc = 0x183FD0u;
            return;
        }
    }
    ctx->pc = 0x184008u;
}
