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

// Function: entry_001699d0
// Address: 0x1699d0 - 0x1699d4
void entry_001699d0_0x1699d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001699d0_0x1699d0");
#endif

    ctx->pc = 0x1699d0u;

    // 0x1699d0: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1699d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    ctx->pc = 0x1699d4u;
}
