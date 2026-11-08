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

// Function: entry_001ac1e0
// Address: 0x1ac1e0 - 0x1ac1fc
void entry_001ac1e0_0x1ac1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac1e0_0x1ac1e0");
#endif

    ctx->pc = 0x1ac1e0u;

label_1ac1e0:
    // 0x1ac1e0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1ac1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac1e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ac1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ac1e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ac1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ac1ec: 0x0  nop
    ctx->pc = 0x1ac1ecu;
    // NOP
    // 0x1ac1f0: 0x0  nop
    ctx->pc = 0x1ac1f0u;
    // NOP
    // 0x1ac1f4: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AC1F4u;
    {
        const bool branch_taken_0x1ac1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ac1f4) {
            ctx->pc = 0x1AC1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ac1e0;
        }
    }
    ctx->pc = 0x1AC1FCu;
}
