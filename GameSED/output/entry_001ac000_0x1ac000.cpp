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

// Function: entry_001ac000
// Address: 0x1ac000 - 0x1ac01c
void entry_001ac000_0x1ac000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac000_0x1ac000");
#endif

    ctx->pc = 0x1ac000u;

label_1ac000:
    // 0x1ac000: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1ac000u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ac004: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AC004u;
    {
        const bool branch_taken_0x1ac004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC004u;
        // 0x1ac008: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac004) {
            ctx->pc = 0x1AC068u;
            return;
        }
    }
    ctx->pc = 0x1AC00Cu;
    // 0x1ac00c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ac00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ac010: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1ac010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1ac014: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AC014u;
    {
        const bool branch_taken_0x1ac014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC014u;
        // 0x1ac018: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac014) {
            ctx->pc = 0x1AC000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac000;
        }
    }
    ctx->pc = 0x1AC01Cu;
}
