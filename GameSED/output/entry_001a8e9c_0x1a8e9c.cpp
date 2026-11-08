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

// Function: entry_001a8e9c
// Address: 0x1a8e9c - 0x1a8ea0
void entry_001a8e9c_0x1a8e9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8e9c_0x1a8e9c");
#endif

    ctx->pc = 0x1a8e9cu;

    // 0x1a8e9c: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1a8e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1a8ea0u;
}
