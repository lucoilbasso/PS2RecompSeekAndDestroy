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

// Function: entry_001ccb44
// Address: 0x1ccb44 - 0x1ccb48
void entry_001ccb44_0x1ccb44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ccb44_0x1ccb44");
#endif

    ctx->pc = 0x1ccb44u;

    // 0x1ccb44: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1ccb44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    ctx->pc = 0x1ccb48u;
}
