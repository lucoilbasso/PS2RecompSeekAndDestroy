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

// Function: entry_00176cd0
// Address: 0x176cd0 - 0x176cf0
void entry_00176cd0_0x176cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176cd0_0x176cd0");
#endif

    ctx->pc = 0x176cd0u;

label_176cd0:
    // 0x176cd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176cd4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x176cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x176cd8: 0x0  nop
    ctx->pc = 0x176cd8u;
    // NOP
    // 0x176cdc: 0x0  nop
    ctx->pc = 0x176cdcu;
    // NOP
    // 0x176ce0: 0x0  nop
    ctx->pc = 0x176ce0u;
    // NOP
    // 0x176ce4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x176CE4u;
    {
        const bool branch_taken_0x176ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176ce4) {
            ctx->pc = 0x176CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176cd0;
        }
    }
    ctx->pc = 0x176CECu;
    // 0x176cec: 0x0  nop
    ctx->pc = 0x176cecu;
    // NOP
    ctx->pc = 0x176cf0u;
}
