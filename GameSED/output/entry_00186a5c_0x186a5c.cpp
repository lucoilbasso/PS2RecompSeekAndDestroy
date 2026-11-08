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

// Function: entry_00186a5c
// Address: 0x186a5c - 0x186a60
void entry_00186a5c_0x186a5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186a5c_0x186a5c");
#endif

    ctx->pc = 0x186a5cu;

    // 0x186a5c: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x186a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x186a60u;
}
