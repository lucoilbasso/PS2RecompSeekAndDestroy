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

// Function: entry_001a4554
// Address: 0x1a4554 - 0x1a4560
void entry_001a4554_0x1a4554(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4554_0x1a4554");
#endif

    ctx->pc = 0x1a4554u;

    // 0x1a4554: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4554u;
    {
        const bool branch_taken_0x1a4554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4554) {
            ctx->pc = 0x1A4564u;
            return;
        }
    }
    ctx->pc = 0x1A455Cu;
    // 0x1a455c: 0x0  nop
    ctx->pc = 0x1a455cu;
    // NOP
    ctx->pc = 0x1a4560u;
}
