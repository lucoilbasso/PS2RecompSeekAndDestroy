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

// Function: entry_001d4f34
// Address: 0x1d4f34 - 0x1d4f38
void entry_001d4f34_0x1d4f34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4f34_0x1d4f34");
#endif

    ctx->pc = 0x1d4f34u;

    // 0x1d4f34: 0x2662c668  addiu       $v0, $s3, -0x3998
    ctx->pc = 0x1d4f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952552));
    ctx->pc = 0x1d4f38u;
}
