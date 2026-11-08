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

// Function: entry_001059c0
// Address: 0x1059c0 - 0x1059c4
void entry_001059c0_0x1059c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001059c0_0x1059c0");
#endif

    ctx->pc = 0x1059c0u;

    // 0x1059c0: 0xac48004c  sw          $t0, 0x4C($v0)
    ctx->pc = 0x1059c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 8));
    ctx->pc = 0x1059c4u;
}
