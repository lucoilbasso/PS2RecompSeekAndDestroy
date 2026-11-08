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

// Function: entry_00107d08
// Address: 0x107d08 - 0x107d10
void entry_00107d08_0x107d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107d08_0x107d08");
#endif

    ctx->pc = 0x107d08u;

    // 0x107d08: 0x10800099  beqz        $a0, . + 4 + (0x99 << 2)
    ctx->pc = 0x107D08u;
    {
        const bool branch_taken_0x107d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D08u;
        // 0x107d0c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d08) {
            ctx->pc = 0x107F70u;
            return;
        }
    }
    ctx->pc = 0x107D10u;
}
