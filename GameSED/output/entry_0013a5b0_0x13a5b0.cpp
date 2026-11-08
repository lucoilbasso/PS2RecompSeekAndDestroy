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

// Function: entry_0013a5b0
// Address: 0x13a5b0 - 0x13a5b4
void entry_0013a5b0_0x13a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013a5b0_0x13a5b0");
#endif

    ctx->pc = 0x13a5b0u;

    // 0x13a5b0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x13a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    ctx->pc = 0x13a5b4u;
}
