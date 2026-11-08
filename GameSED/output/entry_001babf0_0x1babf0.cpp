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

// Function: entry_001babf0
// Address: 0x1babf0 - 0x1bac14
void entry_001babf0_0x1babf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001babf0_0x1babf0");
#endif

    ctx->pc = 0x1babf0u;

label_1babf0:
    // 0x1babf0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1babf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1babf4: 0x0  nop
    ctx->pc = 0x1babf4u;
    // NOP
    // 0x1babf8: 0x0  nop
    ctx->pc = 0x1babf8u;
    // NOP
    // 0x1babfc: 0x0  nop
    ctx->pc = 0x1babfcu;
    // NOP
    // 0x1bac00: 0x0  nop
    ctx->pc = 0x1bac00u;
    // NOP
    // 0x1bac04: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BAC04u;
    {
        const bool branch_taken_0x1bac04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bac04) {
            ctx->pc = 0x1BABF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1babf0;
        }
    }
    ctx->pc = 0x1BAC0Cu;
    // 0x1bac0c: 0x1000ffc6  b           . + 4 + (-0x3A << 2)
    ctx->pc = 0x1BAC0Cu;
    {
        const bool branch_taken_0x1bac0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bac0c) {
            ctx->pc = 0x1BAB28u;
            return;
        }
    }
    ctx->pc = 0x1BAC14u;
}
