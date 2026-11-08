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

// Function: entry_001d5688
// Address: 0x1d5688 - 0x1d5690
void entry_001d5688_0x1d5688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5688_0x1d5688");
#endif

    ctx->pc = 0x1d5688u;

    // 0x1d5688: 0x4800007  bltz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5688u;
    {
        const bool branch_taken_0x1d5688 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1D568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5688u;
        // 0x1d568c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5688) {
            ctx->pc = 0x1D56A8u;
            return;
        }
    }
    ctx->pc = 0x1D5690u;
}
