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

// Function: entry_001b1960
// Address: 0x1b1960 - 0x1b1964
void entry_001b1960_0x1b1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1960_0x1b1960");
#endif

    ctx->pc = 0x1b1960u;

    // 0x1b1960: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1b1960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->pc = 0x1b1964u;
}
