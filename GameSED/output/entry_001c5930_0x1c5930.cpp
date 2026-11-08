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

// Function: entry_001c5930
// Address: 0x1c5930 - 0x1c5944
void entry_001c5930_0x1c5930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c5930_0x1c5930");
#endif

    ctx->pc = 0x1c5930u;

    // 0x1c5930: 0x8c43ee70  lw          $v1, -0x1190($v0)
    ctx->pc = 0x1c5930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962800)));
    // 0x1c5934: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5934u;
    {
        const bool branch_taken_0x1c5934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5934) {
            ctx->pc = 0x1C5944u;
            return;
        }
    }
    ctx->pc = 0x1C593Cu;
    // 0x1c593c: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x1c593cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x1c5940: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c5940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1c5944u;
}
