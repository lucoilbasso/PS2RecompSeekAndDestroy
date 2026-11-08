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

// Function: entry_001a7860
// Address: 0x1a7860 - 0x1a7870
void entry_001a7860_0x1a7860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7860_0x1a7860");
#endif

    ctx->pc = 0x1a7860u;

    // 0x1a7860: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1a7860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1a7864: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1A7864u;
    {
        const bool branch_taken_0x1a7864 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7864) {
            ctx->pc = 0x1A7868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A7864u;
            // 0x1a7868: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A7840u;
            return;
        }
    }
    ctx->pc = 0x1A786Cu;
    // 0x1a786c: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x1a786cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    ctx->pc = 0x1a7870u;
}
