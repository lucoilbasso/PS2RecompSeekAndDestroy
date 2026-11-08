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

// Function: entry_001dc468
// Address: 0x1dc468 - 0x1dc478
void entry_001dc468_0x1dc468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc468_0x1dc468");
#endif

    ctx->pc = 0x1dc468u;

    // 0x1dc468: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1dc468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1dc46c: 0x0  nop
    ctx->pc = 0x1dc46cu;
    // NOP
    // 0x1dc470: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1DC470u;
    {
        const bool branch_taken_0x1dc470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dc470) {
            ctx->pc = 0x1DC440u;
            return;
        }
    }
    ctx->pc = 0x1DC478u;
}
