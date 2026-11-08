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

// Function: entry_001b2648
// Address: 0x1b2648 - 0x1b2664
void entry_001b2648_0x1b2648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2648_0x1b2648");
#endif

    ctx->pc = 0x1b2648u;

label_1b2648:
    // 0x1b2648: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b2648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b264c: 0x0  nop
    ctx->pc = 0x1b264cu;
    // NOP
    // 0x1b2650: 0x0  nop
    ctx->pc = 0x1b2650u;
    // NOP
    // 0x1b2654: 0x0  nop
    ctx->pc = 0x1b2654u;
    // NOP
    // 0x1b2658: 0x0  nop
    ctx->pc = 0x1b2658u;
    // NOP
    // 0x1b265c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B265Cu;
    {
        const bool branch_taken_0x1b265c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b265c) {
            ctx->pc = 0x1B2648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b2648;
        }
    }
    ctx->pc = 0x1B2664u;
}
