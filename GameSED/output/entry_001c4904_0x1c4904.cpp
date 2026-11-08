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

// Function: entry_001c4904
// Address: 0x1c4904 - 0x1c490c
void entry_001c4904_0x1c4904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4904_0x1c4904");
#endif

    ctx->pc = 0x1c4904u;

    // 0x1c4904: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4904u;
    {
        const bool branch_taken_0x1c4904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4904u;
        // 0x1c4908: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4904) {
            ctx->pc = 0x1C4928u;
            return;
        }
    }
    ctx->pc = 0x1C490Cu;
}
