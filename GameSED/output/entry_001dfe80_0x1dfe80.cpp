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

// Function: entry_001dfe80
// Address: 0x1dfe80 - 0x1dfe84
void entry_001dfe80_0x1dfe80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfe80_0x1dfe80");
#endif

    ctx->pc = 0x1dfe80u;

    // 0x1dfe80: 0xae7001a4  sw          $s0, 0x1A4($s3)
    ctx->pc = 0x1dfe80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 420), GPR_U32(ctx, 16));
    ctx->pc = 0x1dfe84u;
}
