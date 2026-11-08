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

// Function: entry_0019a018
// Address: 0x19a018 - 0x19a020
void entry_0019a018_0x19a018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a018_0x19a018");
#endif

    ctx->pc = 0x19a018u;

    // 0x19a018: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A018u;
    {
        const bool branch_taken_0x19a018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A018u;
        // 0x19a01c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a018) {
            ctx->pc = 0x19A02Cu;
            return;
        }
    }
    ctx->pc = 0x19A020u;
}
