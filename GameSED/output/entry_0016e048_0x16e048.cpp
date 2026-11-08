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

// Function: entry_0016e048
// Address: 0x16e048 - 0x16e050
void entry_0016e048_0x16e048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e048_0x16e048");
#endif

    ctx->pc = 0x16e048u;

    // 0x16e048: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16E048u;
    {
        const bool branch_taken_0x16e048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E048u;
        // 0x16e04c: 0x269305b0  addiu       $s3, $s4, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e048) {
            ctx->pc = 0x16E054u;
            return;
        }
    }
    ctx->pc = 0x16E050u;
}
