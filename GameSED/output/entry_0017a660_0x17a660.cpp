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

// Function: entry_0017a660
// Address: 0x17a660 - 0x17a680
void entry_0017a660_0x17a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a660_0x17a660");
#endif

    ctx->pc = 0x17a660u;

label_17a660:
    // 0x17a660: 0x0  nop
    ctx->pc = 0x17a660u;
    // NOP
    // 0x17a664: 0x0  nop
    ctx->pc = 0x17a664u;
    // NOP
    // 0x17a668: 0x0  nop
    ctx->pc = 0x17a668u;
    // NOP
    // 0x17a66c: 0x0  nop
    ctx->pc = 0x17a66cu;
    // NOP
    // 0x17a670: 0x0  nop
    ctx->pc = 0x17a670u;
    // NOP
    // 0x17a674: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x17A674u;
    {
        const bool branch_taken_0x17a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a674) {
            ctx->pc = 0x17A660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a660;
        }
    }
    ctx->pc = 0x17A67Cu;
    // 0x17a67c: 0x0  nop
    ctx->pc = 0x17a67cu;
    // NOP
    ctx->pc = 0x17a680u;
}
