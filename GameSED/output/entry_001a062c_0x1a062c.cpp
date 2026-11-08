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

// Function: entry_001a062c
// Address: 0x1a062c - 0x1a0630
void entry_001a062c_0x1a062c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a062c_0x1a062c");
#endif

    ctx->pc = 0x1a062cu;

    // 0x1a062c: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x1a062cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
    ctx->pc = 0x1a0630u;
}
