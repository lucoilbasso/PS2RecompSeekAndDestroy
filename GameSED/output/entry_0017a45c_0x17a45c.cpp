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

// Function: entry_0017a45c
// Address: 0x17a45c - 0x17a464
void entry_0017a45c_0x17a45c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a45c_0x17a45c");
#endif

    ctx->pc = 0x17a45cu;

    // 0x17a45c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x17A45Cu;
    {
        const bool branch_taken_0x17a45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a45c) {
            ctx->pc = 0x17A420u;
            return;
        }
    }
    ctx->pc = 0x17A464u;
}
