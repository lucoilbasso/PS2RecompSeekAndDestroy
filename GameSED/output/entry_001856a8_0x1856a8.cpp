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

// Function: entry_001856a8
// Address: 0x1856a8 - 0x1856b0
void entry_001856a8_0x1856a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001856a8_0x1856a8");
#endif

    ctx->pc = 0x1856a8u;

    // 0x1856a8: 0x12200087  beqz        $s1, . + 4 + (0x87 << 2)
    ctx->pc = 0x1856A8u;
    {
        const bool branch_taken_0x1856a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1856ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856A8u;
        // 0x1856ac: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856a8) {
            ctx->pc = 0x1858C8u;
            return;
        }
    }
    ctx->pc = 0x1856B0u;
}
