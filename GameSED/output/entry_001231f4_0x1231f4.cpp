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

// Function: entry_001231f4
// Address: 0x1231f4 - 0x123200
void entry_001231f4_0x1231f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001231f4_0x1231f4");
#endif

    ctx->pc = 0x1231f4u;

    // 0x1231f4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1231F4u;
    {
        const bool branch_taken_0x1231f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1231F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1231F4u;
        // 0x1231f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1231f4) {
            ctx->pc = 0x123238u;
            return;
        }
    }
    ctx->pc = 0x1231FCu;
    // 0x1231fc: 0x0  nop
    ctx->pc = 0x1231fcu;
    // NOP
    ctx->pc = 0x123200u;
}
