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

// Function: entry_00111290
// Address: 0x111290 - 0x1112a0
void entry_00111290_0x111290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111290_0x111290");
#endif

    ctx->pc = 0x111290u;

    // 0x111290: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x111290u;
    {
        const bool branch_taken_0x111290 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x111290) {
            ctx->pc = 0x1112A0u;
            return;
        }
    }
    ctx->pc = 0x111298u;
    // 0x111298: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x111298u;
    {
        const bool branch_taken_0x111298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111298u;
        // 0x11129c: 0x8ea201b4  lw          $v0, 0x1B4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111298) {
            ctx->pc = 0x11138Cu;
            return;
        }
    }
    ctx->pc = 0x1112A0u;
}
