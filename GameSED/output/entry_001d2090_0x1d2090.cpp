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

// Function: entry_001d2090
// Address: 0x1d2090 - 0x1d20a8
void entry_001d2090_0x1d2090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2090_0x1d2090");
#endif

    ctx->pc = 0x1d2090u;

    // 0x1d2090: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1d2090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x1d2094: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x1d2094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x1d2098: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1D2098u;
    {
        const bool branch_taken_0x1d2098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2098) {
            ctx->pc = 0x1D209Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2098u;
            // 0x1d209c: 0xae740004  sw          $s4, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2048u;
            return;
        }
    }
    ctx->pc = 0x1D20A0u;
    // 0x1d20a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D20A0u;
    {
        const bool branch_taken_0x1d20a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20A0u;
        // 0x1d20a4: 0xae700004  sw          $s0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d20a0) {
            ctx->pc = 0x1D20ACu;
            return;
        }
    }
    ctx->pc = 0x1D20A8u;
}
