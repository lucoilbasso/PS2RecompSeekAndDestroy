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

// Function: entry_001a14e8
// Address: 0x1a14e8 - 0x1a14f0
void entry_001a14e8_0x1a14e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a14e8_0x1a14e8");
#endif

    ctx->pc = 0x1a14e8u;

    // 0x1a14e8: 0x1045fff7  beq         $v0, $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1A14E8u;
    {
        const bool branch_taken_0x1a14e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1a14e8) {
            ctx->pc = 0x1A14C8u;
            return;
        }
    }
    ctx->pc = 0x1A14F0u;
}
