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

// Function: entry_001cc710
// Address: 0x1cc710 - 0x1cc718
void entry_001cc710_0x1cc710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc710_0x1cc710");
#endif

    ctx->pc = 0x1cc710u;

    // 0x1cc710: 0x11a00003  beqz        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC710u;
    {
        const bool branch_taken_0x1cc710 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC710u;
        // 0x1cc714: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc710) {
            ctx->pc = 0x1CC720u;
            return;
        }
    }
    ctx->pc = 0x1CC718u;
}
