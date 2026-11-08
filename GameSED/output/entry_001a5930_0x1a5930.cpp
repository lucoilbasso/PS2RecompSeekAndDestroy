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

// Function: entry_001a5930
// Address: 0x1a5930 - 0x1a5950
void entry_001a5930_0x1a5930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5930_0x1a5930");
#endif

    ctx->pc = 0x1a5930u;

label_1a5930:
    // 0x1a5930: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a5930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a5934: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a5934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a5938: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1a5938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1a593c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a5940: 0x0  nop
    ctx->pc = 0x1a5940u;
    // NOP
    // 0x1a5944: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A5944u;
    {
        const bool branch_taken_0x1a5944 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1A5948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5944u;
        // 0x1a5948: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5944) {
            ctx->pc = 0x1A5930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5930;
        }
    }
    ctx->pc = 0x1A594Cu;
    // 0x1a594c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x1a594cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    ctx->pc = 0x1a5950u;
}
