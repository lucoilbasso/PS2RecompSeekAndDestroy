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

// Function: entry_001a1ccc
// Address: 0x1a1ccc - 0x1a1cd8
void entry_001a1ccc_0x1a1ccc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1ccc_0x1a1ccc");
#endif

    ctx->pc = 0x1a1cccu;

    // 0x1a1ccc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1CCCu;
    {
        const bool branch_taken_0x1a1ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ccc) {
            ctx->pc = 0x1A1CDCu;
            return;
        }
    }
    ctx->pc = 0x1A1CD4u;
    // 0x1a1cd4: 0x0  nop
    ctx->pc = 0x1a1cd4u;
    // NOP
    ctx->pc = 0x1a1cd8u;
}
