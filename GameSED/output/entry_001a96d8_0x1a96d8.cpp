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

// Function: entry_001a96d8
// Address: 0x1a96d8 - 0x1a96f4
void entry_001a96d8_0x1a96d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a96d8_0x1a96d8");
#endif

    ctx->pc = 0x1a96d8u;

label_1a96d8:
    // 0x1a96d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a96dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1a96dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1a96e0: 0x0  nop
    ctx->pc = 0x1a96e0u;
    // NOP
    // 0x1a96e4: 0x0  nop
    ctx->pc = 0x1a96e4u;
    // NOP
    // 0x1a96e8: 0x0  nop
    ctx->pc = 0x1a96e8u;
    // NOP
    // 0x1a96ec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A96ECu;
    {
        const bool branch_taken_0x1a96ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A96F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A96ECu;
        // 0x1a96f0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a96ec) {
            ctx->pc = 0x1A96D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a96d8;
        }
    }
    ctx->pc = 0x1A96F4u;
}
