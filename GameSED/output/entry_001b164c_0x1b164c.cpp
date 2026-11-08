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

// Function: entry_001b164c
// Address: 0x1b164c - 0x1b165c
void entry_001b164c_0x1b164c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b164c_0x1b164c");
#endif

    ctx->pc = 0x1b164cu;

    // 0x1b164c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b1650: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x1b1650u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    // 0x1b1654: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1b1654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1b1658: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x1b1658u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
    ctx->pc = 0x1b165cu;
}
