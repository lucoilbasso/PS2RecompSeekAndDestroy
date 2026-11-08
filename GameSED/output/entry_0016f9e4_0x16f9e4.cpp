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

// Function: entry_0016f9e4
// Address: 0x16f9e4 - 0x16f9ec
void entry_0016f9e4_0x16f9e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f9e4_0x16f9e4");
#endif

    ctx->pc = 0x16f9e4u;

    // 0x16f9e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F9E4u;
    {
        const bool branch_taken_0x16f9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F9E4u;
        // 0x16f9e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9e4) {
            ctx->pc = 0x16F9F4u;
            return;
        }
    }
    ctx->pc = 0x16F9ECu;
}
