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

// Function: entry_0018d1a8
// Address: 0x18d1a8 - 0x18d1b8
void entry_0018d1a8_0x18d1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018d1a8_0x18d1a8");
#endif

    ctx->pc = 0x18d1a8u;

    // 0x18d1a8: 0x120201db  beq         $s0, $v0, . + 4 + (0x1DB << 2)
    ctx->pc = 0x18D1A8u;
    {
        const bool branch_taken_0x18d1a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x18D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1A8u;
        // 0x18d1ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1a8) {
            ctx->pc = 0x18D918u;
            return;
        }
    }
    ctx->pc = 0x18D1B0u;
    // 0x18d1b0: 0x10000289  b           . + 4 + (0x289 << 2)
    ctx->pc = 0x18D1B0u;
    {
        const bool branch_taken_0x18d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D1B0u;
        // 0x18d1b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d1b0) {
            ctx->pc = 0x18DBD8u;
            return;
        }
    }
    ctx->pc = 0x18D1B8u;
}
