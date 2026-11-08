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

// Function: entry_0013c290
// Address: 0x13c290 - 0x13c294
void entry_0013c290_0x13c290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c290_0x13c290");
#endif

    ctx->pc = 0x13c290u;

    // 0x13c290: 0xace301e0  sw          $v1, 0x1E0($a3)
    ctx->pc = 0x13c290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 480), GPR_U32(ctx, 3));
    ctx->pc = 0x13c294u;
}
