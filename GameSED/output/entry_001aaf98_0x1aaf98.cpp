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

// Function: entry_001aaf98
// Address: 0x1aaf98 - 0x1aafb4
void entry_001aaf98_0x1aaf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aaf98_0x1aaf98");
#endif

    ctx->pc = 0x1aaf98u;

label_1aaf98:
    // 0x1aaf98: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1aaf98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1aaf9c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AAF9Cu;
    {
        const bool branch_taken_0x1aaf9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAF9Cu;
        // 0x1aafa0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaf9c) {
            ctx->pc = 0x1AAFECu;
            return;
        }
    }
    ctx->pc = 0x1AAFA4u;
    // 0x1aafa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1aafa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aafa8: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x1aafa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
    // 0x1aafac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AAFACu;
    {
        const bool branch_taken_0x1aafac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAFACu;
        // 0x1aafb0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aafac) {
            ctx->pc = 0x1AAF98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aaf98;
        }
    }
    ctx->pc = 0x1AAFB4u;
}
