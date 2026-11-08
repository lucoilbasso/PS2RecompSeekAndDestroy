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

// Function: entry_00133438
// Address: 0x133438 - 0x133448
void entry_00133438_0x133438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00133438_0x133438");
#endif

    ctx->pc = 0x133438u;

    // 0x133438: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x133438u;
    {
        const bool branch_taken_0x133438 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x133438) {
            ctx->pc = 0x133448u;
            return;
        }
    }
    ctx->pc = 0x133440u;
    // 0x133440: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x133440u;
    {
        const bool branch_taken_0x133440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133440u;
        // 0x133444: 0x8f848a30  lw          $a0, -0x75D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133440) {
            ctx->pc = 0x133464u;
            return;
        }
    }
    ctx->pc = 0x133448u;
}
