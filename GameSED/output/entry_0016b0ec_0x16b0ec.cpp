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

// Function: entry_0016b0ec
// Address: 0x16b0ec - 0x16b0f0
void entry_0016b0ec_0x16b0ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016b0ec_0x16b0ec");
#endif

    ctx->pc = 0x16b0ecu;

    // 0x16b0ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16b0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x16b0f0u;
}
