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

// Function: entry_0015c240
// Address: 0x15c240 - 0x15c250
void entry_0015c240_0x15c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c240_0x15c240");
#endif

    ctx->pc = 0x15c240u;

    // 0x15c240: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15C240u;
    {
        const bool branch_taken_0x15c240 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C240u;
        // 0x15c244: 0x111043  sra         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c240) {
            ctx->pc = 0x15C268u;
            return;
        }
    }
    ctx->pc = 0x15C248u;
    // 0x15c248: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15C248u;
    {
        const bool branch_taken_0x15c248 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c248) {
            ctx->pc = 0x15C24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C248u;
            // 0x15c24c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C250u;
            return;
        }
    }
    ctx->pc = 0x15C250u;
}
