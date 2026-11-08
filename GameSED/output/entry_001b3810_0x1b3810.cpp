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

// Function: entry_001b3810
// Address: 0x1b3810 - 0x1b3820
void entry_001b3810_0x1b3810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3810_0x1b3810");
#endif

    ctx->pc = 0x1b3810u;

    // 0x1b3810: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3810u;
    {
        const bool branch_taken_0x1b3810 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B3814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3810u;
        // 0x1b3814: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3810) {
            ctx->pc = 0x1B3820u;
            return;
        }
    }
    ctx->pc = 0x1B3818u;
    // 0x1b3818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3818u;
    {
        const bool branch_taken_0x1b3818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3818u;
        // 0x1b381c: 0xae20041c  sw          $zero, 0x41C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3818) {
            ctx->pc = 0x1B382Cu;
            return;
        }
    }
    ctx->pc = 0x1B3820u;
}
