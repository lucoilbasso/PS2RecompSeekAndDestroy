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

// Function: entry_001d4380
// Address: 0x1d4380 - 0x1d4384
void entry_001d4380_0x1d4380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4380_0x1d4380");
#endif

    ctx->pc = 0x1d4380u;

    // 0x1d4380: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x1d4380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    ctx->pc = 0x1d4384u;
}
