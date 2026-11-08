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

// Function: entry_00188460
// Address: 0x188460 - 0x188480
void entry_00188460_0x188460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188460_0x188460");
#endif

    ctx->pc = 0x188460u;

label_188460:
    // 0x188460: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x188460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x188464: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x188464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x188468: 0x0  nop
    ctx->pc = 0x188468u;
    // NOP
    // 0x18846c: 0x0  nop
    ctx->pc = 0x18846cu;
    // NOP
    // 0x188470: 0x0  nop
    ctx->pc = 0x188470u;
    // NOP
    // 0x188474: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x188474u;
    {
        const bool branch_taken_0x188474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188474) {
            ctx->pc = 0x188460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188460;
        }
    }
    ctx->pc = 0x18847Cu;
    // 0x18847c: 0x0  nop
    ctx->pc = 0x18847cu;
    // NOP
    ctx->pc = 0x188480u;
}
