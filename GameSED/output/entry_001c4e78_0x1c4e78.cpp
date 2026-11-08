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

// Function: entry_001c4e78
// Address: 0x1c4e78 - 0x1c4e94
void entry_001c4e78_0x1c4e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4e78_0x1c4e78");
#endif

    ctx->pc = 0x1c4e78u;

label_1c4e78:
    // 0x1c4e78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c4e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1c4e7c: 0x0  nop
    ctx->pc = 0x1c4e7cu;
    // NOP
    // 0x1c4e80: 0x0  nop
    ctx->pc = 0x1c4e80u;
    // NOP
    // 0x1c4e84: 0x0  nop
    ctx->pc = 0x1c4e84u;
    // NOP
    // 0x1c4e88: 0x0  nop
    ctx->pc = 0x1c4e88u;
    // NOP
    // 0x1c4e8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C4E8Cu;
    {
        const bool branch_taken_0x1c4e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4e8c) {
            ctx->pc = 0x1C4E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4e78;
        }
    }
    ctx->pc = 0x1C4E94u;
}
