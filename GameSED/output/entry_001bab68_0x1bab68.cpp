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

// Function: entry_001bab68
// Address: 0x1bab68 - 0x1bab8c
void entry_001bab68_0x1bab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bab68_0x1bab68");
#endif

    ctx->pc = 0x1bab68u;

label_1bab68:
    // 0x1bab68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bab6c: 0x0  nop
    ctx->pc = 0x1bab6cu;
    // NOP
    // 0x1bab70: 0x0  nop
    ctx->pc = 0x1bab70u;
    // NOP
    // 0x1bab74: 0x0  nop
    ctx->pc = 0x1bab74u;
    // NOP
    // 0x1bab78: 0x0  nop
    ctx->pc = 0x1bab78u;
    // NOP
    // 0x1bab7c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BAB7Cu;
    {
        const bool branch_taken_0x1bab7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bab7c) {
            ctx->pc = 0x1BAB68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bab68;
        }
    }
    ctx->pc = 0x1BAB84u;
    // 0x1bab84: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1BAB84u;
    {
        const bool branch_taken_0x1bab84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bab84) {
            ctx->pc = 0x1BAB28u;
            return;
        }
    }
    ctx->pc = 0x1BAB8Cu;
}
