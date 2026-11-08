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

// Function: entry_001b8a30
// Address: 0x1b8a30 - 0x1b8a4c
void entry_001b8a30_0x1b8a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b8a30_0x1b8a30");
#endif

    ctx->pc = 0x1b8a30u;

label_1b8a30:
    // 0x1b8a30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b8a34: 0x0  nop
    ctx->pc = 0x1b8a34u;
    // NOP
    // 0x1b8a38: 0x0  nop
    ctx->pc = 0x1b8a38u;
    // NOP
    // 0x1b8a3c: 0x0  nop
    ctx->pc = 0x1b8a3cu;
    // NOP
    // 0x1b8a40: 0x0  nop
    ctx->pc = 0x1b8a40u;
    // NOP
    // 0x1b8a44: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B8A44u;
    {
        const bool branch_taken_0x1b8a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b8a44) {
            ctx->pc = 0x1B8A30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8a30;
        }
    }
    ctx->pc = 0x1B8A4Cu;
}
