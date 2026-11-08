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

// Function: entry_0019ca1c
// Address: 0x19ca1c - 0x19ca28
void entry_0019ca1c_0x19ca1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019ca1c_0x19ca1c");
#endif

    ctx->pc = 0x19ca1cu;

    // 0x19ca1c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19CA1Cu;
    {
        const bool branch_taken_0x19ca1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ca1c) {
            ctx->pc = 0x19CA44u;
            return;
        }
    }
    ctx->pc = 0x19CA24u;
    // 0x19ca24: 0x0  nop
    ctx->pc = 0x19ca24u;
    // NOP
    ctx->pc = 0x19ca28u;
}
