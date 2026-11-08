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

// Function: entry_0016b6a8
// Address: 0x16b6a8 - 0x16b6ac
void entry_0016b6a8_0x16b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b6a8_0x16b6a8");
#endif

    ctx->pc = 0x16b6a8u;

    // 0x16b6a8: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x16b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    ctx->pc = 0x16b6acu;
}
