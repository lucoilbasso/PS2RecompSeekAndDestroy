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

// Function: entry_001b21c0
// Address: 0x1b21c0 - 0x1b21e0
void entry_001b21c0_0x1b21c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b21c0_0x1b21c0");
#endif

    ctx->pc = 0x1b21c0u;

label_1b21c0:
    // 0x1b21c0: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x1b21c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1b21c4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1b21c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b21c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b21c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b21cc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1b21ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1b21d0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1b21d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1b21d4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1b21d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b21d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B21D8u;
    {
        const bool branch_taken_0x1b21d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B21D8u;
        // 0x1b21dc: 0xa61021  addu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21d8) {
            ctx->pc = 0x1B21C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b21c0;
        }
    }
    ctx->pc = 0x1B21E0u;
}
