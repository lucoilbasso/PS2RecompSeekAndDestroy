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

// Function: entry_001c9580
// Address: 0x1c9580 - 0x1c9594
void entry_001c9580_0x1c9580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9580_0x1c9580");
#endif

    ctx->pc = 0x1c9580u;

    // 0x1c9580: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C9580u;
    {
        const bool branch_taken_0x1c9580 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C9580u;
        // 0x1c9584: 0x47102b  sltu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9580) {
            ctx->pc = 0x1C95A8u;
            return;
        }
    }
    ctx->pc = 0x1C9588u;
    // 0x1c9588: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c958c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C958Cu;
    {
        const bool branch_taken_0x1c958c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c958c) {
            ctx->pc = 0x1C9590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C958Cu;
            // 0x1c9590: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C9594u;
            return;
        }
    }
    ctx->pc = 0x1C9594u;
}
