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

// Function: entry_001bae40
// Address: 0x1bae40 - 0x1bae64
void entry_001bae40_0x1bae40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bae40_0x1bae40");
#endif

    ctx->pc = 0x1bae40u;

label_1bae40:
    // 0x1bae40: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bae44: 0x0  nop
    ctx->pc = 0x1bae44u;
    // NOP
    // 0x1bae48: 0x0  nop
    ctx->pc = 0x1bae48u;
    // NOP
    // 0x1bae4c: 0x0  nop
    ctx->pc = 0x1bae4cu;
    // NOP
    // 0x1bae50: 0x0  nop
    ctx->pc = 0x1bae50u;
    // NOP
    // 0x1bae54: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BAE54u;
    {
        const bool branch_taken_0x1bae54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bae54) {
            ctx->pc = 0x1BAE40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bae40;
        }
    }
    ctx->pc = 0x1BAE5Cu;
    // 0x1bae5c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BAE5Cu;
    {
        const bool branch_taken_0x1bae5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BAE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BAE5Cu;
        // 0x1bae60: 0x26b0d8d0  addiu       $s0, $s5, -0x2730 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bae5c) {
            ctx->pc = 0x1BAE00u;
            return;
        }
    }
    ctx->pc = 0x1BAE64u;
}
