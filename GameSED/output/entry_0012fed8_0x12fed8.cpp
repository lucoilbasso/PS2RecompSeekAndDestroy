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

// Function: entry_0012fed8
// Address: 0x12fed8 - 0x12ff14
void entry_0012fed8_0x12fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012fed8_0x12fed8");
#endif

    ctx->pc = 0x12fed8u;

label_12fed8:
    // 0x12fed8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12fedc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12fedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12fee0: 0x0  nop
    ctx->pc = 0x12fee0u;
    // NOP
    // 0x12fee4: 0x0  nop
    ctx->pc = 0x12fee4u;
    // NOP
    // 0x12fee8: 0x0  nop
    ctx->pc = 0x12fee8u;
    // NOP
    // 0x12feec: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12FEECu;
    {
        const bool branch_taken_0x12feec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEECu;
        // 0x12fef0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12feec) {
            ctx->pc = 0x12FED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fed8;
        }
    }
    ctx->pc = 0x12FEF4u;
    // 0x12fef4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x12fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fef8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12fefc: 0x8e6300c0  lw          $v1, 0xC0($s3)
    ctx->pc = 0x12fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x12ff00: 0x8e64011c  lw          $a0, 0x11C($s3)
    ctx->pc = 0x12ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x12ff04: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12ff08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12ff08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12ff0c: 0xae6300c0  sw          $v1, 0xC0($s3)
    ctx->pc = 0x12ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 3));
    // 0x12ff10: 0xae64011c  sw          $a0, 0x11C($s3)
    ctx->pc = 0x12ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 284), GPR_U32(ctx, 4));
    ctx->pc = 0x12ff14u;
}
