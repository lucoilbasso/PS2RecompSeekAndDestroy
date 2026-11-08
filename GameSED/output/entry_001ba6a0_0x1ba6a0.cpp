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

// Function: entry_001ba6a0
// Address: 0x1ba6a0 - 0x1ba6bc
void entry_001ba6a0_0x1ba6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba6a0_0x1ba6a0");
#endif

    ctx->pc = 0x1ba6a0u;

label_1ba6a0:
    // 0x1ba6a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba6a4: 0x0  nop
    ctx->pc = 0x1ba6a4u;
    // NOP
    // 0x1ba6a8: 0x0  nop
    ctx->pc = 0x1ba6a8u;
    // NOP
    // 0x1ba6ac: 0x0  nop
    ctx->pc = 0x1ba6acu;
    // NOP
    // 0x1ba6b0: 0x0  nop
    ctx->pc = 0x1ba6b0u;
    // NOP
    // 0x1ba6b4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BA6B4u;
    {
        const bool branch_taken_0x1ba6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba6b4) {
            ctx->pc = 0x1BA6A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba6a0;
        }
    }
    ctx->pc = 0x1BA6BCu;
}
