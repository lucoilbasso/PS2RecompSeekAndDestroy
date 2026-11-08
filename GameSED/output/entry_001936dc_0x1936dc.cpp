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

// Function: entry_001936dc
// Address: 0x1936dc - 0x1936e0
void entry_001936dc_0x1936dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001936dc_0x1936dc");
#endif

    ctx->pc = 0x1936dcu;

    // 0x1936dc: 0x24423700  addiu       $v0, $v0, 0x3700
    ctx->pc = 0x1936dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14080));
    ctx->pc = 0x1936e0u;
}
