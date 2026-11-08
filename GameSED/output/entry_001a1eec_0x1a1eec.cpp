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

// Function: entry_001a1eec
// Address: 0x1a1eec - 0x1a1ef8
void entry_001a1eec_0x1a1eec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1eec_0x1a1eec");
#endif

    ctx->pc = 0x1a1eecu;

    // 0x1a1eec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1EECu;
    {
        const bool branch_taken_0x1a1eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1eec) {
            ctx->pc = 0x1A1EFCu;
            return;
        }
    }
    ctx->pc = 0x1A1EF4u;
    // 0x1a1ef4: 0x0  nop
    ctx->pc = 0x1a1ef4u;
    // NOP
    ctx->pc = 0x1a1ef8u;
}
