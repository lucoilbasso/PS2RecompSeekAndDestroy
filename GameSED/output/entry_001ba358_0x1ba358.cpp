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

// Function: entry_001ba358
// Address: 0x1ba358 - 0x1ba374
void entry_001ba358_0x1ba358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ba358_0x1ba358");
#endif

    ctx->pc = 0x1ba358u;

label_1ba358:
    // 0x1ba358: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba35c: 0x0  nop
    ctx->pc = 0x1ba35cu;
    // NOP
    // 0x1ba360: 0x0  nop
    ctx->pc = 0x1ba360u;
    // NOP
    // 0x1ba364: 0x0  nop
    ctx->pc = 0x1ba364u;
    // NOP
    // 0x1ba368: 0x0  nop
    ctx->pc = 0x1ba368u;
    // NOP
    // 0x1ba36c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1BA36Cu;
    {
        const bool branch_taken_0x1ba36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba36c) {
            ctx->pc = 0x1BA358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ba358;
        }
    }
    ctx->pc = 0x1BA374u;
}
