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

// Function: entry_0012c494
// Address: 0x12c494 - 0x12c498
void entry_0012c494_0x12c494(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c494_0x12c494");
#endif

    ctx->pc = 0x12c494u;

    // 0x12c494: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x12c494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    ctx->pc = 0x12c498u;
}
