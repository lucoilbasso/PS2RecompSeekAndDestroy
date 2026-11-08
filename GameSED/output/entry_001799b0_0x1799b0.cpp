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

// Function: entry_001799b0
// Address: 0x1799b0 - 0x1799b8
void entry_001799b0_0x1799b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001799b0_0x1799b0");
#endif

    ctx->pc = 0x1799b0u;

    // 0x1799b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1799b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1799b4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x1799b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x1799b8u;
}
