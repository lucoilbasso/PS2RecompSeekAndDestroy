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

// Function: entry_001da96c
// Address: 0x1da96c - 0x1da970
void entry_001da96c_0x1da96c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da96c_0x1da96c");
#endif

    ctx->pc = 0x1da96cu;

    // 0x1da96c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1da96cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1da970u;
}
