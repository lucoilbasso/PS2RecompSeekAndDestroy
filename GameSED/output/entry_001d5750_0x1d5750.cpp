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

// Function: entry_001d5750
// Address: 0x1d5750 - 0x1d5754
void entry_001d5750_0x1d5750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5750_0x1d5750");
#endif

    ctx->pc = 0x1d5750u;

    // 0x1d5750: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d5750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x1d5754u;
}
