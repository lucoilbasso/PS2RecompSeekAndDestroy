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

// Function: entry_0012e760
// Address: 0x12e760 - 0x12e788
void entry_0012e760_0x12e760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012e760_0x12e760");
#endif

    ctx->pc = 0x12e760u;

label_12e760:
    // 0x12e760: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12e760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12e764: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12e764u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12e768: 0x0  nop
    ctx->pc = 0x12e768u;
    // NOP
    // 0x12e76c: 0x0  nop
    ctx->pc = 0x12e76cu;
    // NOP
    // 0x12e770: 0x0  nop
    ctx->pc = 0x12e770u;
    // NOP
    // 0x12e774: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E774u;
    {
        const bool branch_taken_0x12e774 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x12E778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E774u;
        // 0x12e778: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e774) {
            ctx->pc = 0x12E760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12e760;
        }
    }
    ctx->pc = 0x12E77Cu;
    // 0x12e77c: 0x52000021  beql        $s0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x12E77Cu;
    {
        const bool branch_taken_0x12e77c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e77c) {
            ctx->pc = 0x12E780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12E77Cu;
            // 0x12e780: 0x8e240184  lw          $a0, 0x184($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12E804u;
            return;
        }
    }
    ctx->pc = 0x12E784u;
    // 0x12e784: 0x3c130025  lui         $s3, 0x25
    ctx->pc = 0x12e784u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)37 << 16));
    ctx->pc = 0x12e788u;
}
