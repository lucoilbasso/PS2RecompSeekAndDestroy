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

// Function: entry_001366fc
// Address: 0x1366fc - 0x136700
void entry_001366fc_0x1366fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001366fc_0x1366fc");
#endif

    ctx->pc = 0x1366fcu;

    // 0x1366fc: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x1366fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    ctx->pc = 0x136700u;
}
