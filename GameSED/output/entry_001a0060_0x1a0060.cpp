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

// Function: entry_001a0060
// Address: 0x1a0060 - 0x1a0068
void entry_001a0060_0x1a0060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0060_0x1a0060");
#endif

    ctx->pc = 0x1a0060u;

    // 0x1a0060: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A0060u;
    {
        const bool branch_taken_0x1a0060 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0060) {
            ctx->pc = 0x1A007Cu;
            return;
        }
    }
    ctx->pc = 0x1A0068u;
}
