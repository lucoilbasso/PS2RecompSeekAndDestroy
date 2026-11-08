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

// Function: entry_00104730
// Address: 0x104730 - 0x104738
void entry_00104730_0x104730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104730_0x104730");
#endif

    ctx->pc = 0x104730u;

    // 0x104730: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x104730u;
    {
        const bool branch_taken_0x104730 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x104734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104730u;
        // 0x104734: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104730) {
            ctx->pc = 0x104748u;
            return;
        }
    }
    ctx->pc = 0x104738u;
}
