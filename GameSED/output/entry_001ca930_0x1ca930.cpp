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

// Function: entry_001ca930
// Address: 0x1ca930 - 0x1ca95c
void entry_001ca930_0x1ca930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca930_0x1ca930");
#endif

    ctx->pc = 0x1ca930u;

label_1ca930:
    // 0x1ca930: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1ca930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1ca934: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1ca934u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ca938: 0x10ed0008  beq         $a3, $t5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CA938u;
    {
        const bool branch_taken_0x1ca938 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 13));
        ctx->pc = 0x1CA93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA938u;
        // 0x1ca93c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca938) {
            ctx->pc = 0x1CA95Cu;
            return;
        }
    }
    ctx->pc = 0x1CA940u;
    // 0x1ca940: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x1ca940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1ca944: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x1ca944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1ca948: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ca948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ca94c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1ca94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ca950: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ca950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ca954: 0x440fff6  bltz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1CA954u;
    {
        const bool branch_taken_0x1ca954 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA954u;
        // 0x1ca958: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca954) {
            ctx->pc = 0x1CA930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca930;
        }
    }
    ctx->pc = 0x1CA95Cu;
}
