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

// Function: entry_001d2c0c
// Address: 0x1d2c0c - 0x1d2c10
void entry_001d2c0c_0x1d2c0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d2c0c_0x1d2c0c");
#endif

    ctx->pc = 0x1d2c0cu;

    // 0x1d2c0c: 0xafa80054  sw          $t0, 0x54($sp)
    ctx->pc = 0x1d2c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 8));
    ctx->pc = 0x1d2c10u;
}
