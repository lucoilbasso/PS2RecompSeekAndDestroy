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

// Function: entry_00137220
// Address: 0x137220 - 0x137228
void entry_00137220_0x137220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137220_0x137220");
#endif

    ctx->pc = 0x137220u;

    // 0x137220: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x137220u;
    {
        const bool branch_taken_0x137220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137220) {
            ctx->pc = 0x13722Cu;
            return;
        }
    }
    ctx->pc = 0x137228u;
}
