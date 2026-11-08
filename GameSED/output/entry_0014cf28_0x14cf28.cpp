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

// Function: entry_0014cf28
// Address: 0x14cf28 - 0x14cf30
void entry_0014cf28_0x14cf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014cf28_0x14cf28");
#endif

    ctx->pc = 0x14cf28u;

    // 0x14cf28: 0x54490003  bnel        $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14CF28u;
    {
        const bool branch_taken_0x14cf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x14cf28) {
            ctx->pc = 0x14CF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14CF28u;
            // 0x14cf2c: 0x8ce201f4  lw          $v0, 0x1F4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 500)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14CF38u;
            return;
        }
    }
    ctx->pc = 0x14CF30u;
}
