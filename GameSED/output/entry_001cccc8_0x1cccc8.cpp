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

// Function: entry_001cccc8
// Address: 0x1cccc8 - 0x1cccec
void entry_001cccc8_0x1cccc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cccc8_0x1cccc8");
#endif

    ctx->pc = 0x1cccc8u;

label_1cccc8:
    // 0x1cccc8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cccc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ccccc: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CCCCCu;
    {
        const bool branch_taken_0x1ccccc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccccc) {
            ctx->pc = 0x1CCCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCCCCu;
            // 0x1cccd0: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCCF0u;
            return;
        }
    }
    ctx->pc = 0x1CCCD4u;
    // 0x1cccd4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1cccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1cccd8: 0x0  nop
    ctx->pc = 0x1cccd8u;
    // NOP
    // 0x1cccdc: 0x0  nop
    ctx->pc = 0x1cccdcu;
    // NOP
    // 0x1ccce0: 0x0  nop
    ctx->pc = 0x1ccce0u;
    // NOP
    // 0x1ccce4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1CCCE4u;
    {
        const bool branch_taken_0x1ccce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccce4) {
            ctx->pc = 0x1CCCE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CCCE4u;
            // 0x1ccce8: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CCCC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cccc8;
        }
    }
    ctx->pc = 0x1CCCECu;
}
