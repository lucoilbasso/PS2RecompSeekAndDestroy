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

// Function: entry_001222d0
// Address: 0x1222d0 - 0x1222d4
void entry_001222d0_0x1222d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001222d0_0x1222d0");
#endif

    ctx->pc = 0x1222d0u;

    // 0x1222d0: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x1222d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
    ctx->pc = 0x1222d4u;
}
