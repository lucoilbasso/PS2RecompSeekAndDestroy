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

// Function: entry_00182a74
// Address: 0x182a74 - 0x182a78
void entry_00182a74_0x182a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182a74_0x182a74");
#endif

    ctx->pc = 0x182a74u;

    // 0x182a74: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x182a74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    ctx->pc = 0x182a78u;
}
