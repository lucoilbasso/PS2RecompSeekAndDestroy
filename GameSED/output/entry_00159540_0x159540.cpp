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

// Function: entry_00159540
// Address: 0x159540 - 0x159548
void entry_00159540_0x159540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00159540_0x159540");
#endif

    ctx->pc = 0x159540u;

    // 0x159540: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x159540u;
    {
        const bool branch_taken_0x159540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159540u;
        // 0x159544: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159540) {
            ctx->pc = 0x15954Cu;
            return;
        }
    }
    ctx->pc = 0x159548u;
}
