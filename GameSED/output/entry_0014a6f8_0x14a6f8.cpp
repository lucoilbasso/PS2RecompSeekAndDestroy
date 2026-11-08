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

// Function: entry_0014a6f8
// Address: 0x14a6f8 - 0x14a700
void entry_0014a6f8_0x14a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014a6f8_0x14a6f8");
#endif

    ctx->pc = 0x14a6f8u;

    // 0x14a6f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14A6F8u;
    {
        const bool branch_taken_0x14a6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A6F8u;
        // 0x14a6fc: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a6f8) {
            ctx->pc = 0x14A704u;
            return;
        }
    }
    ctx->pc = 0x14A700u;
}
