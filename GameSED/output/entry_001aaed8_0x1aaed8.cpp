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

// Function: entry_001aaed8
// Address: 0x1aaed8 - 0x1aaef4
void entry_001aaed8_0x1aaed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaed8_0x1aaed8");
#endif

    ctx->pc = 0x1aaed8u;

label_1aaed8:
    // 0x1aaed8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1aaed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1aaedc: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1AAEDCu;
    {
        const bool branch_taken_0x1aaedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEDCu;
        // 0x1aaee0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaedc) {
            ctx->pc = 0x1AAFC8u;
            return;
        }
    }
    ctx->pc = 0x1AAEE4u;
    // 0x1aaee4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aaee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aaee8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1aaee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1aaeec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AAEECu;
    {
        const bool branch_taken_0x1aaeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAEECu;
        // 0x1aaef0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaeec) {
            ctx->pc = 0x1AAED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aaed8;
        }
    }
    ctx->pc = 0x1AAEF4u;
}
