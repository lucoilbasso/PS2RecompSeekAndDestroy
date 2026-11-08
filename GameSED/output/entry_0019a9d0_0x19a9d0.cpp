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

// Function: entry_0019a9d0
// Address: 0x19a9d0 - 0x19a9d4
void entry_0019a9d0_0x19a9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019a9d0_0x19a9d0");
#endif

    ctx->pc = 0x19a9d0u;

    // 0x19a9d0: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x19a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x19a9d4u;
}
