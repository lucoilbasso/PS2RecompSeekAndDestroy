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

// Function: entry_00185a20
// Address: 0x185a20 - 0x185a28
void entry_00185a20_0x185a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185a20_0x185a20");
#endif

    ctx->pc = 0x185a20u;

    // 0x185a20: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x185A20u;
    {
        const bool branch_taken_0x185a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x185a20) {
            ctx->pc = 0x1859D0u;
            return;
        }
    }
    ctx->pc = 0x185A28u;
}
