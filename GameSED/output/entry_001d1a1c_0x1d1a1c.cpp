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

// Function: entry_001d1a1c
// Address: 0x1d1a1c - 0x1d1a20
void entry_001d1a1c_0x1d1a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d1a1c_0x1d1a1c");
#endif

    ctx->pc = 0x1d1a1cu;

    // 0x1d1a1c: 0xa3a001d1  sb          $zero, 0x1D1($sp)
    ctx->pc = 0x1d1a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1d1a20u;
}
