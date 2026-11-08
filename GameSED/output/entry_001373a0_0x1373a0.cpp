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

// Function: entry_001373a0
// Address: 0x1373a0 - 0x1373a8
void entry_001373a0_0x1373a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001373a0_0x1373a0");
#endif

    ctx->pc = 0x1373a0u;

    // 0x1373a0: 0x45010050  bc1t        . + 4 + (0x50 << 2)
    ctx->pc = 0x1373A0u;
    {
        const bool branch_taken_0x1373a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1373a0) {
            ctx->pc = 0x1374E4u;
            return;
        }
    }
    ctx->pc = 0x1373A8u;
}
