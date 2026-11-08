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

// Function: entry_001729f0
// Address: 0x1729f0 - 0x1729f8
void entry_001729f0_0x1729f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001729f0_0x1729f0");
#endif

    ctx->pc = 0x1729f0u;

    // 0x1729f0: 0x8fb30044  lw          $s3, 0x44($sp)
    ctx->pc = 0x1729f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1729f4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x1729f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->pc = 0x1729f8u;
}
