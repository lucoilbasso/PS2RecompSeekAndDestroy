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

// Function: entry_001d1c20
// Address: 0x1d1c20 - 0x1d1c38
void entry_001d1c20_0x1d1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1c20_0x1d1c20");
#endif

    ctx->pc = 0x1d1c20u;

    // 0x1d1c20: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1d1c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1d1c24: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d1c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d1c28: 0x5040ffe9  beql        $v0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1D1C28u;
    {
        const bool branch_taken_0x1d1c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c28) {
            ctx->pc = 0x1D1C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1C28u;
            // 0x1d1c2c: 0xae660004  sw          $a2, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D1BD0u;
            return;
        }
    }
    ctx->pc = 0x1D1C30u;
    // 0x1d1c30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D1C30u;
    {
        const bool branch_taken_0x1d1c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1C30u;
        // 0x1d1c34: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1c30) {
            ctx->pc = 0x1D1C3Cu;
            return;
        }
    }
    ctx->pc = 0x1D1C38u;
}
