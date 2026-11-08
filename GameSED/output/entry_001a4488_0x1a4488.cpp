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

// Function: entry_001a4488
// Address: 0x1a4488 - 0x1a448c
void entry_001a4488_0x1a4488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4488_0x1a4488");
#endif

    ctx->pc = 0x1a4488u;

    // 0x1a4488: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x1a4488u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1a448cu;
}
