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

// Function: entry_0018f040
// Address: 0x18f040 - 0x18f044
void entry_0018f040_0x18f040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f040_0x18f040");
#endif

    ctx->pc = 0x18f040u;

    // 0x18f040: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x18f040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->pc = 0x18f044u;
}
