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

// Function: entry_001a0004
// Address: 0x1a0004 - 0x1a0008
void entry_001a0004_0x1a0004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0004_0x1a0004");
#endif

    ctx->pc = 0x1a0004u;

    // 0x1a0004: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1a0004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x1a0008u;
}
