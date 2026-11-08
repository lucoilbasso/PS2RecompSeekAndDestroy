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

// Function: entry_00154168
// Address: 0x154168 - 0x154174
void entry_00154168_0x154168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154168_0x154168");
#endif

    ctx->pc = 0x154168u;

    // 0x154168: 0x8c431a2c  lw          $v1, 0x1A2C($v0)
    ctx->pc = 0x154168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6700)));
    // 0x15416c: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x15416Cu;
    {
        const bool branch_taken_0x15416c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15416c) {
            ctx->pc = 0x1541B8u;
            return;
        }
    }
    ctx->pc = 0x154174u;
}
