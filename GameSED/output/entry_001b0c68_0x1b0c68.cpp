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

// Function: entry_001b0c68
// Address: 0x1b0c68 - 0x1b0c6c
void entry_001b0c68_0x1b0c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0c68_0x1b0c68");
#endif

    ctx->pc = 0x1b0c68u;

    // 0x1b0c68: 0x8e71fff8  lw          $s1, -0x8($s3)
    ctx->pc = 0x1b0c68u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    ctx->pc = 0x1b0c6cu;
}
