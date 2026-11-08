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

// Function: entry_00191a94
// Address: 0x191a94 - 0x191aa8
void entry_00191a94_0x191a94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191a94_0x191a94");
#endif

    ctx->pc = 0x191a94u;

    // 0x191a94: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191A94u;
    {
        const bool branch_taken_0x191a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x191A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191A94u;
        // 0x191a98: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191a94) {
            ctx->pc = 0x191AA8u;
            return;
        }
    }
    ctx->pc = 0x191A9Cu;
    // 0x191a9c: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x191a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x191aa0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x191AA0u;
    {
        const bool branch_taken_0x191aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191AA0u;
        // 0x191aa4: 0xacc20158  sw          $v0, 0x158($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191aa0) {
            ctx->pc = 0x191AB0u;
            return;
        }
    }
    ctx->pc = 0x191AA8u;
}
