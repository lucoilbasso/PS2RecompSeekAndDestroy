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

// Function: entry_001a4438
// Address: 0x1a4438 - 0x1a443c
void entry_001a4438_0x1a4438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4438_0x1a4438");
#endif

    ctx->pc = 0x1a4438u;

    // 0x1a4438: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x1a4438u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1a443cu;
}
