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

// Function: entry_001421cc
// Address: 0x1421cc - 0x1421d4
void entry_001421cc_0x1421cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001421cc_0x1421cc");
#endif

    ctx->pc = 0x1421ccu;

    // 0x1421cc: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1421CCu;
    {
        const bool branch_taken_0x1421cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1421cc) {
            ctx->pc = 0x1421BCu;
            return;
        }
    }
    ctx->pc = 0x1421D4u;
}
