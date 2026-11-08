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

// Function: entry_001a0638
// Address: 0x1a0638 - 0x1a063c
void entry_001a0638_0x1a0638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0638_0x1a0638");
#endif

    ctx->pc = 0x1a0638u;

    // 0x1a0638: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A0638u;
    {
        const bool branch_taken_0x1a0638 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0638) {
            ctx->pc = 0x1A0650u;
            return;
        }
    }
    ctx->pc = 0x1A0640u;
}
