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

// Function: entry_0017a4d0
// Address: 0x17a4d0 - 0x17a4d8
void entry_0017a4d0_0x17a4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a4d0_0x17a4d0");
#endif

    ctx->pc = 0x17a4d0u;

    // 0x17a4d0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x17A4D0u;
    {
        const bool branch_taken_0x17a4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a4d0) {
            ctx->pc = 0x17A4A0u;
            return;
        }
    }
    ctx->pc = 0x17A4D8u;
}
