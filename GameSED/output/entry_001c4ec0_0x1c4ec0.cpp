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

// Function: entry_001c4ec0
// Address: 0x1c4ec0 - 0x1c4edc
void entry_001c4ec0_0x1c4ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4ec0_0x1c4ec0");
#endif

    ctx->pc = 0x1c4ec0u;

label_1c4ec0:
    // 0x1c4ec0: 0x0  nop
    ctx->pc = 0x1c4ec0u;
    // NOP
    // 0x1c4ec4: 0x0  nop
    ctx->pc = 0x1c4ec4u;
    // NOP
    // 0x1c4ec8: 0x0  nop
    ctx->pc = 0x1c4ec8u;
    // NOP
    // 0x1c4ecc: 0x0  nop
    ctx->pc = 0x1c4eccu;
    // NOP
    // 0x1c4ed0: 0x0  nop
    ctx->pc = 0x1c4ed0u;
    // NOP
    // 0x1c4ed4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C4ED4u;
    {
        const bool branch_taken_0x1c4ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ed4) {
            ctx->pc = 0x1C4EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4ec0;
        }
    }
    ctx->pc = 0x1C4EDCu;
}
