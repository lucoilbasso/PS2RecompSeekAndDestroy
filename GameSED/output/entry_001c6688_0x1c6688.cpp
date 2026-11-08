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

// Function: entry_001c6688
// Address: 0x1c6688 - 0x1c6698
void entry_001c6688_0x1c6688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6688_0x1c6688");
#endif

    ctx->pc = 0x1c6688u;

    // 0x1c6688: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C6688u;
    {
        const bool branch_taken_0x1c6688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c6688) {
            ctx->pc = 0x1C66C8u;
            return;
        }
    }
    ctx->pc = 0x1C6690u;
    // 0x1c6690: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1C6690u;
    {
        const bool branch_taken_0x1c6690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6690) {
            ctx->pc = 0x1C66F0u;
            return;
        }
    }
    ctx->pc = 0x1C6698u;
}
