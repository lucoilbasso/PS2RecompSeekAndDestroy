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

// Function: entry_00125d60
// Address: 0x125d60 - 0x125d64
void entry_00125d60_0x125d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125d60_0x125d60");
#endif

    ctx->pc = 0x125d60u;

    // 0x125d60: 0xa3a20082  sb          $v0, 0x82($sp)
    ctx->pc = 0x125d60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 130), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x125d64u;
}
