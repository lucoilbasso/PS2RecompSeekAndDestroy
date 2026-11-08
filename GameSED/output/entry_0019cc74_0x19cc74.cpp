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

// Function: entry_0019cc74
// Address: 0x19cc74 - 0x19cc78
void entry_0019cc74_0x19cc74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019cc74_0x19cc74");
#endif

    ctx->pc = 0x19cc74u;

    // 0x19cc74: 0xa0480000  sb          $t0, 0x0($v0)
    ctx->pc = 0x19cc74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 8));
    ctx->pc = 0x19cc78u;
}
