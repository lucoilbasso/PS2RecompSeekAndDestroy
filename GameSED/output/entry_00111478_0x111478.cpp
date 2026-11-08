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

// Function: entry_00111478
// Address: 0x111478 - 0x111488
void entry_00111478_0x111478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111478_0x111478");
#endif

    ctx->pc = 0x111478u;

    // 0x111478: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x111478u;
    {
        const bool branch_taken_0x111478 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x111478) {
            ctx->pc = 0x111488u;
            return;
        }
    }
    ctx->pc = 0x111480u;
    // 0x111480: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x111480u;
    {
        const bool branch_taken_0x111480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111480u;
        // 0x111484: 0x8e8201b4  lw          $v0, 0x1B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111480) {
            ctx->pc = 0x1114C4u;
            return;
        }
    }
    ctx->pc = 0x111488u;
}
