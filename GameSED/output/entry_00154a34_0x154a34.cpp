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

// Function: entry_00154a34
// Address: 0x154a34 - 0x154a38
void entry_00154a34_0x154a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154a34_0x154a34");
#endif

    ctx->pc = 0x154a34u;

    // 0x154a34: 0x8e62037c  lw          $v0, 0x37C($s3)
    ctx->pc = 0x154a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 892)));
    ctx->pc = 0x154a38u;
}
