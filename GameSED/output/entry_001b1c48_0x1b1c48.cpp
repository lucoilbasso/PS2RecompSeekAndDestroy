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

// Function: entry_001b1c48
// Address: 0x1b1c48 - 0x1b1c64
void entry_001b1c48_0x1b1c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1c48_0x1b1c48");
#endif

    ctx->pc = 0x1b1c48u;

label_1b1c48:
    // 0x1b1c48: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1b1c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c4c: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1C4Cu;
    {
        const bool branch_taken_0x1b1c4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1c4c) {
            ctx->pc = 0x1B1C68u;
            return;
        }
    }
    ctx->pc = 0x1B1C54u;
    // 0x1b1c54: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1b1c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1b1c58: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B1C58u;
    {
        const bool branch_taken_0x1b1c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1B1C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C58u;
        // 0x1b1c5c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c58) {
            ctx->pc = 0x1B1C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b1c48;
        }
    }
    ctx->pc = 0x1B1C60u;
    // 0x1b1c60: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1b1c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    ctx->pc = 0x1b1c64u;
}
