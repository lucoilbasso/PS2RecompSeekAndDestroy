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

// Function: entry_001b5660
// Address: 0x1b5660 - 0x1b567c
void entry_001b5660_0x1b5660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5660_0x1b5660");
#endif

    ctx->pc = 0x1b5660u;

label_1b5660:
    // 0x1b5660: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b5660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b5664: 0x0  nop
    ctx->pc = 0x1b5664u;
    // NOP
    // 0x1b5668: 0x0  nop
    ctx->pc = 0x1b5668u;
    // NOP
    // 0x1b566c: 0x0  nop
    ctx->pc = 0x1b566cu;
    // NOP
    // 0x1b5670: 0x0  nop
    ctx->pc = 0x1b5670u;
    // NOP
    // 0x1b5674: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B5674u;
    {
        const bool branch_taken_0x1b5674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b5674) {
            ctx->pc = 0x1B5660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b5660;
        }
    }
    ctx->pc = 0x1B567Cu;
}
