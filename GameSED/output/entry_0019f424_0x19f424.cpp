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

// Function: entry_0019f424
// Address: 0x19f424 - 0x19f428
void entry_0019f424_0x19f424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f424_0x19f424");
#endif

    ctx->pc = 0x19f424u;

    // 0x19f424: 0x25230010  addiu       $v1, $t1, 0x10
    ctx->pc = 0x19f424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    ctx->pc = 0x19f428u;
}
