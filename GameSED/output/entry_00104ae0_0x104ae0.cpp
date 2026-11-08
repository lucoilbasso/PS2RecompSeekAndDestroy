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

// Function: entry_00104ae0
// Address: 0x104ae0 - 0x104ae8
void entry_00104ae0_0x104ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00104ae0_0x104ae0");
#endif

    ctx->pc = 0x104ae0u;

    // 0x104ae0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x104AE0u;
    {
        const bool branch_taken_0x104ae0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x104AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AE0u;
        // 0x104ae4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ae0) {
            ctx->pc = 0x104B20u;
            return;
        }
    }
    ctx->pc = 0x104AE8u;
}
