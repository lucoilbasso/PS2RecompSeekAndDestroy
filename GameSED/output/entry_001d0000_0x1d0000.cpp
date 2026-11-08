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

// Function: entry_001d0000
// Address: 0x1d0000 - 0x1d0004
void entry_001d0000_0x1d0000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d0000_0x1d0000");
#endif

    ctx->pc = 0x1d0000u;

    // 0x1d0000: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0000u;
    {
        const bool branch_taken_0x1d0000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0000) {
            ctx->pc = 0x1D0010u;
            return;
        }
    }
    ctx->pc = 0x1D0008u;
}
