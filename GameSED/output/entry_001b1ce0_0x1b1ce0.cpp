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

// Function: entry_001b1ce0
// Address: 0x1b1ce0 - 0x1b1cfc
void entry_001b1ce0_0x1b1ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1ce0_0x1b1ce0");
#endif

    ctx->pc = 0x1b1ce0u;

label_1b1ce0:
    // 0x1b1ce0: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1b1ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ce4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1CE4u;
    {
        const bool branch_taken_0x1b1ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1ce4) {
            ctx->pc = 0x1B1D00u;
            return;
        }
    }
    ctx->pc = 0x1B1CECu;
    // 0x1b1cec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1b1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1b1cf0: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B1CF0u;
    {
        const bool branch_taken_0x1b1cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CF0u;
        // 0x1b1cf4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1cf0) {
            ctx->pc = 0x1B1CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1ce0;
        }
    }
    ctx->pc = 0x1B1CF8u;
    // 0x1b1cf8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1b1cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->pc = 0x1b1cfcu;
}
