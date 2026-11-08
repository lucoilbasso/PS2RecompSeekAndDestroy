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

// Function: entry_001c8460
// Address: 0x1c8460 - 0x1c8474
void entry_001c8460_0x1c8460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c8460_0x1c8460");
#endif

    ctx->pc = 0x1c8460u;

    // 0x1c8460: 0x15200009  bnez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C8460u;
    {
        const bool branch_taken_0x1c8460 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8460u;
        // 0x1c8464: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8460) {
            ctx->pc = 0x1C8488u;
            return;
        }
    }
    ctx->pc = 0x1C8468u;
    // 0x1c8468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c8468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c846c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1C846Cu;
    {
        const bool branch_taken_0x1c846c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c846c) {
            ctx->pc = 0x1C8470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C846Cu;
            // 0x1c8470: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C8474u;
            return;
        }
    }
    ctx->pc = 0x1C8474u;
}
