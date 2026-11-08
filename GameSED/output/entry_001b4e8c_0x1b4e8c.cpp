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

// Function: entry_001b4e8c
// Address: 0x1b4e8c - 0x1b4ea0
void entry_001b4e8c_0x1b4e8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4e8c_0x1b4e8c");
#endif

    ctx->pc = 0x1b4e8cu;

    // 0x1b4e8c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B4E8Cu;
    {
        const bool branch_taken_0x1b4e8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b4e8c) {
            ctx->pc = 0x1B4EA0u;
            return;
        }
    }
    ctx->pc = 0x1B4E94u;
    // 0x1b4e94: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x1b4e94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1b4e98: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B4E98u;
    {
        const bool branch_taken_0x1b4e98 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E98u;
        // 0x1b4e9c: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e98) {
            ctx->pc = 0x1B4EB0u;
            return;
        }
    }
    ctx->pc = 0x1B4EA0u;
}
