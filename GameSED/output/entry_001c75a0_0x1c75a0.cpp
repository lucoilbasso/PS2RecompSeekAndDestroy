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

// Function: entry_001c75a0
// Address: 0x1c75a0 - 0x1c75c8
void entry_001c75a0_0x1c75a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c75a0_0x1c75a0");
#endif

    ctx->pc = 0x1c75a0u;

label_1c75a0:
    // 0x1c75a0: 0x8fa80250  lw          $t0, 0x250($sp)
    ctx->pc = 0x1c75a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1c75a4: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1c75a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1c75a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c75a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c75ac: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x1c75acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x1c75b0: 0x2508ffe8  addiu       $t0, $t0, -0x18
    ctx->pc = 0x1c75b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
    // 0x1c75b4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C75B4u;
    {
        const bool branch_taken_0x1c75b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C75B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C75B4u;
        // 0x1c75b8: 0xafa80250  sw          $t0, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c75b4) {
            ctx->pc = 0x1C75A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c75a0;
        }
    }
    ctx->pc = 0x1C75BCu;
    // 0x1c75bc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C75BCu;
    {
        const bool branch_taken_0x1c75bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c75bc) {
            ctx->pc = 0x1C7688u;
            return;
        }
    }
    ctx->pc = 0x1C75C4u;
    // 0x1c75c4: 0x0  nop
    ctx->pc = 0x1c75c4u;
    // NOP
    ctx->pc = 0x1c75c8u;
}
