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

// Function: entry_0014d0f8
// Address: 0x14d0f8 - 0x14d0fc
void entry_0014d0f8_0x14d0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014d0f8_0x14d0f8");
#endif

    ctx->pc = 0x14d0f8u;

    // 0x14d0f8: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x14d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    ctx->pc = 0x14d0fcu;
}
