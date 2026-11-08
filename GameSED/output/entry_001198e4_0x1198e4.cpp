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

// Function: entry_001198e4
// Address: 0x1198e4 - 0x1198e8
void entry_001198e4_0x1198e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001198e4_0x1198e4");
#endif

    ctx->pc = 0x1198e4u;

    // 0x1198e4: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x1198e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1198e8u;
}
