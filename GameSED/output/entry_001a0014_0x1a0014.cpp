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

// Function: entry_001a0014
// Address: 0x1a0014 - 0x1a0018
void entry_001a0014_0x1a0014(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0014_0x1a0014");
#endif

    ctx->pc = 0x1a0014u;

    // 0x1a0014: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x1a0014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    ctx->pc = 0x1a0018u;
}
