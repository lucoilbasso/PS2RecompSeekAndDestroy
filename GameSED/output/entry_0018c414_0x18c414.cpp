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

// Function: entry_0018c414
// Address: 0x18c414 - 0x18c418
void entry_0018c414_0x18c414(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c414_0x18c414");
#endif

    ctx->pc = 0x18c414u;

    // 0x18c414: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x18c414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    ctx->pc = 0x18c418u;
}
