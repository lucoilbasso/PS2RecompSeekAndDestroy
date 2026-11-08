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

// Function: entry_00170910
// Address: 0x170910 - 0x170918
void entry_00170910_0x170910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00170910_0x170910");
#endif

    ctx->pc = 0x170910u;

    // 0x170910: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x170910u;
    {
        const bool branch_taken_0x170910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170910) {
            ctx->pc = 0x170908u;
            return;
        }
    }
    ctx->pc = 0x170918u;
}
