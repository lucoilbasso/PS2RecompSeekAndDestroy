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

// Function: entry_001a468c
// Address: 0x1a468c - 0x1a4698
void entry_001a468c_0x1a468c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a468c_0x1a468c");
#endif

    ctx->pc = 0x1a468cu;

    // 0x1a468c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A468Cu;
    {
        const bool branch_taken_0x1a468c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a468c) {
            ctx->pc = 0x1A469Cu;
            return;
        }
    }
    ctx->pc = 0x1A4694u;
    // 0x1a4694: 0x0  nop
    ctx->pc = 0x1a4694u;
    // NOP
    ctx->pc = 0x1a4698u;
}
