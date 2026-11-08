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

// Function: entry_001b8a88
// Address: 0x1b8a88 - 0x1b8aa4
void entry_001b8a88_0x1b8a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8a88_0x1b8a88");
#endif

    ctx->pc = 0x1b8a88u;

label_1b8a88:
    // 0x1b8a88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b8a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b8a8c: 0x0  nop
    ctx->pc = 0x1b8a8cu;
    // NOP
    // 0x1b8a90: 0x0  nop
    ctx->pc = 0x1b8a90u;
    // NOP
    // 0x1b8a94: 0x0  nop
    ctx->pc = 0x1b8a94u;
    // NOP
    // 0x1b8a98: 0x0  nop
    ctx->pc = 0x1b8a98u;
    // NOP
    // 0x1b8a9c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B8A9Cu;
    {
        const bool branch_taken_0x1b8a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8a9c) {
            ctx->pc = 0x1B8A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8a88;
        }
    }
    ctx->pc = 0x1B8AA4u;
}
