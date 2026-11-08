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

// Function: entry_001733c4
// Address: 0x1733c4 - 0x1733c8
void entry_001733c4_0x1733c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001733c4_0x1733c4");
#endif

    ctx->pc = 0x1733c4u;

    // 0x1733c4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1733c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->pc = 0x1733c8u;
}
