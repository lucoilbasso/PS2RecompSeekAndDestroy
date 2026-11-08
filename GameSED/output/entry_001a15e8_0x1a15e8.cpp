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

// Function: entry_001a15e8
// Address: 0x1a15e8 - 0x1a15f0
void entry_001a15e8_0x1a15e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a15e8_0x1a15e8");
#endif

    ctx->pc = 0x1a15e8u;

    // 0x1a15e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A15E8u;
    {
        const bool branch_taken_0x1a15e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A15ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A15E8u;
        // 0x1a15ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a15e8) {
            ctx->pc = 0x1A15F8u;
            return;
        }
    }
    ctx->pc = 0x1A15F0u;
}
